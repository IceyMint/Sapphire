#include <ScriptObject.h>
#include <Actor/Player.h>

using namespace Sapphire;

class CmnDefMarketBoardGridania :
  public Sapphire::ScriptAPI::EventScript
{
public:
  CmnDefMarketBoardGridania() :
    Sapphire::ScriptAPI::EventScript( 0xB0027 )
  {
  }

  void Scene00000( Entity::Player& player )
  {
    eventMgr().playScene( player, getId(), 0, HIDE_HOTBAR, { 1 } );
  }

  void onTalk( uint32_t eventId, Entity::Player& player, uint64_t actorId ) override
  {
    Scene00000( player );
  }
};

EXPOSE_SCRIPT( CmnDefMarketBoardGridania );