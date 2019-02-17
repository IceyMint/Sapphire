#include "Action.h"

#include <Exd/ExdDataGenerated.h>
#include <Util/Util.h>
#include "Framework.h"
#include "Script/ScriptMgr.h"

#include "Actor/Player.h"
#include "Actor/BNpc.h"

#include "Territory/Zone.h"

#include <Network/CommonActorControl.h>
#include "Network/PacketWrappers/ActorControlPacket142.h"
#include "Network/PacketWrappers/ActorControlPacket143.h"
#include "Network/PacketWrappers/ActorControlPacket144.h"
#include <Network/PacketWrappers/EffectPacket.h>

using namespace Sapphire::Common;
using namespace Sapphire::Network;
using namespace Sapphire::Network::Packets;
using namespace Sapphire::Network::Packets::Server;
using namespace Sapphire::Network::ActorControl;


Sapphire::Action::Action::Action() = default;
Sapphire::Action::Action::~Action() = default;

Sapphire::Action::Action::Action( Entity::CharaPtr caster, uint32_t actionId,
                                  Data::ActionPtr action, FrameworkPtr fw ) :
                                  m_pSource( std::move( caster ) ),
                                  m_pFw( std::move( fw ) ),
                                  m_id( actionId ),
                                  m_startTime( 0 ),
                                  m_interruptType( Common::ActionInterruptType::None ),
                                  m_hasResidentTarget( false )
{
  m_castTime = static_cast< uint32_t >( action->cast100ms * 100 );
  m_recastTime = static_cast< uint16_t >( action->recast100ms * 100 );
  m_cooldownGroup = action->cooldownGroup;
  m_range = action->range;
  m_effectRange = action->effectRange;
  m_aspect = static_cast< Common::ActionAspect >( action->aspect );

  // a default range is set by the game for the class/job
  if( m_range == -1 )
  {
    switch( static_cast< Common::ClassJob >( action->classJob ) )
    {
      case Common::ClassJob::Bard:
      case Common::ClassJob::Archer:
        m_range = 25;

      // anything that isnt ranged
      default:
        m_range = 3;
    }
  }

  m_actionCost.fill( { Common::ActionCostType::None, 0 } );

  m_actionCost[ 0 ] = {
    static_cast< Common::ActionCostType >( action->costType ),
    action->cost
  };

  calculateActionCost();
}

uint32_t Sapphire::Action::Action::getId() const
{
  return m_id;
}

void Sapphire::Action::Action::setPos( Sapphire::Common::FFXIVARR_POSITION3 pos )
{
  m_pos = pos;
}

Sapphire::Common::FFXIVARR_POSITION3 Sapphire::Action::Action::getPos() const
{
  return m_pos;
}

void Sapphire::Action::Action::setTargetChara( Sapphire::Entity::CharaPtr chara )
{
  assert( chara );

  m_pTarget = chara;
  m_targetId = chara->getId();
  m_hasResidentTarget = false;
}

void Sapphire::Action::Action::setResidentTargetId( uint64_t targetId )
{
  m_targetId = targetId;
  m_hasResidentTarget = true;
}

bool Sapphire::Action::Action::hasResidentTarget() const
{
  return m_hasResidentTarget;
}

Sapphire::Entity::CharaPtr Sapphire::Action::Action::getTargetChara() const
{
  return m_pTarget;
}

bool Sapphire::Action::Action::isInterrupted() const
{
  return m_interruptType != Common::ActionInterruptType::None;
}

void Sapphire::Action::Action::setInterrupted( Common::ActionInterruptType type )
{
  m_interruptType = type;
}

uint32_t Sapphire::Action::Action::getCastTime() const
{
  return m_castTime;
}

void Sapphire::Action::Action::setCastTime( uint32_t castTime )
{
  m_castTime = castTime;
}

bool Sapphire::Action::Action::hasCastTime() const
{
  return m_castTime > 0;
}

Sapphire::Entity::CharaPtr Sapphire::Action::Action::getSourceChara() const
{
  return m_pSource;
}

bool Sapphire::Action::Action::update()
{
  // action has not been started yet
  if( m_startTime == 0 )
    return false;

  if( isInterrupted() )
  {
    castInterrupt();
    return true;
  }

  if( !hasResidentTarget() )
  {
    // todo: check if the target is still in range
  }

  uint64_t currTime = Util::getTimeMs();

  if( !hasCastTime() || std::difftime( currTime, m_startTime ) > m_castTime )
  {
    castFinish();
    return true;
  }

  return false;
}

