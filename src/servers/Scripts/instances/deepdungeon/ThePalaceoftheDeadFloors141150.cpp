#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class ThePalaceoftheDeadFloors141150 : public InstanceContentScript
{
public:
   ThePalaceoftheDeadFloors141150() : InstanceContentScript( 60015 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {
      instance->registerEObj( "sgvf_w_lvd_b0959", 2000608, 6535683, 4, { -300.000000f, -0.000205f, -237.000000f }, 1.000000f, 0.000000f ); 
      // States -> vf_bextwall_on vf_bextwall_on2off vf_bextwall_off 

   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};