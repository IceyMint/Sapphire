#include <Script/NativeScriptApi.h>
#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class BattleintheBigKeep : public InstanceContentScript
{
public:
   BattleintheBigKeep() : InstanceContentScript( 20030 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {
      
      instance->registerEObj( "Unknown0", 2000551, 4277027, 4, { -3.577190f, 48.000000f, -12.625050f }, 1.000000f );
      instance->registerEObj( "Unknown1", 2000552, 4277005, 4, { 21.455280f, 48.000011f, -12.604770f }, 1.000000f );
      instance->registerEObj( "Unknown2", 2000553, 4277029, 4, { -3.963791f, 48.000000f, 9.699657f }, 1.000000f );
      instance->registerEObj( "Unknown3", 2000554, 4277028, 4, { 21.081841f, 47.999920f, 9.731779f }, 1.000000f );
      instance->registerEObj( "Unknown4", 2000491, 4246565, 4, { -254.388702f, -8.857766f, -0.323940f }, 1.000000f );
      instance->registerEObj( "Unknown5", 2000492, 0, 4, { -266.179810f, -9.200000f, -0.162207f }, 1.000000f );
      instance->registerEObj( "Exit", 2000493, 4246574, 4, { -12.466670f, 48.285069f, -0.015320f }, 0.991760f );
      instance->registerEObj( "Unknown6", 2000494, 4246576, 4, { -81.527344f, 0.000003f, -1.602537f }, 1.000000f );
      instance->registerEObj( "Unknown7", 2000495, 4246594, 4, { -81.412201f, 0.000003f, 0.186550f }, 1.000000f );
      instance->registerEObj( "Unknown8", 2000496, 4246595, 4, { 199.816895f, 21.957701f, -104.781303f }, 0.991760f );
      instance->registerEObj( "Unknown9", 2000497, 4246596, 4, { 200.915497f, 21.957701f, -104.598198f }, 0.991760f );
      instance->registerEObj( "Unknown10", 2000498, 4246617, 4, { 34.775269f, 48.081181f, 0.381470f }, 0.991760f );
      instance->registerEObj( "Unknown11", 2000499, 4246618, 4, { 34.775269f, 48.081181f, -0.839294f }, 0.991760f );
      instance->registerEObj( "Shortcut", 2000700, 0, 4, { -246.833496f, -8.499996f, 4.016408f }, 1.000000f );
      instance->registerEObj( "Aetherialflow", 2000500, 4247835, 4, { -10.236110f, -0.000000f, -0.015320f }, 0.991760f );
      instance->registerEObj( "PresenceChamberdoor", 2000502, 4308888, 4, { 60.483269f, 48.174511f, -0.015320f }, 0.991760f );
      instance->registerEObj( "BloodyTranseptdoor", 2000687, 4308274, 4, { 199.985397f, 22.200001f, -103.389503f }, 1.000000f );
      instance->registerEObj( "Unknown12", 2002741, 4388278, 4, { -82.462273f, 0.000002f, 0.045686f }, 1.000000f );
      instance->registerEObj( "Unknown13", 2000509, 4271520, 4, { 134.111496f, 22.079769f, -5.935791f }, 0.991760f );
      instance->registerEObj( "Unknown14", 2000510, 4271522, 4, { 142.229202f, 22.079769f, -6.088379f }, 0.991760f );
      instance->registerEObj( "Unknown15", 2000511, 4271529, 4, { 158.129196f, 22.079769f, -6.088379f }, 0.991760f );
      instance->registerEObj( "Unknown16", 2000512, 4271531, 4, { 133.958893f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown17", 2000513, 4271532, 4, { 142.015594f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown18", 2000514, 4271533, 4, { 158.190201f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown19", 2000521, 4274657, 4, { 193.987900f, 22.110291f, 42.099609f }, 0.991760f );
      instance->registerEObj( "Unknown20", 2000522, 4274656, 4, { 193.804794f, 22.079769f, 57.938480f }, 0.991760f );
      instance->registerEObj( "Unknown21", 2000523, 4274655, 4, { 193.804794f, 22.079769f, 65.964722f }, 0.991760f );
      instance->registerEObj( "Unknown22", 2000524, 4274661, 4, { 206.317093f, 22.079769f, 42.038570f }, 0.991760f );
      instance->registerEObj( "Unknown23", 2000525, 4274660, 4, { 206.286697f, 22.079769f, 57.968990f }, 0.991760f );
      instance->registerEObj( "Unknown24", 2000526, 4274659, 4, { 206.286697f, 22.079769f, 65.995239f }, 0.991760f );
      instance->registerEObj( "Unknown25", 2000533, 4274648, 4, { 241.992798f, 22.079769f, -6.332520f }, 0.991760f );
      instance->registerEObj( "Unknown26", 2000534, 4274649, 4, { 258.075806f, 22.079769f, -6.332520f }, 0.991760f );
      instance->registerEObj( "Unknown27", 2000535, 4274650, 4, { 265.949493f, 22.079769f, -6.271484f }, 0.991760f );
      instance->registerEObj( "Unknown28", 2000536, 4274651, 4, { 241.931793f, 22.079769f, 6.240906f }, 0.991760f );
      instance->registerEObj( "Unknown29", 2000537, 4274652, 4, { 258.075806f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown30", 2000538, 4274653, 4, { 266.071503f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown31", 2000545, 4274662, 4, { 193.804794f, 22.079769f, -34.042912f }, 0.991760f );
      instance->registerEObj( "Unknown32", 2000546, 4274667, 4, { 193.804794f, 22.079769f, -42.008121f }, 0.991760f );
      instance->registerEObj( "Unknown33", 2000547, 4274666, 4, { 193.804794f, 22.079769f, -58.335270f }, 0.991760f );
      instance->registerEObj( "Unknown34", 2000548, 4274663, 4, { 206.317093f, 22.079769f, -33.890320f }, 0.991760f );
      instance->registerEObj( "Unknown35", 2000549, 4274665, 4, { 206.317093f, 22.079769f, -41.916561f }, 0.991760f );
      instance->registerEObj( "Unknown36", 2000550, 4274664, 4, { 206.317093f, 22.079769f, -58.274231f }, 0.991760f );
      instance->registerEObj( "Unknown37", 2000503, 4274671, 4, { 134.111496f, 22.079769f, -5.935791f }, 0.991760f );
      instance->registerEObj( "Unknown38", 2000504, 4274672, 4, { 142.229202f, 22.079769f, -6.088379f }, 0.991760f );
      instance->registerEObj( "Unknown39", 2000505, 4274673, 4, { 158.129196f, 22.079769f, -6.088379f }, 0.991760f );
      instance->registerEObj( "Unknown40", 2000506, 4274674, 4, { 133.958893f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown41", 2000507, 4274675, 4, { 142.015594f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown42", 2000508, 4274676, 4, { 158.190201f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown43", 2000515, 4274685, 4, { 193.987900f, 22.110291f, 42.099609f }, 0.991760f );
      instance->registerEObj( "Unknown44", 2000516, 4274684, 4, { 193.804794f, 22.079769f, 57.938480f }, 0.991760f );
      instance->registerEObj( "Unknown45", 2000517, 4274683, 4, { 193.804794f, 22.079769f, 65.964722f }, 0.991760f );
      instance->registerEObj( "Unknown46", 2000518, 4274688, 4, { 206.317093f, 22.079769f, 42.038570f }, 0.991760f );
      instance->registerEObj( "Unknown47", 2000519, 4274687, 4, { 206.317093f, 22.079769f, 57.968990f }, 0.991760f );
      instance->registerEObj( "Unknown48", 2000520, 4274686, 4, { 206.317093f, 22.079769f, 65.995239f }, 0.991760f );
      instance->registerEObj( "Unknown49", 2000527, 4274677, 4, { 241.992798f, 22.079769f, -6.332520f }, 0.991760f );
      instance->registerEObj( "Unknown50", 2000528, 4274678, 4, { 258.075806f, 22.079769f, -6.332520f }, 0.991760f );
      instance->registerEObj( "Unknown51", 2000529, 4274679, 4, { 265.949493f, 22.079769f, -6.271484f }, 0.991760f );
      instance->registerEObj( "Unknown52", 2000530, 4274680, 4, { 241.931793f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown53", 2000531, 4274681, 4, { 258.075806f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown54", 2000532, 4274682, 4, { 266.071503f, 22.079769f, 6.271362f }, 0.991760f );
      instance->registerEObj( "Unknown55", 2000539, 4274689, 4, { 193.804794f, 22.079769f, -34.042912f }, 0.991760f );
      instance->registerEObj( "Unknown56", 2000540, 4274694, 4, { 193.804794f, 22.079769f, -42.008121f }, 0.991760f );
      instance->registerEObj( "Unknown57", 2000541, 4274693, 4, { 193.804794f, 22.079769f, -58.335270f }, 0.991760f );
      instance->registerEObj( "Unknown58", 2000542, 4274690, 4, { 206.317093f, 22.079769f, -33.890320f }, 0.991760f );
      instance->registerEObj( "Unknown59", 2000543, 4274692, 4, { 206.317093f, 22.079769f, -41.916561f }, 0.991760f );
      instance->registerEObj( "Unknown60", 2000544, 4274691, 4, { 206.317093f, 22.079769f, -58.274231f }, 0.991760f );
      instance->registerEObj( "Entrance", 2000182, 5608623, 5, { -156.520401f, -2.800003f, -5.140180f }, 1.000000f );
      instance->registerEObj( "Unknown62", 2002872, 5608617, 4, { -154.662003f, -2.800003f, 5.028913f }, 1.000000f );
      instance->registerEObj( "Unknown63", 2002735, 0, 4, { -151.232193f, -2.822998f, 0.289556f }, 1.174927f );
      instance->registerEObj( "Unknown64", 2005128, 5608619, 4, { -112.240501f, -2.800003f, -0.701091f }, 1.000000f );
      instance->registerEObj( "Unknown65", 2002735, 0, 4, { -46.585720f, 0.045776f, 0.190301f }, 1.179312f );
      instance->registerEObj( "Unknown66", 2002872, 5608620, 4, { -46.476231f, 0.000000f, -0.510445f }, 1.000000f );
      instance->registerEObj( "Exit", 2000139, 0, 4, { -7.766907f, -0.015320f, 0.015198f }, 0.991760f );
      instance->registerEObj( "Unknown67", 2000561, 4248559, 4, { 200.121902f, 21.988159f, -114.000000f }, 1.000000f );
      instance->registerEObj( "Unknown68", 2000555, 4249099, 4, { 200.000000f, 21.988159f, -151.822800f }, 0.991760f );
      instance->registerEObj( "Aetherialflow", 2000501, 4247838, 4, { 200.061005f, 22.000000f, -165.266006f }, 0.991760f );
      instance->registerEObj( "Unknown69", 2000556, 4249100, 4, { 200.000000f, 21.988159f, -146.822800f }, 0.991760f );
      instance->registerEObj( "Unknown70", 2000557, 4249101, 4, { 200.000000f, 21.988159f, -141.822800f }, 0.991760f );
      instance->registerEObj( "Unknown71", 2000560, 4249104, 4, { 200.000000f, 21.988159f, -126.822800f }, 0.991760f );
      instance->registerEObj( "Unknown72", 2000602, 4253048, 4, { 200.000000f, 21.988159f, -121.822800f }, 0.991760f );
      instance->registerEObj( "Unknown73", 2000559, 4249103, 4, { 200.000000f, 21.988159f, -131.822800f }, 0.991760f );
      instance->registerEObj( "Unknown74", 2000558, 4249102, 4, { 200.000000f, 21.957701f, -136.838501f }, 0.991760f );
   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};