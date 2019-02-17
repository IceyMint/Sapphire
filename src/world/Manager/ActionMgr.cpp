#include "ActionMgr.h"

#include "Action/Action.h"
#include "Script/ScriptMgr.h"
#include "Actor/Player.h"

#include <Exd/ExdDataGenerated.h>
#include "Framework.h"

#include <Network/PacketWrappers/EffectPacket.h>

using namespace Sapphire;

World::Manager::ActionMgr::ActionMgr( Sapphire::FrameworkPtr pFw ) :
  BaseManager( pFw )
{

}

void World::Manager::ActionMgr::handleAoEPlayerAction( Entity::Player& player, uint32_t actionId,
                                                       Data::ActionPtr actionData, Common::FFXIVARR_POSITION3 pos )
{
  player.sendDebug( "got aoe act: {0}", actionData->name );


  auto action = Action::make_Action( player.getAsPlayer(), actionId, actionData, framework() );
  action->setPos( pos );

  if( !actionData->targetArea )
  {
    // not an action that has an aoe, cancel it
    action->castInterrupt();
    return;
  }

  bootstrapAction( player, action, *actionData );
}

void World::Manager::ActionMgr::handleTargetedPlayerAction( Entity::Player& player, uint32_t actionId,
                                                            Data::ActionPtr actionData, uint64_t targetId )
{
  auto action = Action::make_Action( player.getAsPlayer(), actionId, actionData, framework() );

  // cancel any aoe actions casted with this packet
  if( actionData->targetArea )
  {
    action->castInterrupt();
    return;
  }

  if( targetId == 0 )
  {
    action->setTargetChara( player.getAsChara() );
  }
  else if( targetId != player.getId() )
  {
    auto target = player.lookupTargetById( targetId );
    if( !target )
    {
      // an eobj?
      player.sendDebug( "Unable to find actor for targetId#{0}, passing through to event scripts...", targetId );
      action->setResidentTargetId( targetId );
    }
    else if( auto chara = target->getAsChara() )
    {
      action->setTargetChara( chara );
    }
  }

  bootstrapAction( player, action, *actionData );
}

void World::Manager::ActionMgr::handleItemAction( Sapphire::Entity::Player& player, uint32_t itemId,
                                                  Data::ItemActionPtr itemActionData,
                                                  uint16_t itemSourceSlot, uint16_t itemSourceContainer )
{
  player.sendDebug( "got item act: {0}, slot: {1}, container: {2}", itemId, itemSourceSlot, itemSourceContainer );

  // todo: check we have item & remove item from inventory

  switch( itemActionData->type )
  {
    default:
    {
      player.sendDebug( "ItemAction type {0} not supported.", itemActionData->type );
      break;
    }

    case Common::ItemActionType::ItemActionVFX:
    {
      handleItemActionVFX( player, itemId, itemActionData->data[ 0 ] );

      break;
    }
  }
}

void World::Manager::ActionMgr::bootstrapAction( Entity::Player& player,
                                                 Action::ActionPtr currentAction,
                                                 Data::Action& actionData )
{
  if( !canPlayerUseAction( player, *currentAction, actionData ) )
  {
    // forcefully interrupt the action and reset the cooldown
    currentAction->castInterrupt();
    return;
  }

  // if we have a cast time we want to associate the action with the player so update is called
  if( currentAction->hasCastTime() )
  {
    player.setCurrentAction( currentAction );
  }

  // todo: what do in cases of swiftcast/etc? script callback?
  currentAction->castStart();
}

bool World::Manager::ActionMgr::canPlayerUseAction( Entity::Player& player,
                                                    Action::Action& currentAction,
                                                    Data::Action& actionData )
{
  // lol
  if( !player.isAlive() )
    return false;

  // npc actions/non player actions
  if( actionData.classJob == -1 )
    return false;

  if( player.getLevel() < actionData.classJobLevel )
    return false;

  auto currentClass = player.getClass();
  auto actionClass = static_cast< Common::ClassJob >( actionData.classJob );

  if( actionClass != Common::ClassJob::Adventurer && currentClass != actionClass )
  {
    // check if not a base class action
    auto exdData = framework()->get< Data::ExdDataGenerated >();
    assert( exdData );

    auto classJob = exdData->get< Data::ClassJob >( static_cast< uint8_t >( currentClass ) );
    if( !classJob )
      return false;

    if( classJob->classJobParent != actionData.classJob )
      return false;
  }

  // reset target on actions that can only be casted on yourself while having a target set
  // todo: check what actions send when targeting an enemy
  if( actionData.canTargetSelf &&
      !actionData.canTargetFriendly &&
      !actionData.canTargetHostile &&
      !actionData.canTargetParty )
  {
    currentAction.setTargetChara( currentAction.getSourceChara() );
  }

  // todo: party/enemy validation

  // validate range


  auto& actionCost = currentAction.getCostArray();
  for( uint8_t i = 0; i < actionCost.size(); ++i )
  {
    // todo: validate costs/conditionals here
  }

  return true;
}

void World::Manager::ActionMgr::handleItemActionVFX( Sapphire::Entity::Player& player, uint32_t itemId, uint16_t vfxId )
{
  Common::EffectEntry effect{};
  effect.effectType = Common::ActionEffectType::VFX;
  effect.value = vfxId;

  auto effectPacket = std::make_shared< Network::Packets::Server::EffectPacket >( player.getId(), player.getId(), itemId );
  effectPacket->setTargetActor( player.getId() );
  effectPacket->setAnimationId( Common::ItemActionType::ItemActionVFX );
  effectPacket->setDisplayType( Common::ActionEffectDisplayType::ShowItemName );
  effectPacket->addEffect( effect );

  player.sendToInRangeSet( effectPacket, true );
}