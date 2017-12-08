#include <src/servers/Server_Common/Common.h>
#include <src/servers/Server_Common/Network/CommonNetwork.h>
#include <src/servers/Server_Common/Exd/ExdData.h>
#include <src/servers/Server_Common/Network/GamePacketNew.h>
#include <src/servers/Server_Common/Network/PacketContainer.h>
#include <src/servers/Server_Common/Logging/Logger.h>

#include <boost/format.hpp>

#include "src/servers/Server_Zone/Network/GameConnection.h"

#include "src/servers/Server_Zone/Session.h"

#include "src/servers/Server_Zone/Network/PacketWrappers/ServerNoticePacket.h"
#include "src/servers/Server_Zone/Network/PacketWrappers/ActorControlPacket142.h"
#include "src/servers/Server_Zone/Network/PacketWrappers/ActorControlPacket143.h"
#include "src/servers/Server_Zone/Network/PacketWrappers/ActorControlPacket144.h"

#include "src/servers/Server_Zone/Network/PacketWrappers/PlayerStateFlagsPacket.h"

#include "src/servers/Server_Zone/DebugCommand/DebugCommandHandler.h"

#include "src/servers/Server_Zone/Actor/Player.h"

#include "src/servers/Server_Zone/Forwards.h"

#include "src/servers/Server_Zone/Action/Action.h"
#include "src/servers/Server_Zone/Action/ActionCast.h"
#include "src/servers/Server_Zone/Action/ActionMount.h"
#include "src/servers/Server_Zone/Script/ScriptManager.h"
#include "Server_Zone/Network/PacketWrappers/MoveActorPacket.h"


extern Core::Scripting::ScriptManager g_scriptMgr;
extern Core::Data::ExdData g_exdData;
extern Core::Logger g_log;

using namespace Core::Common;
using namespace Core::Network::Packets;
using namespace Core::Network::Packets::Server;

void Core::Network::GameConnection::skillHandler( const Packets::GamePacket& inPacket,
                                                  Entity::Player& player )
{
    uint8_t type = inPacket.getValAt< uint32_t >( 0x21 );

    uint32_t action = inPacket.getValAt< uint32_t >( 0x24 );
    uint32_t useCount = inPacket.getValAt< uint32_t >( 0x28 );

    uint64_t targetId = inPacket.getValAt< uint64_t >( 0x30 );

    player.sendDebug( "Skill type:" + std::to_string( type ) );

    switch( type )
    {
    case Common::SkillType::Normal:

    if( action < 1000000 ) // normal action
    {
        std::string actionIdStr = boost::str( boost::format( "%|04X|" ) % action );
        player.sendDebug( "---------------------------------------" );
        player.sendDebug( "ActionHandler ( " + actionIdStr + " | " +
                          g_exdData.getActionInfo( action )->name +
                          " | " + std::to_string( targetId ) + " )" );

        player.queuePacket( ActorControlPacket142( player.getId(), ActorControlType::ActionStart, 0x01, action ) );

        if( action == 5 )
        {
            auto currentAction = player.getCurrentAction();

            // we should always have an action here, if not there is a bug
            assert( currentAction );
            currentAction->onStart();
        }
        else
        {
            Core::Entity::ActorPtr targetActor = player.getAsPlayer();
            if( targetId != player.getId() )
            {
                targetActor = player.lookupTargetById( targetId );
            }

            if( !player.actionHasCastTime( action ) )
            {
                g_scriptMgr.onCastFinish( player, targetActor, action );
            }
            else
            {
                Action::ActionCastPtr pActionCast( new Action::ActionCast( player.getAsPlayer(), targetActor, action ) );
                player.setCurrentAction( pActionCast );
                player.sendDebug( "setCurrentAction()" );
                player.getCurrentAction()->onStart();
            }
        }
    }
    else if( action < 2000000 ) // craft action
    {

    }
    else if( action < 3000000 ) // item action
    {
        auto info = g_exdData.getEventItemInfo( action );
        if( info )
        {
            g_log.debug( info->name );
            g_scriptMgr.onEventItem( player, action, info->eventId, info->castTime, targetId );
        }
    }
    else if( action > 3000000 ) // unknown
    {

    }

    break;

    case Common::SkillType::MountSkill:

    player.sendDebug( "Request mount " + std::to_string( action ) );

    Action::ActionMountPtr pActionMount( new Action::ActionMount( player.getAsPlayer(), action ) );
    player.setCurrentAction( pActionMount );
    player.sendDebug( "setCurrentAction()" );
    player.getCurrentAction()->onStart();
    
    break;

    }

}
