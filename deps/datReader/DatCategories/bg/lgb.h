#ifndef _LGB_H
#define _LGB_H

#include <cstring>
#include <memory>
#include <cstdint>
#include <iostream>
#include <vector>
#include <map>
#include <string>

#include "matrix4.h"
#include "vec3.h"
#include "sgb.h"
#include "LgbTypes.h"

// based on https://github.com/ufx/SaintCoinach/blob/master/SaintCoinach/Graphics/Lgb/
struct LGB_FILE;
struct LGB_FILE_HEADER;
struct LGB_GROUP;
struct LGB_GROUP_HEADER;

class LgbEntry
{
public:
  char* m_buf;
  uint32_t m_offset;
  InstanceObject header;

  LgbEntry()
  {
    m_buf = nullptr;
    m_offset = 0;
    memset( &header, 0, sizeof( header ) );
  };

  LgbEntry( char* buf, uint32_t offset )
  {
    m_buf = buf;
    m_offset = offset;
    header = *reinterpret_cast< InstanceObject* >( buf + offset );
  };

  const LgbEntryType getType() const
  {
    return header.type;
  };

  virtual ~LgbEntry()
  {
  };
};


class LGB_BGPARTS_ENTRY : public LgbEntry
{
public:
  BgPartsData data;
  std::string name;
  std::string modelFileName;
  std::string collisionFileName;

  LGB_BGPARTS_ENTRY()
  {
  };

  LGB_BGPARTS_ENTRY( char* buf, uint32_t offset ) : LgbEntry( buf, offset )
  {
    data = *reinterpret_cast< BgPartsData* >( buf + offset );
    name = std::string( buf + offset + header.nameOffset );
    modelFileName = std::string( buf + offset + data.modelFileOffset );
    collisionFileName = std::string( buf + offset + data.collisionFileOffset );
  };
};

class LGB_GIMMICK_ENTRY : public LgbEntry
{
public:
  GimmickData data;
  std::string name;
  std::string gimmickFileName;

  LGB_GIMMICK_ENTRY( char* buf, uint32_t offset ) : LgbEntry( buf, offset )
  {
    data = *reinterpret_cast< GimmickData* >( buf + offset );
    name = std::string( buf + offset + header.nameOffset );
    gimmickFileName = std::string( buf + offset + data.gimmickFileOffset );
  };
};

class LGB_ENPC_ENTRY : public LgbEntry
{
public:
  ENpcData data;
  std::string name;

  LGB_ENPC_ENTRY( char* buf, uint32_t offset ) :
    LgbEntry( buf, offset )
  {
    data = *reinterpret_cast< ENpcData* >( buf + offset );
    name = std::string( buf + offset + header.nameOffset );
  };
};

class LGB_EOBJ_ENTRY : public LgbEntry
{
public:
  EObjData data;
  std::string name;

  LGB_EOBJ_ENTRY( char* buf, uint32_t offset ) : LgbEntry( buf, offset )
  {
    data = *reinterpret_cast< EObjData* >( buf + offset );
    name = std::string( buf + offset + header.nameOffset );
  };
};

struct LGB_MAP_RANGE_ENTRY : public LgbEntry
{
public:
  MapRangeData data;
  std::string name;

  LGB_MAP_RANGE_ENTRY( char* buf, uint32_t offset ) : LgbEntry( buf, offset )
  {
    data = *reinterpret_cast< MapRangeData* >( buf + offset );
    name = std::string( buf + offset + header.nameOffset );
  };
};

struct LGB_EXIT_RANGE_ENTRY : public LgbEntry
{
public:
  ExitRangeData data;
  std::string name;

  LGB_EXIT_RANGE_ENTRY( char* buf, uint32_t offset ) : LgbEntry( buf, offset )
  {
    data = *reinterpret_cast< ExitRangeData* >( buf + offset );
    name = std::string( buf + offset + header.nameOffset );
  };
};

struct LGB_POP_RANGE_ENTRY : public LgbEntry
{
public:
  PopRangeData data;

  LGB_POP_RANGE_ENTRY( char* buf, uint32_t offset ) : LgbEntry( buf, offset )
  {
    data = *reinterpret_cast< PopRangeData* >( buf + offset );
  };
};

struct LGB_GROUP_HEADER
{
  uint32_t id;
  int32_t groupNameOffset;
  int32_t entriesOffset;
  int32_t entryCount;
  uint32_t unknown2;
  uint32_t unknown3;
  uint32_t unknown4;
  uint32_t unknown5;
  uint32_t unknown6;
  uint32_t unknown7;
  uint32_t unknown8;
  uint32_t unknown9;
  uint32_t unknown10;
};

