#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

using namespace Core;

class AlexanderTheCuffoftheSon :
  public Sapphire::ScriptAPI::InstanceContentScript
{
public:
  AlexanderTheCuffoftheSon() :
    Sapphire::ScriptAPI::InstanceContentScript( 30031 )
  {
  }

  void onInit( InstanceContentPtr instance ) override
  {

  }

  void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
  {

  }

  void onEnterTerritory( InstanceContentPtr instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};