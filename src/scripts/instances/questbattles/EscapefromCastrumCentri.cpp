#include <ScriptObject.h>
#include <Territory/QuestBattle.h>

using namespace Sapphire;

class EscapefromCastrumCentri : public Sapphire::ScriptAPI::QuestBattleScript
{
private:
  static constexpr auto INIT_P_POP_1_BIGGS = 4278226;
  static constexpr auto INIT_P_POP_1_ARMOR_WEDGE = 4278227;
  static constexpr auto INIT_POP_1_1_EXC_LEADER = 4278232;
  static constexpr auto INIT_POP_1_1_LNC_01 = 4278234;
  static constexpr auto INIT_POP_1_1_THM_01 = 4278235;
  static constexpr auto INIT_P_POP_1_PAPALYMO = 4278239;
  static constexpr auto INIT_P_POP_1_URIANGER = 4278243;
  static constexpr auto INIT_ENPC_1_MINFILIA = 4278275;
  static constexpr auto INIT_ENPC_1_TATARU = 4278277;
  static constexpr auto INIT_POP_1_2_LNC_01 = 4278298;
  static constexpr auto INIT_POP_1_2_CNJ_01 = 4278300;
  static constexpr auto INIT_POP_1_2_GLA_01 = 4278305;
  static constexpr auto INIT_ENPC_2_MINFILIA = 4288517;
  static constexpr auto INIT_ENPC_2_TATARU = 4288518;
  static constexpr auto INIT_ENPC_2_BIGGS = 4288515;
  static constexpr auto INIT_P_POP_2_PAPALYMO = 4278513;
  static constexpr auto INIT_P_POP_2_URIANGER = 4278521;
  static constexpr auto INIT_POP_2_1_LNC_01 = 4278529;
  static constexpr auto INIT_POP_2_1_GLA_01 = 4278538;
  static constexpr auto INIT_POP_2_1_CNJ_01 = 4278558;
  static constexpr auto INIT_POP_2_1_KIL_01 = 4278569;
  static constexpr auto INIT_POP_2_1_THM_01 = 4278577;
  static constexpr auto INIT_POP_2_2_KIL_01 = 4285260;
  static constexpr auto INIT_POP_2_2_KIL_02 = 4285261;
  static constexpr auto INIT_POP_2_2_LNC_01 = 4285274;
  static constexpr auto INIT_POP_2_2_THM_01 = 4285278;
  static constexpr auto INIT_POP_2_2_THM_02 = 4285317;
  static constexpr auto INIT_POP_2_2_TOOL_01 = 4286888;
  static constexpr auto INIT_POP_2_2_TOOL_02 = 4286889;
  static constexpr auto INIT_POP_2_2_TOOL_03 = 4286891;
  static constexpr auto INIT_POP_2_3_STL_03 = 4287242;
  static constexpr auto INIT_POP_2_2_CNJ_03 = 4287243;
  static constexpr auto INIT_P_POP_PET = 4308235;
  static constexpr auto WARP_01 = 4278503;
  static constexpr auto INIT_EO_POP_URIANGER_HANDS_ON = 4307830;
  static constexpr auto INIT_EO_POP_PAPALYMO_HANDS_ON = 4307829;
  static constexpr auto EVENT_ACTION_01 = 42;
  static constexpr auto INIT_ENPC_POP_URIANGER = 4307929;
  static constexpr auto INIT_ENPC_POP_PAPALYMO = 4307930;
  static constexpr auto YELL_QIB_URIANGER_01 = 1192;
  static constexpr auto YELL_QIB_PAPALYMO_01 = 1193;
  static constexpr auto YELL_QIB_01 = 1693;
  static constexpr auto YELL_QIB_02 = 1694;
  static constexpr auto YELL_QIB_03 = 1695;
  static constexpr auto LOGMESSAGE_QIB_01 = 3214;
  static constexpr auto LOGMESSAGE_QIB_02 = 3215;
  static constexpr auto LOGMESSAGE_QIB_03 = 3216;
  static constexpr auto DEF_ACTION_SUMMON_PET_BNPC = 1307;
  static constexpr auto STATUS_CUSTOM_REGEN = 691;
  static constexpr auto CUT_SCENE_01 = 258;
  static constexpr auto CUT_SCENE_02 = 259;
  static constexpr auto BGM_BATTLE_2ND = 36;
  static constexpr auto DEF_WEATHER_SUNY = 2;

public:
  EscapefromCastrumCentri() : Sapphire::ScriptAPI::QuestBattleScript( 65 )
  { }

