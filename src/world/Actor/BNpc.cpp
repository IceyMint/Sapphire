#include <Util/Util.h>
#include <Util/UtilMath.h>
#include <Network/PacketContainer.h>
#include <Exd/ExdDataGenerated.h>
#include <utility>
#include <Network/CommonActorControl.h>
#include <Network/PacketWrappers/EffectPacket.h>
#include <Network/PacketDef/Zone/ClientZoneDef.h>
#include <Logging/Logger.h>

#include "Forwards.h"
#include "Action/Action.h"

#include "Territory/Zone.h"

#include "Network/GameConnection.h"
#include "Network/PacketWrappers/ActorControlPacket142.h"
#include "Network/PacketWrappers/ActorControlPacket143.h"
#include "Network/PacketWrappers/ActorControlPacket144.h"
#include "Network/PacketWrappers/UpdateHpMpTpPacket.h"
#include "Network/PacketWrappers/NpcSpawnPacket.h"
#include "Network/PacketWrappers/MoveActorPacket.h"
#include "Navi/NaviProvider.h"

#include "StatusEffect/StatusEffect.h"
#include "Action/ActionCollision.h"
#include "ServerMgr.h"
#include "Session.h"
#include "Math/CalcBattle.h"
#include "Chara.h"
#include "Player.h"
#include "BNpc.h"
#include "BNpcTemplate.h"
#include "Manager/TerritoryMgr.h"
#include "Common.h"
#include "Framework.h"
#include <Logging/Logger.h>
#include <Manager/NaviMgr.h>

using namespace Sapphire::Common;
using namespace Sapphire::Network::Packets;
using namespace Sapphire::Network::Packets::Server;
using namespace Sapphire::Network::ActorControl;

Sapphire::Entity::BNpc::BNpc( FrameworkPtr pFw ) :
  Npc( ObjKind::BattleNpc, pFw )
{
}

Sapphire::Entity::BNpc::BNpc( uint32_t id, BNpcTemplatePtr pTemplate, float posX, float posY, float posZ, float rot,
                              uint8_t level, uint32_t maxHp, ZonePtr pZone, FrameworkPtr pFw ) :
  Npc( ObjKind::BattleNpc, pFw )
{
  m_id = id;
  m_modelChara = pTemplate->getModelChara();
  m_displayFlags = pTemplate->getDisplayFlags();
  m_pose = pTemplate->getPose();
  m_aggressionMode = pTemplate->getAggressionMode();
  m_weaponMain = pTemplate->getWeaponMain();
  m_weaponSub = pTemplate->getWeaponSub();
  m_bNpcNameId = pTemplate->getBNpcNameId();
  m_bNpcBaseId = pTemplate->getBNpcBaseId();
  m_enemyType = pTemplate->getEnemyType();
  m_pos.x = posX;
  m_pos.y = posY;
  m_pos.z = posZ;
  m_rot = rot;
  m_level = level;
  m_invincibilityType = InvincibilityNone;

  m_pCurrentZone = pZone;

  m_spawnPos = m_pos;

  m_timeOfDeath = 0;

  m_maxHp = maxHp;
  m_maxMp = 200;
  m_hp = maxHp;
  m_mp = 200;

  m_state = BNpcState::Idle;
  m_status = ActorStatus::Idle;

  m_baseStats.max_hp = maxHp;
  m_baseStats.max_mp = 200;

  memcpy( m_customize, pTemplate->getCustomize(), sizeof( m_customize ) );
  memcpy( m_modelEquip, pTemplate->getModelEquip(), sizeof( m_modelEquip ) );

}

Sapphire::Entity::BNpc::~BNpc()
{
}

uint8_t Sapphire::Entity::BNpc::getAggressionMode() const
{
  return m_aggressionMode;
}

uint8_t Sapphire::Entity::BNpc::getEnemyType() const
{
  return m_enemyType;
}

uint64_t Sapphire::Entity::BNpc::getWeaponMain() const
{
  return m_weaponMain;
}

uint64_t Sapphire::Entity::BNpc::getWeaponSub() const
{
  return m_weaponSub;
}

