#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

using namespace Core;

class TheStrikingTreeHard :
  public Sapphire::ScriptAPI::InstanceContentScript
{
public:
  TheStrikingTreeHard() :
    Sapphire::ScriptAPI::InstanceContentScript( 20022 )
  {
  }

  void onInit( InstanceContentPtr instance ) override
  {
    instance->registerEObj( "Entrance", 2000182, 4712008, 5, { 5.026201f, 74.994751f, 16.039301f }, 1.000000f,
                            0.000000f );
    // States -> vf_lock_on vf_lock_of
    instance->registerEObj( "Exit", 2000139, 0, 4, { 0.000000f, 75.000000f, -7.671923f }, 1.000000f, 0.000000f );

  }

  void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
  {

  }

  void onEnterTerritory( InstanceContentPtr instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};