struct LGB_GROUP
{
  LGB_FILE* parent;
  LGB_GROUP_HEADER header;
  std::string name;
  std::vector< std::shared_ptr< LgbEntry > > entries;

  LGB_GROUP( char* buf, LGB_FILE* parentStruct, uint32_t offset )
  {
    parent = parentStruct;
    header = *reinterpret_cast< LGB_GROUP_HEADER* >( buf + offset );
    name = std::string( buf + offset + header.groupNameOffset );
    const auto entriesOffset = offset + header.entriesOffset;
    for( auto i = 0; i < header.entryCount; ++i )
    {
      const auto entryOffset = entriesOffset + *reinterpret_cast< int32_t* >( buf + ( entriesOffset + i * 4 ) );

      try
      {
        const auto type = *reinterpret_cast< LgbEntryType* >( buf + entryOffset );
        if( type == LgbEntryType::BgParts )
        {
          entries.push_back( std::make_shared< LGB_BGPARTS_ENTRY >( buf, entryOffset ) );
        }
        else if( type == LgbEntryType::Gimmick )
        {
          entries.push_back( std::make_shared< LGB_GIMMICK_ENTRY >( buf, entryOffset ) );
        }
        else if( type == LgbEntryType::EventNpc )
        {
          entries.push_back( std::make_shared< LGB_ENPC_ENTRY >( buf, entryOffset ) );
        }
        else if( type == LgbEntryType::EventObject )
        {
          entries.push_back( std::make_shared< LGB_EOBJ_ENTRY >( buf, entryOffset ) );
        }
        else if( type == LgbEntryType::ExitRange )
        {
          entries.push_back( std::make_shared< LGB_EXIT_RANGE_ENTRY >( buf, entryOffset ) );
        }
        else if( type == LgbEntryType::MapRange )
        {
          entries.push_back( std::make_shared< LGB_MAP_RANGE_ENTRY >( buf, entryOffset ) );
        }
        else
        {
          entries.push_back( std::make_shared< LgbEntry >( buf, entryOffset ) );
        }
      }
      catch( std::exception& e )
      {
        std::cout << name << " " << e.what() << std::endl;
      }
    }
  };
};

struct LGB_FILE_HEADER
{
  char magic[4]; // LGB 1
  uint32_t fileSize;
  uint32_t unknown;
  char magic2[4]; // LGP1
  uint32_t unknown2;
  uint32_t unknown3;
  uint32_t unknown4;
  uint32_t unknown5;
  int32_t groupCount;
};

struct LGB_FILE
{
  LGB_FILE_HEADER header;
  std::vector< LGB_GROUP > groups;
  std::string m_name;

  LGB_FILE( char* buf, const std::string& name ) : LGB_FILE( buf )
  {
    m_name = name;
  }

  LGB_FILE( char* buf )
  {
    header = *reinterpret_cast< LGB_FILE_HEADER* >( buf );
    if( strncmp( &header.magic[ 0 ], "LGB1", 4 ) != 0 || strncmp( &header.magic2[ 0 ], "LGP1", 4 ) != 0 )
      throw std::runtime_error( "Invalid LGB file!" );

    constexpr auto baseOffset = sizeof( header );
    for( auto i = 0; i < header.groupCount; ++i )
    {
      const auto groupOffset = baseOffset + *reinterpret_cast< int32_t* >( buf + ( baseOffset + i * 4 ) );
      const auto group = LGB_GROUP( buf, this, groupOffset );
      groups.push_back( group );
    }
  };
};

/*
#if __cplusplus >= 201703L
#include <experimental/filesystem>
std::map<std::string, LGB_FILE> getLgbFiles( const std::string& dir )
{
   namespace fs = std::experimental::filesystem;
   std::map<std::string, LGB_FILE> fileMap;
   for( const auto& path : fs::recursive_directory_iterator( dir ) )
   {
      if( path.path().extension() == ".lgb" )
      {
         const auto& strPath = path.path().string();
         auto f = fopen( strPath.c_str(), "rb" );
         fseek( f, 0, SEEK_END );
         const auto size = ftell( f );
         std::vector<char> bytes( size );
         rewind( f );
         fread( bytes.data(), 1, size, f );
         fclose( f );
         try
         {
            LGB_FILE lgbFile( bytes.data() );
            fileMap.insert( std::make_pair( strPath, lgbFile ) );
         }
         catch( std::exception& e )
         {
            std::cout << "Unable to load " << strPath << std::endl;
         }
      }
   }
   return fileMap;
}
#endif
*/
#endif