uint16_t Sapphire::Entity::BNpc::getModelChara() const
{
  return m_modelChara;
}

uint8_t Sapphire::Entity::BNpc::getLevel() const
{
  return m_level;
}

uint32_t Sapphire::Entity::BNpc::getBNpcBaseId() const
{
  return m_bNpcBaseId;
}

uint32_t Sapphire::Entity::BNpc::getBNpcNameId() const
{
  return m_bNpcNameId;
}

void Sapphire::Entity::BNpc::spawn( PlayerPtr pTarget )
{
  pTarget->queuePacket( std::make_shared< NpcSpawnPacket >( *this, *pTarget ) );
}

void Sapphire::Entity::BNpc::despawn( PlayerPtr pTarget )
{
  pTarget->freePlayerSpawnId( getId() );
  pTarget->queuePacket( makeActorControl143(  m_id, DespawnZoneScreenMsg, 0x04, getId(), 0x01 ) );
}

Sapphire::Entity::BNpcState Sapphire::Entity::BNpc::getState() const
{
  return m_state;
}

void Sapphire::Entity::BNpc::setState( BNpcState state )
{
  m_state = state;
}

void Sapphire::Entity::BNpc::step()
{
  if( m_naviLastPath.empty() )
    // No path to track
    return;

  if( Util::distance( getPos().x, getPos().y, getPos().z, m_naviTarget.x, m_naviTarget.y, m_naviTarget.z ) <= 4 )
  {
    // Reached target
    m_naviLastPath.clear();
    return;
  }

  auto stepPos = m_naviLastPath[ m_naviPathStep ];

  if( Util::distance( getPos().x, getPos().y, getPos().z, stepPos.x, stepPos.y, stepPos.z ) <= 4 && m_naviPathStep < m_naviLastPath.size() - 1 )
  {
    // Reached step in path
    m_naviPathStep++;

    stepPos = m_naviLastPath[ m_naviPathStep ];
  }

  // This is probably not a good way to do it but works fine for now
  float rot = Util::calcAngFrom( getPos().x, getPos().z, stepPos.x, stepPos.z );
  float newRot = PI - rot + ( PI / 2 );

  face( stepPos );
  float angle = Util::calcAngFrom( getPos().x, getPos().z, stepPos.x, stepPos.z ) + PI;

  auto x = ( cosf( angle ) * 1.1f );
  auto y = ( getPos().y + stepPos.y ) * 0.5f; // Get speed from somewhere else?
  auto z = ( sinf( angle ) * 1.1f );

  Common::FFXIVARR_POSITION3 newPos{ getPos().x + x, y, getPos().z + z };
  setPos( newPos );
  setRot( newRot );

  sendPositionUpdate();
}

bool Sapphire::Entity::BNpc::moveTo( const FFXIVARR_POSITION3& pos )
{
  if( Util::distance( getPos().x, getPos().y, getPos().z, pos.x, pos.y, pos.z ) <= 4 )
    // Reached destination
    return true;

  if( m_naviTarget.x == pos.x && m_naviTarget.y == pos.y && m_naviTarget.z == pos.z )
    // Targets are the same
    return false;

  // Check if we have to recalculate
  if( Util::getTimeMs() - m_naviLastUpdate > 500 )
  {
    auto pNaviMgr = m_pFw->get< World::Manager::NaviMgr >();
    auto pNaviProvider = pNaviMgr->getNaviProvider( m_pCurrentZone->getInternalName() );

    if( !pNaviProvider )
    {
      Logger::error( "No NaviProvider for zone#{0} - {1}", m_pCurrentZone->getGuId(), m_pCurrentZone->getInternalName() );
      return false;
    }

    auto path = pNaviProvider->findFollowPath( m_pos, pos );

    if( !path.empty() )
    {
      m_naviLastPath = path;
      m_naviTarget = pos;
      m_naviPathStep = 0;
      m_naviLastUpdate = Util::getTimeMs();
    }
    else
    {
      Logger::debug( "No path found from x{0} y{1} z{2} to x{3} y{4} z{5} in {6}", getPos().x, getPos().y, getPos().z, pos.x, pos.y, pos.z, m_pCurrentZone->getInternalName() );
    }
  }
  /*
  float rot = Util::calcAngFrom( getPos().x, getPos().z, pos.x, pos.z ); 
  float newRot = PI - rot + ( PI / 2 );

  face( pos );
  float angle = Util::calcAngFrom( getPos().x, getPos().z, pos.x, pos.z ) + PI;

  auto x = ( cosf( angle ) * 1.1f );
  auto y = ( getPos().y + pos.y ) * 0.5f; // fake value while there is no collision
  auto z = ( sinf( angle ) * 1.1f );

  Common::FFXIVARR_POSITION3 newPos{ getPos().x + x, y, getPos().z + z };
  setPos( newPos );

  Common::FFXIVARR_POSITION3 tmpPos{ getPos().x + x, y, getPos().z + z };
  setPos( tmpPos );
  setRot( newRot );

  sendPositionUpdate();
  */

  return false;
}

