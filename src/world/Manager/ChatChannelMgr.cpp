#include <Logging/Logger.h>
#include <Network/CommonNetwork.h>
#include <Network/GamePacket.h>
#include <Network/PacketDef/Chat/ServerChatDef.h>
#include <Service.h>

#include "ChatChannelMgr.h"

#include "Actor/Player.h"
#include "WorldServer.h"
#include "Session.h"
#include "Network/GameConnection.h"

using namespace Sapphire;
using namespace Sapphire::Network;
using namespace Sapphire::Network::Packets;
using namespace Sapphire::World::Manager;

const uint64_t ChatChannelMgr::createChatChannel( Common::ChatChannelType type )
{
  auto& server = Common::Service< World::WorldServer >::ref();

  // get next id for new channel

  uint32_t cNo = m_lastChatNo;

  m_lastChatNo++;

  uint16_t chatType = static_cast< uint16_t >( type );
  uint16_t worldId = server.getWorldId();

  Data::ChatChannel cId;

  cId.data.ChannelNo = cNo;
  cId.data.ChannelType = type;
  cId.data.WorldId = worldId;

  // create our new chat channel

  Data::ChatChannelMembers newChatChannel = {};

  m_channels[ cId.ChannelID ] = newChatChannel;

  Logger::debug( "Chat channel ID "
    + std::to_string( cId.ChannelID )
    + " created"
  );

  return cId.ChannelID;
}

void ChatChannelMgr::addToChannel( uint64_t channelId, Entity::Player& player )
{
  if( !isChannelValid( channelId ) )
  {
    // channel id is invalid

    Logger::warn( "Attempted to add player "
      + std::to_string( player.getId() )
      + " to invalid channel ID "
      + std::to_string( channelId )
    );

    return;
  }

  auto& channelMembers = m_channels[ channelId ];
  auto pPlayer = player.getAsPlayer();

  if( std::find( channelMembers.begin(), channelMembers.end(), pPlayer ) == channelMembers.end() )
    m_channels[ channelId ].emplace_back( player.getAsPlayer() );
}

void ChatChannelMgr::removeFromChannel( uint64_t channelId, Entity::Player& player )
{
  if( !isChannelValid( channelId ) )
  {
    // channel id is invalid

    Logger::warn( "Attempted to remove player "
                  + std::to_string( player.getId() )
                  + " from invalid channel ID "
                  + std::to_string( channelId )
    );

    return;
  }

  auto& channelMembers = m_channels[ channelId ];
  auto pPlayer = player.getAsPlayer();

  auto it = std::find( channelMembers.begin(), channelMembers.end(), pPlayer );
  if( it != channelMembers.end() )
    channelMembers.erase( it );
}

void ChatChannelMgr::sendMessageToChannel( uint64_t channelId, Entity::Player& sender, const std::string& message )
{
  if( !isChannelValid( channelId ) )
  {
    // channel id is invalid

    Logger::warn( "Attempted to send message from player "
      + std::to_string( sender.getId() )
      + " to invalid channel ID "
      + std::to_string( channelId )
    );

    return;
  }

  auto& channelMembers = m_channels[ channelId ];

  auto& server = Common::Service< World::WorldServer >::ref();
  // send message to all players in chat channel
  for( const auto& pPlayer : channelMembers )
  {
    // skip sender from getting their own message
    if( pPlayer->getId() == sender.getId() )
      continue;

    auto pSession = server.getSession( pPlayer->getCharacterId() );

    if( !pSession )
    {
      Logger::error( std::string( __FUNCTION__ ) + ": Session not found for player#{}", pPlayer->getCharacterId() );
      continue;
    }

    // prepare message packet, associating message and sender info with channel data
    auto chatToChannelPacket = makeChatPacket< Server::FFXIVChatToChannel >( pPlayer->getId() );

    strcpy( chatToChannelPacket->data().message, message.c_str() );
    strcpy( chatToChannelPacket->data().speakerName, sender.getName().c_str() );

    chatToChannelPacket->data().channelID = channelId;

    chatToChannelPacket->data().speakerCharacterID = sender.getCharacterId();
    chatToChannelPacket->data().speakerEntityID = sender.getId();

    chatToChannelPacket->data().type = 0; // player message type (eg. GM, etc)

    pSession->getChatConnection()->queueOutPacket( chatToChannelPacket );
  }
}

bool ChatChannelMgr::isChannelValid( uint64_t channelId ) const
{
  return !( m_channels.find( channelId ) == m_channels.end() );
}

const Data::ChatChannelMembers& ChatChannelMgr::getChatChannel( uint64_t channelId )
{
  bool channelValid = isChannelValid( channelId );
  assert( channelValid );

  return m_channels[ channelId ];
}