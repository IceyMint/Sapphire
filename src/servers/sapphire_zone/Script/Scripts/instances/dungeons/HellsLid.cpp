#include <Script/NativeScriptApi.h>
#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class HellsLid : public InstanceContentScript
{
public:
   HellsLid() : InstanceContentScript( 59 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {
      
      instance->registerEObj( "Unknown0", 2007457, 7170401, 4, { -71.824219f, 36.942020f, 308.278015f }, 0.991760f );
      instance->registerEObj( "Unknown1", 2007457, 7170402, 4, { -74.204651f, 2.975464f, 288.624390f }, 0.991760f );
      instance->registerEObj( "Unknown2", 2007457, 7170403, 4, { -74.725868f, 2.999996f, 204.499496f }, 1.000000f );
      instance->registerEObj( "Unknown3", 2007457, 7253595, 4, { -82.098160f, 3.000000f, 259.118103f }, 1.000000f );
      instance->registerEObj( "Unknown4", 2007457, 7253596, 4, { -82.556618f, 3.000000f, 259.252808f }, 1.000000f );
      instance->registerEObj( "Unknown5", 2007457, 7253597, 4, { -82.556618f, 3.000000f, 259.252808f }, 1.000000f );
      instance->registerEObj( "Unknown6", 2007457, 7253612, 4, { -63.482540f, 2.975464f, 256.192291f }, 0.991760f );
      instance->registerEObj( "Unknown7", 2007457, 7253613, 4, { -63.482540f, 2.975464f, 256.192291f }, 0.991760f );
      instance->registerEObj( "Unknown8", 2007457, 7253614, 4, { -63.482540f, 2.975464f, 256.192291f }, 0.991760f );
      instance->registerEObj( "Unknown9", 2007457, 7253621, 4, { -83.775871f, 3.000000f, 228.598297f }, 1.000000f );
      instance->registerEObj( "Unknown10", 2007457, 7253622, 4, { -83.775871f, 3.000000f, 228.598297f }, 1.000000f );
      instance->registerEObj( "Unknown11", 2007457, 7253623, 4, { -83.775871f, 3.000000f, 228.598297f }, 1.000000f );
      instance->registerEObj( "Unknown12", 2007457, 7253630, 4, { -63.137959f, 2.999996f, 217.910294f }, 1.000000f );
      instance->registerEObj( "Unknown13", 2007457, 7253631, 4, { -63.137959f, 2.999996f, 217.910294f }, 1.000000f );
      instance->registerEObj( "Unknown14", 2007457, 7253632, 4, { -63.137959f, 2.999996f, 217.910294f }, 1.000000f );
      instance->registerEObj( "Unknown15", 2002735, 0, 4, { -70.236214f, -2.994005f, 150.513504f }, 0.991760f );
      instance->registerEObj( "Unknown16", 2007457, 7173420, 4, { -67.025093f, -3.000000f, 145.419205f }, 1.000000f );
      instance->registerEObj( "Unknown17", 2007457, 7173423, 4, { -67.025078f, -2.956286f, 106.833702f }, 1.000000f );
      instance->registerEObj( "Unknown18", 2007457, 7229619, 4, { -78.515167f, -3.000000f, 126.046402f }, 1.000000f );
      instance->registerEObj( "Unknown19", 2007457, 7229620, 4, { -65.781677f, -3.006042f, 126.756599f }, 0.991760f );
      instance->registerEObj( "Unknown20", 2007457, 7229622, 4, { -78.080513f, -3.006042f, 134.996597f }, 0.991760f );
      instance->registerEObj( "Unknown21", 2007457, 7229623, 4, { -63.370731f, -3.006042f, 134.752396f }, 0.991760f );
      instance->registerEObj( "Unknown22", 2007457, 7242616, 4, { -45.700809f, -8.255188f, 23.636169f }, 0.991760f );
      instance->registerEObj( "Unknown23", 2007457, 7245584, 4, { 26.736940f, -16.665211f, 27.040310f }, 0.991760f );
      instance->registerEObj( "Unknown24", 2007457, 7167237, 4, { 55.466431f, -16.525570f, 30.044920f }, 0.991760f );
      instance->registerEObj( "Unknown25", 2007457, 7167239, 4, { 57.053471f, -25.528379f, -52.079102f }, 0.991760f );
      instance->registerEObj( "Unknown26", 2002735, 0, 4, { 59.280998f, -26.000000f, -100.623596f }, 1.250000f );
      instance->registerEObj( "Unknown27", 2007457, 7173646, 4, { 63.367290f, -26.500000f, -104.259499f }, 1.000000f );
      instance->registerEObj( "Unknown28", 2007457, 7173648, 4, { 61.874378f, -26.500059f, -136.133804f }, 1.000000f );
      instance->registerEObj( "Unknown29", 2007457, 7167248, 4, { 60.837650f, -96.757507f, -322.591003f }, 0.991760f );
      instance->registerEObj( "Unknown30", 2007457, 7167249, 4, { 61.997311f, -93.000023f, -421.408386f }, 0.991760f );
      instance->registerEObj( "Unknown31", 2002735, 0, 4, { 62.119381f, -88.000000f, -455.242706f }, 0.991760f );
      instance->registerEObj( "Unknown32", 2007457, 7174030, 4, { 62.878109f, -88.000000f, -458.344788f }, 1.000000f );
      instance->registerEObj( "Unknown33", 2007457, 7207905, 4, { 57.755989f, -88.029297f, -476.778687f }, 0.991760f );
      instance->registerEObj( "Unknown34", 2009378, 0, 4, { 62.000000f, -90.000000f, -475.000000f }, 1.000000f );
      instance->registerEObj( "Unknown35", 2009379, 0, 4, { 61.997311f, -90.013000f, -475.028595f }, 0.991760f );
      instance->registerEObj( "Unknown36", 2009380, 0, 4, { 61.997311f, -90.013000f, -475.028595f }, 0.991760f );
      instance->registerEObj( "Unknown37", 2009381, 0, 4, { 62.000000f, -90.000000f, -475.000000f }, 1.000000f );
      instance->registerEObj( "Unknown38", 2009382, 0, 4, { 61.997311f, -90.013000f, -475.028595f }, 0.991760f );
      instance->registerEObj( "Unknown39", 2009383, 0, 4, { 62.000000f, -90.000000f, -475.000000f }, 1.000000f );
      instance->registerEObj( "Entrance", 2000182, 7167443, 5, { -121.331703f, 65.000000f, 474.948303f }, 1.000000f );
      instance->registerEObj( "Exit", 2000139, 0, 4, { 62.058472f, -88.000000f, -489.921387f }, 0.991760f );
      instance->registerEObj( "Shortcut", 2000700, 0, 4, { -113.603500f, 65.000000f, 469.016510f }, 0.991760f );
   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};