void Sapphire::Entity::BNpc::sendPositionUpdate()
{
  auto movePacket = std::make_shared< MoveActorPacket >( *getAsChara(), 0x3A, 0, 0, 0x5A );
  sendToInRangeSet( movePacket );
}

void Sapphire::Entity::BNpc::hateListClear()
{
  auto it = m_hateList.begin();
  for( auto listEntry : m_hateList )
  {
    if( isInRangeSet( listEntry->m_pChara ) )
      deaggro( listEntry->m_pChara );
  }
  m_hateList.clear();
}

Sapphire::Entity::CharaPtr Sapphire::Entity::BNpc::hateListGetHighest()
{
  auto it = m_hateList.begin();
  uint32_t maxHate = 0;
  std::shared_ptr< HateListEntry > entry;
  for( ; it != m_hateList.end(); ++it )
  {
    if( ( *it )->m_hateAmount > maxHate )
    {
      maxHate = ( *it )->m_hateAmount;
      entry = *it;
    }
  }

  if( entry && maxHate != 0 )
    return entry->m_pChara;

  return nullptr;
}

void Sapphire::Entity::BNpc::hateListAdd( Sapphire::Entity::CharaPtr pChara, int32_t hateAmount )
{
  auto hateEntry = std::make_shared< HateListEntry >();
  hateEntry->m_hateAmount = hateAmount;
  hateEntry->m_pChara = pChara;

  m_hateList.insert( hateEntry );
}

void Sapphire::Entity::BNpc::hateListUpdate( Sapphire::Entity::CharaPtr pChara, int32_t hateAmount )
{
  for( auto listEntry : m_hateList )
  {
    if( listEntry->m_pChara == pChara )
    {
      listEntry->m_hateAmount += hateAmount;
      return;
    }
  }

  auto hateEntry = std::make_shared< HateListEntry >();
  hateEntry->m_hateAmount = hateAmount;
  hateEntry->m_pChara = pChara;
  m_hateList.insert( hateEntry );
}

void Sapphire::Entity::BNpc::hateListRemove( Sapphire::Entity::CharaPtr pChara )
{
  for( auto listEntry : m_hateList )
  {
    if( listEntry->m_pChara == pChara )
    {

      m_hateList.erase( listEntry );
      if( pChara->isPlayer() )
      {
        PlayerPtr tmpPlayer = pChara->getAsPlayer();
        tmpPlayer->onMobDeaggro( getAsBNpc() );
      }
      return;
    }
  }
}

bool Sapphire::Entity::BNpc::hateListHasActor( Sapphire::Entity::CharaPtr pChara )
{
  for( auto listEntry : m_hateList )
  {
    if( listEntry->m_pChara == pChara )
      return true;
  }
  return false;
}

void Sapphire::Entity::BNpc::aggro( Sapphire::Entity::CharaPtr pChara )
{
  m_lastAttack = Util::getTimeMs();
  hateListUpdate( pChara, 1 );

  changeTarget( pChara->getId() );
  setStance( Stance::Active );
  m_state = BNpcState::Combat;

  if( pChara->isPlayer() )
  {
    PlayerPtr tmpPlayer = pChara->getAsPlayer();
    tmpPlayer->queuePacket( makeActorControl142( getId(), ActorControlType::ToggleWeapon, 1, 1, 1 ) );
    tmpPlayer->onMobAggro( getAsBNpc() );
  }
}

