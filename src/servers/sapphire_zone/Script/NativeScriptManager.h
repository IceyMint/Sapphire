#ifndef NATIVE_SCRIPT_MGR_H
#define NATIVE_SCRIPT_MGR_H

#include <unordered_map>
#include <set>
#include <queue>

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <boost/filesystem.hpp>

#include <common/Crypt/md5.h>

#include "ScriptLoader.h"

namespace Core {
namespace Scripting {

   class NativeScriptManager
   {
   protected:
      std::unordered_map< std::size_t, std::unordered_map< uint32_t, ScriptObject* > > m_scripts;
      std::map< std::size_t, uint32_t > m_allocatedScriptIds;

      ScriptLoader m_loader;
      SapphireObjects* m_objects;

      std::queue< std::string > m_scriptLoadQueue;

      bool unloadScript( ScriptInfo* info );

   public:
      NativeScriptManager();
      ~NativeScriptManager();

      bool loadScript( const std::string& path );
      bool unloadScript( const std::string& name );
      void queueScriptReload( const std::string& name );
      void findScripts( std::set< Core::Scripting::ScriptInfo* >& scripts, const std::string& search );

      void processLoadQueue();

      const std::string getModuleExtension();
      bool isModuleLoaded( const std::string& name );

      template< class T >
      T* getScript( uint32_t scriptId )
      {
         auto type = typeid( T ).hash_code();

         auto script = m_scripts[type].find( scriptId );
         if( script == m_scripts[type].end() )
            return nullptr;

         return dynamic_cast< T* >( script->second );
      }

      template< class T >
      std::unordered_map< uint32_t, ScriptObject* >& getScriptsOfType()
      {
         auto type = typeid( T ).hash_code();

         return m_scripts[type];
      };
   };



   boost::shared_ptr< NativeScriptManager > createNativeScriptMgr();
} }


#endif