void Sapphire::Action::Action::castStart()
{
  assert( m_pSource );

  m_startTime = Util::getTimeMs();

  auto player = m_pSource->getAsPlayer();

  if( hasCastTime() )
  {
    auto castPacket = makeZonePacket< Server::FFXIVIpcActorCast >( getId() );

    castPacket->data().action_id = static_cast< uint16_t >( m_id );
    castPacket->data().skillType = Common::SkillType::Normal;
    castPacket->data().unknown_1 = m_id;
    // This is used for the cast bar above the target bar of the caster.
    castPacket->data().cast_time = m_castTime / 1000.f;
    castPacket->data().target_id = static_cast< uint32_t >( m_targetId );

    m_pSource->sendToInRangeSet( castPacket, true );

    if( player )
    {
      player->setStateFlag( PlayerStateFlag::Casting );
    }
  }

  auto pScriptMgr = m_pFw->get< Scripting::ScriptMgr >();
  if( !pScriptMgr->onCastStart( *this ) )
  {
    // script not implemented
    castInterrupt();

    if( player )
    {
      player->sendUrgent( "Action not implemented, missing script for actionId#{0}", getId() );
      player->setCurrentAction( nullptr );
    }

    return;
  }

  // instantly finish cast if there's no cast time
  if( !hasCastTime() )
    castFinish();
}

void Sapphire::Action::Action::castInterrupt()
{
  assert( m_pSource );

  // things that aren't players don't care about cooldowns and state flags
  if( m_pSource->isPlayer() )
  {
    auto player = m_pSource->getAsPlayer();

    auto resetCooldownPkt = makeActorControl143( m_pSource->getId(), ActorControlType::SetActionCooldown, 1, getId(), 0 );
    player->queuePacket( resetCooldownPkt );

    // todo: reset cooldown for actual player

    // reset state flag
    //player->unsetStateFlag( PlayerStateFlag::Occupied1 );
    player->unsetStateFlag( PlayerStateFlag::Casting );
  }

  if( hasCastTime() )
  {
    uint8_t interruptEffect = 0;
    if( m_interruptType == ActionInterruptType::DamageInterrupt )
      interruptEffect = 1;

    // Note: When cast interrupt from taking too much damage, set the last value to 1.
    // This enables the cast interrupt effect.
    auto control = makeActorControl142( m_pSource->getId(), ActorControlType::CastInterrupt,
                                        0x219, 1, m_id, interruptEffect );

    m_pSource->sendToInRangeSet( control, true );
  }

  auto pScriptMgr = m_pFw->get< Scripting::ScriptMgr >();
  pScriptMgr->onCastInterrupt( *this );
}

void Sapphire::Action::Action::castFinish()
{
  assert( m_pSource );

  auto pScriptMgr = m_pFw->get< Scripting::ScriptMgr >();

  if( hasCastTime() )
  {
    /*auto control = ActorControlPacket143( m_pTarget->getId(), ActorControlType::Unk7,
                                            0x219, m_id, m_id, m_id, m_id );
    m_pSource->sendToInRangeSet( control, true );*/

  }

  pScriptMgr->onCastFinish( *this );

  if( !hasResidentTarget() )
  {
    assert( m_pTarget );
    // todo: calculate final hit targets and call onCharaHit in action script
    pScriptMgr->onCharaHit( *this, *m_pTarget );
  }
  else if( auto player = m_pSource->getAsPlayer() )
  {
    pScriptMgr->onEObjHit( *player, m_targetId );
    return;
  }

  buildEffectPackets();
}

void Sapphire::Action::Action::buildEffectPackets()
{
  for( int i = 0; i < EffectPacketIdentity::MAX_ACTION_EFFECT_PACKET_IDENT; ++i )
  {
    auto& packetData = m_effects[ static_cast< EffectPacketIdentity >( i ) ];

    auto actorsHit = packetData.m_hitActors.size();
    if( actorsHit == 0 )
      continue;

    // get effect sequence
    auto zone = m_pSource->getCurrentZone();
    assert( zone );

    auto sequence = zone->getNextEffectSequence();

    if( actorsHit == 1 )
    {
      // send normal effect
      auto effectPacket = std::make_shared< Network::Packets::Server::EffectPacket >( m_pSource->getId(), m_pTarget->getId(), getId() );
      effectPacket->setTargetActor( packetData.m_hitActors[ 0 ] );
      effectPacket->setSequence( sequence );
      effectPacket->setDisplayType( Common::ActionEffectDisplayType::ShowActionName );

      for( auto& effect : packetData.m_entries )
      {
        effectPacket->addEffect( effect );
      }

      m_pSource->sendToInRangeSet( effectPacket, true );
    }
    else
    {
      // todo: aoe effects
    }
  }
}