void Sapphire::Entity::BNpc::deaggro( Sapphire::Entity::CharaPtr pChara )
{
  if( !hateListHasActor( pChara ) )
    hateListRemove( pChara );

  if( pChara->isPlayer() )
  {
    PlayerPtr tmpPlayer = pChara->getAsPlayer();
    tmpPlayer->queuePacket( makeActorControl142( getId(), ActorControlType::ToggleWeapon, 0, 1, 1 ) );
    tmpPlayer->onMobDeaggro( getAsBNpc() );
  }
}

void Sapphire::Entity::BNpc::update( int64_t currTime )
{
  const uint8_t minActorDistance = 4;
  const uint8_t aggroRange = 8;
  const uint8_t maxDistanceToOrigin = 40;

  switch( m_state )
  {
    case BNpcState::Dead:
    case BNpcState::JustDied:
      return;

    case BNpcState::Retreat:
    {
      if( moveTo( m_spawnPos ) )
        m_state = BNpcState::Idle;
    }
    break;

    case BNpcState::Idle:
    {
      // passive mobs should ignore players unless aggro'd
      if( m_aggressionMode == 1 )
        return;

      CharaPtr pClosestChara = getClosestChara();

      if( pClosestChara && pClosestChara->isAlive() )
      {
        auto distance = Util::distance( getPos().x, getPos().y, getPos().z,
                                        pClosestChara->getPos().x,
                                        pClosestChara->getPos().y,
                                        pClosestChara->getPos().z );

        if( distance < aggroRange && pClosestChara->isPlayer() )
          aggro( pClosestChara );
      }
    }

    case BNpcState::Combat:
    {
      auto pHatedActor = hateListGetHighest();
      if( !pHatedActor )
        return;

      auto distanceOrig = Util::distance( getPos().x, getPos().y, getPos().z,
                                          m_spawnPos.x,
                                          m_spawnPos.y,
                                          m_spawnPos.z );

      if( pHatedActor && !pHatedActor->isAlive() )
      {
        hateListRemove( pHatedActor );
        pHatedActor = hateListGetHighest();
      }

      if( pHatedActor )
      {
        auto distance = Util::distance( getPos().x, getPos().y, getPos().z,
                                        pHatedActor->getPos().x,
                                        pHatedActor->getPos().y,
                                        pHatedActor->getPos().z );

        if( distanceOrig > maxDistanceToOrigin )
        {
          hateListClear();
          changeTarget( INVALID_GAME_OBJECT_ID );
          setStance( Stance::Passive );
          //setOwner( nullptr );
          m_state = BNpcState::Retreat;
          break;
        }

        if( distance > minActorDistance )
          moveTo( pHatedActor->getPos() );
        else
        {
          if( face( pHatedActor->getPos() ) )
            sendPositionUpdate();
          // in combat range. ATTACK!
          autoAttack( pHatedActor );
        }
      }
      else
      {
        changeTarget( INVALID_GAME_OBJECT_ID );
        setStance( Stance::Passive );
        //setOwner( nullptr );
        m_state = BNpcState::Retreat;
      }
    }
  }

  step();
}

void Sapphire::Entity::BNpc::onActionHostile( Sapphire::Entity::CharaPtr pSource )
{
  if( !hateListGetHighest() )
    aggro( pSource );

  //if( !getClaimer() )
  //  setOwner( pSource->getAsPlayer() );
}

void Sapphire::Entity::BNpc::onDeath()
{
  setTargetId( INVALID_GAME_OBJECT_ID );
  m_currentStance = Stance::Passive;
  m_state = BNpcState::Dead;
  m_timeOfDeath = Util::getTimeSeconds();
  hateListClear();
}

uint32_t Sapphire::Entity::BNpc::getTimeOfDeath() const
{
  return m_timeOfDeath;
}

void Sapphire::Entity::BNpc::setTimeOfDeath( uint32_t timeOfDeath )
{
  m_timeOfDeath = timeOfDeath;
}
