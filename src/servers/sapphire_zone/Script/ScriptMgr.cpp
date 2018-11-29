#include <Logging/Logger.h>
#include <Exd/ExdDataGenerated.h>
#include <Config/ConfigMgr.h>

#include <watchdog/Watchdog.h>

#include "Zone/Zone.h"
#include "Zone/InstanceContent.h"
#include "Actor/Player.h"
#include "ServerMgr.h"
#include "Event/EventHandler.h"
#include "Event/EventHelper.h"

#include "StatusEffect/StatusEffect.h"

#include "Network/PacketWrappers/ServerNoticePacket.h"

#include "Script/ScriptMgr.h"

#include "NativeScriptMgr.h"
#include "ServerMgr.h"
#include "Framework.h"

// enable the ambiguity fix for every platform to avoid #define nonsense
#define WIN_AMBIGUITY_FIX

extern Sapphire::Framework g_fw;

namespace fs = std::experimental::filesystem;

Sapphire::Scripting::ScriptMgr::ScriptMgr() :
  m_firstScriptChangeNotificiation( false )
{
  m_nativeScriptMgr = createNativeScriptMgr();
}

Sapphire::Scripting::ScriptMgr::~ScriptMgr()
{
  Watchdog::unwatchAll();
}

void Sapphire::Scripting::ScriptMgr::update()
{
  m_nativeScriptMgr->processLoadQueue();
}

bool Sapphire::Scripting::ScriptMgr::init()
{
  std::set< std::string > files;
  auto pConfig = g_fw.get< ConfigMgr >();
  auto pLog = g_fw.get< Logger >();

  auto status = loadDir( pConfig->getValue< std::string >( "Scripts", "Path", "./compiledscripts/" ),
                         files, m_nativeScriptMgr->getModuleExtension() );

  if( !status )
  {
    pLog->error( std::string( __func__ ) +
                 ": failed to load scripts, the server will not function correctly without scripts loaded." );
    return false;
  }

  uint32_t scriptsFound = 0;
  uint32_t scriptsLoaded = 0;

  for( auto itr = files.begin(); itr != files.end(); ++itr )
  {
    auto& path = *itr;

    scriptsFound++;

    if( m_nativeScriptMgr->loadScript( path ) )
      scriptsLoaded++;
  }

  pLog->info(
    "ScriptMgr: Loaded " + std::to_string( scriptsLoaded ) + "/" + std::to_string( scriptsFound ) + " modules" );

  watchDirectories();

  return true;
}

void Sapphire::Scripting::ScriptMgr::watchDirectories()
{
  auto pConfig = g_fw.get< ConfigMgr >();
  auto shouldWatch = pConfig->getValue< bool >( "Scripts", "HotSwap", true );
  if( !shouldWatch )
    return;

  Watchdog::watchMany( pConfig->getValue< std::string >( "Scripts", "Path", "./compiledscripts/" ) + "*" +
                       m_nativeScriptMgr->getModuleExtension(),
                       [ this ]( const std::vector< ci::fs::path >& paths )
                       {
                         if( !m_firstScriptChangeNotificiation )
                         {
                           // for whatever reason, the first time this runs, it detects every file as changed
                           // so we're always going to ignore the first notification
                           m_firstScriptChangeNotificiation = true;
                           return;
                         }
                         auto pLog = g_fw.get< Logger >();

                         for( auto path : paths )
                         {
                           if( m_nativeScriptMgr->isModuleLoaded( path.stem().string() ) )
                           {
                             pLog->debug( "Reloading changed script: " + path.stem().string() );

                             m_nativeScriptMgr->queueScriptReload( path.stem().string() );
                           }
                           else
                           {
                             pLog->debug( "Loading new script: " + path.stem().string() );

                             m_nativeScriptMgr->loadScript( path.string() );
                           }
                         }
                       } );
}

bool Sapphire::Scripting::ScriptMgr::loadDir( const std::string& dirname, std::set< std::string >& files,
                                          const std::string& ext )
{

  auto pLog = g_fw.get< Logger >();
  pLog->info( "ScriptMgr: loading scripts from " + dirname );

  if( !fs::exists( dirname ) )
  {
    pLog->error( "ScriptMgr: scripts directory doesn't exist" );
    return false;
  }

  fs::path targetDir( dirname );

  fs::directory_iterator iter( targetDir );

  for( const auto& i : iter )
  {
    if( fs::is_regular_file( i ) && fs::path( i ).extension() == ext )
    {
      files.insert( fs::path( i ).string() );
    }
  }

  if( files.size() )
    return true;
  else
  {
    pLog->error( "ScriptMgr: couldn't find any script modules" );
    return false;
  }
}

void Sapphire::Scripting::ScriptMgr::onPlayerFirstEnterWorld( Entity::Player& player )
{
//   try
//   {
//      std::string test = m_onFirstEnterWorld( player );
//   }
//   catch( const std::exception &e )
//   {
//      std::string what = e.what();
//      g_log.Log( LoggingSeverity::error, what );
//   }
}

bool Sapphire::Scripting::ScriptMgr::onTalk( Entity::Player& player, uint64_t actorId, uint32_t eventId )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId );
  if( script )
  {
    script->onTalk( eventId, player, actorId );
    return true;
  }
  else
  {
    auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId & 0xFFFF0000 );
    if( !script )
      return false;

    script->onTalk( eventId, player, actorId );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onEnterTerritory( Entity::Player& player, uint32_t eventId,
                                                   uint16_t param1, uint16_t param2 )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId );
  if( !script )
    return false;
  script->onEnterTerritory( player, eventId, param1, param2 );
  return true;
}

