#include "MountAction.h"

#include <Exd/ExdData.h>

#include "Actor/Player.h"

#include <Network/CommonActorControl.h>
#include "Network/PacketWrappers/ActorControlSelfPacket.h"

#include <Service.h>
#include <Util/UtilMath.h>

#include "WorldServer.h"
#include "Session.h"
#include "Network/GameConnection.h"

using namespace Sapphire;
using namespace Sapphire::Network::Packets;
using namespace Sapphire::Network::Packets::WorldPackets::Server;
using namespace Sapphire::Network::ActorControl;
using namespace Sapphire::World::Action;

MountAction::MountAction( Sapphire::Entity::CharaPtr source, uint16_t mountId, uint16_t sequence,
                          std::shared_ptr< Excel::ExcelStruct< Excel::Action > > actionData ) :
  Action::Action( source, 4, sequence, actionData ),
  m_mountId( mountId )
{
  m_actionKind = Common::SkillType::MountSkill;
}

bool MountAction::preCheck()
{
  // todo: check if mount is unlocked
  return m_pSource->isPlayer();
}

void MountAction::start()
{
  assert( m_pSource );

  m_startTime = Common::Util::getTimeMs();

  auto player = m_pSource->getAsPlayer();

  auto castPacket = makeZonePacket< FFXIVIpcActorCast >( m_pSource->getId() );
  auto& data = castPacket->data();

  data.Action = static_cast< uint16_t >( m_id );
  data.ActionKind = m_actionKind;
  data.CastTime = m_castTimeMs / 1000.f;
  data.Target = static_cast< uint32_t >( m_targetId );
  data.BallistaEntityId = 0xE0000000;

  auto pos = m_pSource->getPos();
  data.TargetPos[ 0 ] = Common::Util::floatToUInt16( pos.x );
  data.TargetPos[ 1 ] = Common::Util::floatToUInt16( pos.y );
  data.TargetPos[ 2 ] = Common::Util::floatToUInt16( pos.z );
  data.Dir = m_pSource->getRot();

  m_pSource->sendToInRangeSet( castPacket, true );

  player->setStateFlag( Common::PlayerStateFlag::Casting );

  auto actionStartPkt = makeActorControlSelf( m_pSource->getId(), ActorControlType::ActionStart, 1, getId(), m_recastTimeMs / 10 );

  auto& server = Common::Service< World::WorldServer >::ref();
  server.queueForPlayer( m_pSource->getAsPlayer()->getCharacterId(), actionStartPkt );

}

void MountAction::execute()
{
  assert( m_pSource );

  m_pSource->getAsPlayer()->unsetStateFlag( Common::PlayerStateFlag::Casting );
  m_effectBuilder->mount( m_pSource, m_mountId );
  m_effectBuilder->buildAndSendPackets( { m_pSource } );
}