  void onInit( QuestBattle& instance ) override
  {
    instance.addEObj( "Entrance", 2001710, 4265606, 4265604, 5, { 562.363892f, -9.311770f, -685.115173f }, 0.991760f, 0.000048f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.addEObj( "unknown_0", 2002013, 0, 4265645, 4, { 558.403503f, -9.602775f, -748.115723f }, 0.991760f, -0.847763f, 0); 
    instance.addEObj( "unknown_1", 2002014, 0, 4265646, 4, { 555.218811f, -9.914214f, -744.493896f }, 0.991760f, -0.855743f, 0); 
    instance.addEObj( "unknown_2", 2002015, 0, 4265647, 4, { 552.117920f, -9.866073f, -740.866516f }, 1.000000f, -0.862447f, 0); 
    instance.addEObj( "unknown_3", 2002016, 0, 4265648, 4, { 548.789124f, -9.774433f, -736.981079f }, 0.991760f, -0.850556f, 0); 
    instance.addEObj( "unknown_4", 2002017, 0, 4265649, 4, { 545.555786f, -9.781128f, -733.241821f }, 0.991760f, -0.844901f, 0); 
    instance.addEObj( "unknown_5", 2002018, 0, 4265653, 4, { 552.118225f, -9.862718f, -740.699524f }, 1.000000f, -0.849258f, 0); 
    instance.addEObj( "unknown_6", 2002019, 0, 4265654, 4, { 554.344971f, -9.960441f, -743.220276f }, 0.991760f, -0.852379f, 0); 
    instance.addEObj( "unknown_7", 2002020, 0, 4265655, 4, { 550.454712f, -9.807017f, -738.729614f }, 1.000000f, -0.853487f, 0); 
    instance.addEObj( "unknown_8", 2002021, 0, 4265656, 4, { 554.549622f, -9.837545f, -738.582886f }, 1.000000f, -0.854490f, 0); 
    instance.addEObj( "unknown_9", 2002022, 0, 4265657, 4, { 549.658386f, -9.926717f, -742.964722f }, 0.991760f, 0.714606f, 0); 
    instance.addEObj( "unknown_10", 2002023, 0, 4265659, 4, { 558.757812f, -9.500336f, -734.751282f }, 0.991760f, -0.854171f, 0); 
    instance.addEObj( "unknown_11", 2002024, 0, 4265660, 4, { 551.017273f, -9.762955f, -736.960083f }, 1.000000f, -0.851339f, 0); 
    instance.addEObj( "unknown_12", 2002025, 0, 4265661, 4, { 542.133179f, -9.775475f, -739.224426f }, 0.991760f, -0.835812f, 0); 
    instance.addEObj( "unknown_13", 2002026, 0, 4265662, 4, { 555.731323f, -9.929686f, -742.290771f }, 1.000000f, 0.708747f, 0); 
    instance.addEObj( "unknown_14", 2002027, 0, 4265663, 4, { 552.912170f, -9.289687f, -751.080505f }, 0.991760f, -0.834930f, 0); 
    instance.addEObj( "unknown_15", 2002028, 0, 4265674, 4, { 558.720276f, -9.570473f, -736.469971f }, 0.991760f, -0.850168f, 0); 
    instance.addEObj( "unknown_16", 2002029, 0, 4265675, 4, { 556.377197f, -9.776423f, -745.858093f }, 0.991760f, 0.724504f, 0); 
    instance.addEObj( "unknown_17", 2002030, 0, 4265676, 4, { 547.470886f, -9.880726f, -746.497986f }, 0.991760f, -0.839097f, 0); 
    instance.addEObj( "unknown_18", 2002031, 0, 4265677, 4, { 544.853882f, -9.872620f, -738.979187f }, 0.991760f, -0.823425f, 0); 
    instance.addEObj( "unknown_19", 2002032, 0, 4265678, 4, { 551.919800f, -9.653377f, -732.774170f }, 0.991760f, -0.857036f, 0); 
    instance.addEObj( "Entrance_1", 2001710, 4269167, 4269166, 5, { 545.484802f, 21.838400f, -559.567322f }, 0.991760f, 0.000048f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.addEObj( "unknown_20", 2002545, 0, 4325043, 4, { -169.956207f, 13.974900f, -609.323181f }, 1.000000f, 0.351903f, 0); 
    instance.addEObj( "Ropebond", 2002427, 0, 4307829, 4, { -393.331787f, -1.113953f, -268.543488f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ropebond_1", 2002428, 0, 4307830, 4, { -392.629913f, -0.595154f, -270.435699f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_21", 2000608, 3969541, 4324082, 4, { -459.575592f, -3.216800f, -222.221497f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Imperialmateriel", 2004479, 0, 4890638, 4, { -513.036194f, -4.039670f, -442.465088f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Imperialmateriel_1", 2004480, 0, 4890639, 4, { -464.078613f, -5.705007f, -413.525513f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Imperialmateriel_2", 2004481, 0, 4890640, 4, { -485.297699f, -4.014939f, -412.506897f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_22", 2004530, 0, 4892486, 4, { -513.036194f, -4.039682f, -442.465088f }, 1.000000f, -1.422480f, 0); 
    instance.addEObj( "unknown_23", 2004531, 0, 4892487, 4, { -464.078613f, -5.705000f, -413.525513f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_24", 2004532, 0, 4892488, 4, { -485.297699f, -4.014900f, -412.506897f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "×荷車", 2005952, 0, 5899567, 4, { -222.920395f, -3.614243f, -542.295227f }, 1.000000f, -0.306771f, 0); 
    instance.addEObj( "×樽1", 2005953, 0, 5899569, 4, { -235.755096f, -4.371367f, -542.365723f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "×樽2", 2005954, 0, 5899570, 4, { -235.018204f, -4.291595f, -541.160095f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "×海賊テーブル", 2005956, 0, 5899571, 4, { 243.274094f, 0.356674f, -562.477478f }, 1.000000f, -0.738497f, 0); 
    instance.addEObj( "×本�山", 2005957, 0, 5899572, 4, { 243.112198f, 1.160357f, -561.931213f }, 1.000000f, 1.199492f, 0); 
    instance.addEObj( "Entrance_2", 2002946, 0, 4509040, 4, { 714.896973f, 15.690880f, -71.541550f }, 0.991760f, -0.898782f, 0); 
    instance.addEObj( "unknown_25", 2005074, 0, 5572583, 4, { 336.822998f, -27.989771f, -363.613312f }, 0.991760f, 1.011173f, 0); 
    instance.addEObj( "RisingStonesentrance", 2002881, 0, 4498853, 4, { 21.150000f, 22.340660f, -631.270020f }, 1.000000f, -1.206459f, 0); 
    instance.addEObj( "Crystalgate", 2002927, 0, 4506596, 4, { 572.359070f, -0.026219f, -260.489594f }, 1.000000f, 0.592001f, 0); 
    instance.addEObj( "Crystalgate_1", 2002928, 0, 4506600, 4, { 570.354614f, 0.018750f, -257.448090f }, 1.000000f, -0.968045f, 0); 
    instance.addEObj( "Drainagepipe", 2002201, 0, 4301936, 4, { -420.523407f, -16.898170f, -325.307098f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Drainagepipe_1", 2002202, 0, 4301946, 4, { -420.510895f, -16.898170f, -325.289612f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crystallizedbark", 2002203, 0, 4302023, 4, { -137.307495f, 46.723160f, -195.348801f }, 0.991760f, -0.817783f, 0); 
    instance.addEObj( "Crystallizedbark_1", 2002204, 0, 4302025, 4, { -131.609100f, 48.171280f, -191.910202f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Crystallizedbark_2", 2002205, 0, 4302026, 4, { -133.235001f, 48.260818f, -192.459106f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination", 2002451, 0, 4308040, 4, { -132.890900f, 47.013062f, -193.713303f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Crystallineformation", 2002206, 0, 4302115, 4, { -58.651531f, 16.241579f, -611.524902f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Crystallineformation_1", 2002207, 0, 4302116, 4, { -99.104683f, 6.540496f, -674.131714f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Forgottencrate", 2002208, 0, 4297255, 4, { -123.725899f, -0.218121f, -649.890686f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Forgottencrate_1", 2002584, 0, 4331292, 4, { -144.339005f, 2.874047f, -661.245117f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Forgottencrate_2", 2002605, 0, 4331855, 4, { -115.341904f, -2.473567f, -626.872925f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_1", 2002211, 0, 4298745, 4, { 400.930786f, -9.137818f, -751.644226f }, 1.000000f, -0.273594f, 0); 
    instance.addEObj( "Destination_2", 2002212, 0, 4299860, 4, { 433.462891f, -17.164310f, -350.911713f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_3", 2002213, 0, 4299892, 4, { -286.979401f, -16.898170f, -361.229889f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Marestailroot", 2002214, 0, 4299920, 4, { -339.162292f, -16.129080f, -412.725586f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Marestailroot_1", 2002215, 0, 4299921, 4, { -339.234894f, -16.898170f, -394.897491f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Marestailroot_2", 2002216, 0, 4299923, 4, { -386.709412f, -17.238091f, -393.156494f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Marestailroot_3", 2002217, 0, 4299924, 4, { -356.466309f, -17.191759f, -363.057892f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Marestailroot_4", 2002218, 0, 4299925, 4, { -383.587402f, -17.181190f, -359.274689f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Marestailroot_5", 2002219, 0, 4299926, 4, { -366.588898f, -17.166571f, -374.781708f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Marestailroot_6", 2002220, 0, 4299928, 4, { -336.342194f, -16.865040f, -329.220306f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Marestailroot_7", 2002221, 0, 4299930, 4, { -314.334015f, -17.156130f, -348.074890f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Airshiphull", 2002222, 0, 4300037, 4, { 218.130096f, 10.867380f, -579.811096f }, 0.991760f, -0.155366f, 0); 
    instance.addEObj( "Airshiphull_1", 2002223, 0, 4300038, 4, { 249.037094f, -8.750800f, -521.638489f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Airshiphull_2", 2002224, 0, 4300039, 4, { 188.427704f, -11.669720f, -508.575104f }, 0.991760f, -0.427345f, 0); 
    instance.addEObj( "Airshiphull_3", 2002225, 0, 4300040, 4, { 203.882294f, 12.606520f, -577.368713f }, 0.991760f, -1.115162f, 0); 
    instance.addEObj( "Airshiphull_4", 2002226, 0, 4300041, 4, { 213.878799f, 2.289238f, -559.594116f }, 0.991760f, -1.393864f, 0); 
    instance.addEObj( "Airshiphull_5", 2002227, 0, 4300042, 4, { 227.557693f, -0.747742f, -544.234070f }, 0.991760f, 0.023389f, 0); 
    instance.addEObj( "Airshiphull_6", 2002228, 0, 4300043, 4, { 232.776199f, 3.555298f, -569.848083f }, 0.991760f, 0.771460f, 0); 
    instance.addEObj( "Airshiphull_7", 2002229, 0, 4300044, 4, { 196.940002f, -11.904600f, -499.308502f }, 0.991760f, 0.800200f, 0); 
    instance.addEObj( "Primelocation", 2002230, 0, 4300103, 4, { -171.509201f, 4.034513f, -655.766479f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Primelocation_1", 2002231, 0, 4300104, 4, { -174.901505f, 10.766260f, -603.814087f }, 1.000000f, -0.915460f, 0); 
    instance.addEObj( "Primelocation_2", 2002232, 0, 4300105, 4, { -146.911102f, 0.491158f, -616.044983f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Primelocation_3", 2002233, 0, 4300106, 4, { -202.071198f, 3.895854f, -625.899170f }, 0.991760f, -0.811877f, 0); 
    instance.addEObj( "Primelocation_4", 2002234, 0, 4300107, 4, { -216.806198f, 5.697670f, -637.459412f }, 0.991760f, -1.178680f, 0); 
    instance.addEObj( "Destination_4", 2002238, 0, 4300142, 4, { -505.209991f, -1.955465f, -467.440002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_5", 2002546, 0, 4325071, 4, { -501.844696f, -2.487681f, -469.709900f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_6", 2002329, 0, 4302067, 4, { -169.838593f, 14.134900f, -609.446472f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_7", 2002523, 0, 4322874, 4, { -169.766296f, 14.916020f, -610.179626f }, 1.998901f, 0.000048f, 0); 
    instance.addEObj( "Destination_8", 2002524, 0, 4322875, 4, { -226.787201f, 14.269910f, -669.305298f }, 2.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_9", 2002525, 0, 4322876, 4, { -65.474113f, 3.924486f, -633.507812f }, 2.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_26", 2002531, 0, 4323171, 4, { -60.144199f, 3.100394f, -641.304871f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_10", 2002897, 0, 4500638, 4, { 573.191895f, -1.713665f, -262.750488f }, 1.000000f, 0.808071f, 0); 
    instance.addEObj( "Imperialcrate", 2002847, 0, 4500764, 4, { -529.561218f, -1.787507f, -276.685913f }, 1.000000f, 0.698132f, 0); 
    instance.addEObj( "Imperialcrate_1", 2002848, 0, 4500766, 4, { -484.612000f, -3.998587f, -283.728790f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Imperialcrate_2", 2002849, 0, 4500770, 4, { -469.245605f, -4.000036f, -256.799500f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "SeventhHeavenspecial", 2003576, 0, 4622489, 4, { 15.848190f, 22.227190f, -639.026794f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "SeventhHeavenspecial_1", 2003577, 0, 4622491, 4, { 15.579410f, 22.225740f, -638.696899f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "SeventhHeavenspecial_2", 2003578, 0, 4622492, 4, { 15.437060f, 22.226549f, -638.146973f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Cobranest", 2003579, 0, 4622518, 4, { 82.940102f, -2.027193f, -482.344604f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Cobranest_1", 2003580, 0, 4622519, 4, { 211.204697f, 1.281197f, -561.048523f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Cobranest_2", 2003581, 0, 4622520, 4, { 234.096603f, -2.284743f, -544.372375f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Cobranest_3", 2003582, 0, 4622521, 4, { 168.020706f, -17.491011f, -472.464813f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Cobranest_4", 2003583, 0, 4622522, 4, { 273.829712f, -22.607740f, -452.792297f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Cobranest_5", 2003584, 0, 4622523, 4, { 311.076385f, -19.071409f, -454.984406f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_27", 2004144, 0, 4867449, 4, { 559.477173f, -8.183535f, -765.254395f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_11", 2004149, 0, 4867469, 4, { -252.002701f, 0.137329f, -555.626770f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_28", 2004150, 0, 4867471, 4, { -330.525696f, -5.120172f, -543.011597f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_29", 2004306, 0, 4759672, 4, { 132.969193f, -2.209579f, -556.219116f }, 0.600000f, 0.000000f, 0); 
    instance.addEObj( "unknown_30", 2004643, 0, 5045775, 4, { -455.716614f, -4.069521f, -302.543396f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_31", 2004644, 0, 5045899, 4, { -464.604492f, -3.216805f, -231.871399f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_32", 2004645, 0, 5046006, 4, { -541.609070f, -1.737357f, -294.172211f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_33", 2004646, 0, 5046032, 4, { -600.231201f, -3.216822f, -397.547089f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_12", 2004661, 0, 5035253, 4, { 83.175697f, 31.209360f, -741.163818f }, 1.000000f, -0.492499f, 0); 
    instance.addEObj( "Entrance_3", 2004639, 0, 5581972, 4, { 336.974396f, -27.756081f, -366.697296f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_13", 2005045, 0, 5580959, 4, { -146.410400f, 43.656010f, -188.616806f }, 0.991789f, 0.000048f, 0); 
    instance.addEObj( "unknown_34", 2006317, 0, 5932007, 4, { -159.624695f, 40.356998f, -194.720398f }, 1.000000f, -1.099879f, 0); 
    instance.addEObj( "Destination_14", 2006318, 0, 5932009, 4, { -147.254105f, 43.346561f, -186.623596f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Imperialcrate_3", 2006269, 0, 5920894, 4, { -661.330688f, -1.687814f, -367.790405f }, 0.991760f, -0.682896f, 0); 
    instance.addEObj( "Imperialcrate_4", 2006270, 0, 5920895, 4, { -570.462280f, -2.882562f, -334.739990f }, 1.000000f, -0.693256f, 0); 
    instance.addEObj( "Imperialcrate_5", 2006271, 0, 5920896, 4, { -462.790894f, -2.748990f, -289.417908f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "×", 2006449, 0, 5960928, 4, { -661.219971f, -2.933044f, -367.503601f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "×_1", 2006450, 0, 5960932, 4, { -570.468811f, -3.988342f, -334.747894f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "×_2", 2006451, 0, 5960935, 4, { -462.368500f, -4.007370f, -289.339386f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_35", 2002449, 0, 4308825, 4, { 104.356300f, -4.989685f, -532.890930f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_36", 2002450, 0, 4308826, 4, { 104.666603f, -4.936086f, -533.504517f }, 0.600000f, 0.000000f, 0); 
    instance.addEObj( "unknown_37", 2006323, 0, 5925689, 4, { -146.349304f, 2.334595f, -656.336304f }, 1.174927f, 0.000048f, 0); 
    instance.addEObj( "unknown_38", 2006324, 0, 5925697, 4, { -222.690704f, 3.283380f, -623.894714f }, 1.200000f, 0.000000f, 0); 
    instance.addEObj( "unknown_39", 2006325, 0, 5925699, 4, { -260.077789f, -5.474214f, -542.894775f }, 1.300000f, 0.000000f, 0); 
    instance.addEObj( "Direwortshrub", 2002385, 0, 4306006, 4, { -258.999603f, -16.144501f, -344.693787f }, 3.000000f, 0.000000f, 0); 
    instance.addEObj( "Direwortshrub_1", 2002715, 0, 4374710, 4, { -258.999603f, -15.750990f, -344.693787f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Direwortshrub_2", 2002716, 0, 4374711, 4, { -258.999603f, -15.930710f, -344.693787f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_40", 2002336, 0, 4302755, 4, { 453.262909f, -2.742266f, -780.544312f }, 1.500000f, 0.000000f, 0); 
    instance.addEObj( "unknown_41", 2002337, 0, 4302759, 4, { 505.049988f, -2.960000f, -776.739990f }, 1.500000f, 0.207017f, 0); 
    instance.addEObj( "Digsite", 2005571, 0, 5871817, 4, { 442.829987f, -19.512430f, -291.429993f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Digsite_1", 2006050, 0, 5906067, 4, { 455.797394f, -15.666240f, -323.708405f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Digsite_2", 2006051, 0, 5906068, 4, { 429.986115f, -23.913130f, -300.898987f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Digsite_3", 2006052, 0, 5906069, 4, { 434.620392f, -23.052990f, -280.173309f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Epitaphtodiscovery", 2002397, 0, 4306703, 4, { -339.440796f, -15.048680f, -403.217499f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Storagecrate", 2004314, 0, 4769233, 4, { -644.665588f, -1.328861f, -382.071198f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Storagecrate_1", 2004316, 0, 4769236, 4, { -569.852722f, -1.365008f, -318.063385f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Storagecrate_2", 2004315, 0, 4769239, 4, { -451.326385f, -2.369911f, -280.718994f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_15", 2005120, 0, 5582865, 4, { -121.000000f, 46.459740f, -188.000000f }, 1.000000f, 0.214913f, 0); 
    instance.addEObj( "MarkoftheScholar", 2004599, 0, 4982893, 4, { -143.083893f, 46.122318f, -188.528702f }, 0.991760f, -1.517888f, 0); 
    instance.addEObj( "unknown_42", 2004679, 0, 5020949, 4, { -359.973114f, -16.918489f, -461.546814f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_16", 2004628, 0, 5011819, 4, { 50.631580f, 31.150200f, -748.389404f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Soiledcanvas", 2004629, 0, 5011820, 4, { -166.776794f, 12.296790f, -619.883301f }, 0.991760f, -1.407202f, 0); 
    instance.addEObj( "unknown_43", 2004630, 0, 5011822, 4, { 78.922401f, 20.500250f, -627.850403f }, 1.000000f, -1.745329f, 0); 
    instance.addEObj( "Destination_17", 2004631, 0, 5011860, 4, { -127.550201f, -1.911497f, -638.452820f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Agedgrimoire", 2004633, 0, 5013068, 4, { -98.712219f, 0.013597f, -616.520081f }, 1.000000f, 0.663837f, 0); 
    instance.addEObj( "unknown_44", 2004636, 0, 5013069, 4, { -98.712173f, 0.080285f, -616.520081f }, 0.991760f, 0.663838f, 0); 
    instance.addEObj( "Steeldoor", 2002376, 0, 4305420, 4, { -427.737488f, -0.763297f, -273.818787f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_45", 2000608, 3969496, 4324085, 4, { -562.000000f, -3.216822f, -352.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_46", 2000608, 3969539, 4324086, 4, { -501.464111f, -2.873336f, -279.944611f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_47", 2000608, 3969541, 4324087, 4, { -459.065613f, -3.216822f, -221.368500f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Workshopexit", 2002502, 0, 4321649, 4, { 0.747620f, -156.908997f, 16.294350f }, 0.991760f, 0.000048f, 0); 

  }

  void onUpdate( QuestBattle& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( QuestBattle& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( EscapefromCastrumCentri );