bool Sapphire::Scripting::ScriptMgr::onWithinRange( Entity::Player& player, uint32_t eventId, uint32_t param1,
                                                float x, float y, float z )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId );
  if( !script )
    return false;
  script->onWithinRange( player, eventId, param1, x, y, z );
  return true;
}

bool Sapphire::Scripting::ScriptMgr::onOutsideRange( Entity::Player& player, uint32_t eventId, uint32_t param1,
                                                 float x, float y, float z )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId );
  if( !script )
    return false;
  script->onOutsideRange( player, eventId, param1, x, y, z );
  return true;
}

bool Sapphire::Scripting::ScriptMgr::onEmote( Entity::Player& player, uint64_t actorId,
                                          uint32_t eventId, uint8_t emoteId )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId );
  if( !script )
    return false;
  script->onEmote( actorId, eventId, emoteId, player );
  return true;
}

bool Sapphire::Scripting::ScriptMgr::onEventHandlerReturn( Entity::Player& player, uint32_t eventId,
                                                       uint16_t subEvent, uint16_t param1, uint16_t param2,
                                                       uint16_t param3 )
{

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onEventHandlerTradeReturn( Entity::Player& player, uint32_t eventId,
                                                            uint16_t subEvent, uint16_t param, uint32_t catalogId )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId );
  if( script )
  {
    script->onEventHandlerTradeReturn( player, eventId, subEvent, param, catalogId );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onEventItem( Entity::Player& player, uint32_t eventItemId,
                                              uint32_t eventId, uint32_t castTime, uint64_t targetId )
{
  std::string eventName = "onEventItem";
  std::string objName = Event::getEventName( eventId );
  player.sendDebug( "Calling: " + objName + "." + eventName + " - " + std::to_string( eventId ) );

  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( eventId );
  if( script )
  {
    player.eventStart( targetId, eventId, Event::EventHandler::Item, 0, 0 );

    script->onEventItem( player, eventItemId, eventId, castTime, targetId );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onMobKill( Entity::Player& player, uint16_t nameId )
{
  std::string eventName = "onBnpcKill_" + std::to_string( nameId );


  // loop through all active quests and try to call available onMobKill callbacks
  for( size_t i = 0; i < 30; i++ )
  {
    auto activeQuests = player.getQuestActive( static_cast< uint16_t >( i ) );
    if( !activeQuests )
      continue;

    uint16_t questId = activeQuests->c.questId;

    auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::EventScript >( questId );
    if( script )
    {
      std::string objName = Event::getEventName( 0x00010000 | questId );

      player.sendDebug( "Calling: " + objName + "." + eventName );

      script->onNpcKill( nameId, player );
    }
  }

  return true;
}

bool Sapphire::Scripting::ScriptMgr::onCastFinish( Entity::Player& player, Entity::CharaPtr pTarget, uint32_t actionId )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::ActionScript >( actionId );

  if( script )
    script->onCastFinish( player, *pTarget );
  return true;
}

bool Sapphire::Scripting::ScriptMgr::onStatusReceive( Entity::CharaPtr pActor, uint32_t effectId )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::StatusEffectScript >( effectId );

  if( script )
  {
    if( pActor->isPlayer() )
      pActor->getAsPlayer()->sendDebug( "Calling status receive for statusid: " + std::to_string( effectId ) );

    script->onApply( *pActor );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onStatusTick( Entity::CharaPtr pChara, Sapphire::StatusEffect::StatusEffect& effect )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::StatusEffectScript >( effect.getId() );
  if( script )
  {
    if( pChara->isPlayer() )
      pChara->getAsPlayer()->sendDebug( "Calling status tick for statusid: " + std::to_string( effect.getId() ) );

    script->onTick( *pChara );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onStatusTimeOut( Entity::CharaPtr pChara, uint32_t effectId )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::StatusEffectScript >( effectId );
  if( script )
  {
    if( pChara->isPlayer() )
      pChara->getAsPlayer()->sendDebug( "Calling status timeout for statusid: " + std::to_string( effectId ) );

    script->onExpire( *pChara );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onZoneInit( ZonePtr pZone )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::ZoneScript >( pZone->getTerritoryTypeId() );
  if( script )
  {
    script->onZoneInit();
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onInstanceInit( InstanceContentPtr instance )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::InstanceContentScript >( instance->getDirectorId() );
  if( script )
  {
    script->onInit( instance );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onInstanceUpdate( InstanceContentPtr instance, uint32_t currTime )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::InstanceContentScript >( instance->getDirectorId() );

  if( script )
  {
    script->onUpdate( instance, currTime );
    return true;
  }

  return false;
}

bool Sapphire::Scripting::ScriptMgr::onInstanceEnterTerritory( InstanceContentPtr instance, Entity::Player& player,
                                                           uint32_t eventId, uint16_t param1, uint16_t param2 )
{
  auto script = m_nativeScriptMgr->getScript< Sapphire::ScriptAPI::InstanceContentScript >( instance->getDirectorId() );
  if( script )
  {
    script->onEnterTerritory( instance, player, eventId, param1, param2 );
    return true;
  }

  return false;
}

Sapphire::Scripting::NativeScriptMgr& Sapphire::Scripting::ScriptMgr::getNativeScriptHandler()
{
  return *m_nativeScriptMgr;
}