void Sapphire::Action::Action::damageTarget( uint16_t potency, Entity::Chara& chara )
{
  // todo: scale potency into damage from stats

  Common::EffectEntry entry{};

  // todo: handle cases where the action misses/is blocked?
  entry.effectType = Common::ActionEffectType::Damage;

  // todo: handle crits
  entry.hitSeverity = Common::ActionHitSeverityType::NormalDamage;

  // todo: handle > 65535 damage values, not sure if this is right?
  if( potency > 65535 )
  {
    entry.value = static_cast< int16_t >( potency / 10 );
    // todo: rename this? need to confirm how it works again
    entry.valueMultiplier = 1;
  }
  else
    entry.value = static_cast< int16_t >( potency );

  // add to aggro table
  // todo: probably move this into takeDamage? this is pretty garbage
  if( chara.isBattleNpc() )
  {
    auto bNpc = chara.getAsBNpc();
    if( bNpc )
    {
      if( bNpc->getStance() != Common::Stance::Active )
      {
        bNpc->aggro( getSourceChara() );
        bNpc->hateListUpdate( getSourceChara(), potency );
      }
      else
      {
        bNpc->hateListUpdate( getSourceChara(), potency );
      }
    }
  }

  // todo: aspected damage?
  chara.takeDamage( potency );

  if( auto player = m_pSource->getAsPlayer() )
    player->sendDebug( "hit actorId#{0} for potency: {1}", chara.getId(), potency );

  m_effects[ EffectPacketIdentity::DamageEffect ].m_entries.emplace_back( entry );

  // todo: make sure that we don't add the same actor more than once
  m_effects[ EffectPacketIdentity::DamageEffect ].m_hitActors.emplace_back( chara.getId() );
}

void Sapphire::Action::Action::healTarget( uint16_t potency, Entity::Chara& chara )
{
  // todo: scale potency into healing from stats

  Common::EffectEntry entry{};

  entry.effectType = Common::ActionEffectType::Heal;

  // todo: handle crits
  entry.hitSeverity = Common::ActionHitSeverityType::NormalHeal;

  // todo: handle > 65535 healing values, not sure if this is right?
  if( potency > 65535 )
  {
    entry.value = static_cast< int16_t >( potency / 10 );
    // todo: rename this? need to confirm how it works again
    entry.valueMultiplier = 1;
  }
  else
    entry.value = static_cast< int16_t >( potency );

  chara.heal( potency );

  if( auto player = m_pSource->getAsPlayer() )
    player->sendDebug( "hit actorId#{0} for heal: {1}", chara.getId(), potency );

  m_effects[ EffectPacketIdentity::HealingEffect ].m_entries.emplace_back( entry );

  // todo: make sure that we don't add the same actor more than once
  m_effects[ EffectPacketIdentity::HealingEffect ].m_hitActors.emplace_back( chara.getId() );
}

const Sapphire::Action::Action::ActionCostArray& Sapphire::Action::Action::getCostArray() const
{
  return m_actionCost;
}

void Sapphire::Action::Action::calculateActionCost()
{
  for( uint8_t i = 0; i < m_actionCost.size(); ++i )
  {
    auto& entry = m_actionCost[ i ];

    if( entry.m_costType == ActionCostType::MagicPoints )
      calculateMPCost( i );
  }
}

// todo: this shouldn't be in action and instead be in some general stat calc util
void Sapphire::Action::Action::calculateMPCost( uint8_t costArrayIndex )
{
  auto level = m_pSource->getLevel();

  // each level range is 1-10, 11-20, 21-30, ... therefore:
  // level 50 should be in the 4th group, not the 5th
  // dividing by 10 on the border will break this unless we subtract 1
  auto levelGroup = std::max< uint8_t >( level - 1, 1 ) / 10;

  auto& costEntry = m_actionCost[ costArrayIndex ];

  float cost = costEntry.m_cost;

  // thanks to andrew for helping me figure this shit out, should be pretty accurate
  switch( levelGroup )
  {
    // level 1-10
    case 0:
    {
      // r^2 = 0.9999
      cost = 0.0952f * level + 0.9467f;
      break;
    }

      // level 11-20
    case 1:
    {
      // r^2 = 1
      cost = 0.19f * level;
      break;
    }

      // level 21-30
    case 2:
    {
      // r^2 = 1
      cost = 0.38f * level - 3.8f;
      break;
    }

      // level 31-40
    case 3:
    {
      // r^2 = 1
      cost = 0.6652f * level - 12.358f;
      break;
    }

      // level 41-50
    case 4:
    {
      // r^2 = 1
      cost = 1.2352f * level - 35.159f;
      break;
    }

      // level 51-60
    case 5:
    {
      // r^2 = 1
      cost = 0.0654f * std::exp( 0.1201f * level );
      break;
    }

      // level 61-70
    case 6:
    {
      // r^2 = 0.9998
      cost = 0.2313f * ( level * level ) - 26.98f * level + 875.21f;
      break;
    }

    default:
      return;
  }

  // m_cost is the base cost, cost is the multiplier for the current player level
  costEntry.m_cost = static_cast< uint16_t >( std::round( cost * costEntry.m_cost ) );

  if( auto player = m_pSource->getAsPlayer() )
    player->sendDebug( "calculated mp cost: {0}", costEntry.m_cost );
}