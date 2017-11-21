#ifndef _CHATPACKET_H
#define _CHATPACKET_H

#include <src/servers/Server_Common/Network/GamePacketNew.h>
#include <src/servers/Server_Common/Network/PacketDef/Zone/ServerZoneDef.h>
#include "src/servers/Server_Zone/Forwards.h"


namespace Core {
namespace Network {
namespace Packets {
namespace Server {

/**
* @brief The Chat packet.
*/
class ChatPacket :
   public ZoneChannelPacket< FFXIVIpcChat >
{
public:
   ChatPacket( Entity::PlayerPtr player, Common::ChatType chatType, const std::string& msg ) :
      ZoneChannelPacket< FFXIVIpcChat >( player->getId(), player->getId() )
   {
      initialize( player, chatType, msg );
   };

private:
   void initialize( Entity::PlayerPtr player, Common::ChatType chatType, const std::string& msg )
   {
      m_data.chatType = chatType;
      strcpy( m_data.name, player->getName().c_str() );
      strcpy( m_data.msg, msg.c_str() );
   };
};

}
}
}
}

#endif /*_CHATPACKET_H*/