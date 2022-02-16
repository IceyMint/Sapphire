#include <ScriptObject.h>
#include <Territory/QuestBattle.h>

using namespace Sapphire;

class DutyandtheBeast : public Sapphire::ScriptAPI::QuestBattleScript
{
private:
  static constexpr auto BNPC_P1_CURIOUS_01 = 5867394;
  static constexpr auto BNPC_P1_GENSYO_TAMASHII_01 = 5867395;
  static constexpr auto BNPC_P1_GENSYO_TAMASHII_02 = 5867397;
  static constexpr auto BNPC_P1_GENSYO_TAMASHII_03 = 5867398;
  static constexpr auto BNPC_P1_GENSYO_TAMASHII_04 = 5867399;
  static constexpr auto BNPC_P2_GENSYO_TAMASHII_01 = 5867425;
  static constexpr auto BNPC_P2_GENSYO_TAMASHII_02 = 5867426;
  static constexpr auto BNPC_P2_GENSYO_TAMASHII_03 = 5867427;
  static constexpr auto BNPC_P3_GENSYO_TAMASHII_01 = 5867431;
  static constexpr auto BNPC_P3_GENSYO_TAMASHII_02 = 5867432;
  static constexpr auto BNPC_P3_GENSYO_TAMASHII_03 = 5867433;
  static constexpr auto BNPC_P3_GENSYO_IKARI_CHASE_01 = 5867443;
  static constexpr auto BNPC_P3_GENSYO_IKARI_CHASE_02 = 5867442;
  static constexpr auto BNPC_P3_GENSYO_IKARI_CHASE_03 = 5867444;
  static constexpr auto ENPC_P1_BROKEN_01 = 5867445;
  static constexpr auto LOG_MESSAGE_01 = 3608;
  static constexpr auto BGM_BATTLE = 39;
  static constexpr auto LOC_ACTOR1 = 1014672;
  static constexpr auto LOC_ACTOR2 = 1014476;
  static constexpr auto LOC_ACTOR3 = 1014638;
  static constexpr auto LOC_POS1 = 5871798;
  static constexpr auto EVENT_BASE_KNEE_SUFFERING = 936;
  static constexpr auto ACTION_DEPOP_TRIGER = 3269;
  static constexpr auto LOC_ACTOR4 = 1014475;
  static constexpr auto LOC_POS2 = 5911679;
  static constexpr auto EVENT_BASE_GROUND_TIRED = 824;
  static constexpr auto STATUS_PARAM_KNOCK_DOWN = 1414;
  static constexpr auto LOGMESSAGE_RAGE_01 = 3297;

public:
  DutyandtheBeast() : Sapphire::ScriptAPI::QuestBattleScript( 102 )
  { }

  void onInit( QuestBattle& instance ) override
  {
    instance.addEObj( "unknown_0", 2000608, 2807920, 5960093, 4, { -95.322441f, -25.054260f, 61.518002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband", 2001223, 0, 4176142, 4, { 247.393997f, 1.848597f, 68.499847f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband_1", 2001223, 0, 4176146, 4, { 250.217896f, 3.351637f, 54.845421f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband_2", 2001223, 0, 4176148, 4, { 257.312592f, 3.702497f, 56.253521f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband_3", 2001223, 0, 4176149, 4, { 262.451599f, 3.404894f, 61.841331f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband_4", 2001223, 0, 4176151, 4, { 258.458313f, 5.260255f, 50.424801f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband_5", 2001223, 0, 4176156, 4, { 255.154907f, 2.655392f, 62.609890f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband_6", 2001223, 0, 4176157, 4, { 259.361603f, 2.269265f, 68.307510f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crateofcontraband_7", 2001223, 0, 4176158, 4, { 248.571106f, 2.397313f, 60.921829f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Bindings", 2004819, 0, 5041583, 4, { 324.176086f, -35.552940f, 317.132599f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Bindings_1", 2004820, 0, 5041584, 4, { 324.875702f, -35.145359f, 317.687805f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Bindings_2", 2004821, 0, 5041585, 4, { 323.933685f, -31.349070f, 265.400085f }, 0.991760f, -0.508570f, 0); 
    instance.addEObj( "Bindings_3", 2004822, 0, 5041586, 4, { 324.564209f, -31.179819f, 265.937988f }, 0.991760f, -0.508697f, 0); 
    instance.addEObj( "Bindings_4", 2004823, 0, 5041588, 4, { 328.982391f, -24.248791f, 254.082199f }, 0.991760f, 0.190475f, 0); 
    instance.addEObj( "Bindings_5", 2004824, 0, 5041589, 4, { 328.114594f, -24.399229f, 253.650604f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Campfire", 2002299, 0, 4295043, 4, { -307.759186f, -41.672421f, 695.368896f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_1", 2004812, 0, 5326559, 4, { 264.240509f, -25.009581f, 239.032593f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_2", 2000608, 2976565, 4324076, 4, { 670.002014f, 10.025080f, 503.036591f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination", 2004255, 0, 4745345, 4, { -822.655823f, -40.045521f, 666.555725f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_3", 2004256, 0, 4745346, 4, { -822.655823f, -41.704731f, 666.555725f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_4", 2004258, 0, 4745821, 4, { 293.015991f, -42.000000f, 371.894989f }, 1.400000f, 0.000000f, 0); 
    instance.addEObj( "unknown_5", 2004259, 0, 4745825, 4, { 303.010986f, -42.000000f, 374.035095f }, 1.400000f, 0.000000f, 0); 
    instance.addEObj( "unknown_6", 2004260, 0, 4745827, 4, { 298.967712f, -42.000000f, 385.056396f }, 1.400000f, -1.535207f, 0); 
    instance.addEObj( "Skiff", 2004278, 0, 4745868, 4, { 294.079498f, -41.162941f, 371.427002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Skiff_1", 2004279, 0, 4745873, 4, { 301.844391f, -41.295429f, 373.333313f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Skiff_2", 2004280, 0, 4745888, 4, { 298.317291f, -40.854519f, 383.380188f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_7", 2003709, 0, 4622546, 4, { 650.347229f, 9.882284f, 479.591888f }, 1.000000f, -0.602980f, 0); 
    instance.addEObj( "unknown_8", 2003710, 0, 4622548, 4, { 628.064575f, 9.716066f, 496.657806f }, 1.000000f, 1.380918f, 0); 
    instance.addEObj( "Crookedpickaxe", 2003711, 0, 4622550, 4, { 629.102478f, 9.738708f, 496.348114f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_9", 2004037, 0, 4676652, 4, { 629.102478f, 9.738700f, 496.348114f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_10", 2004038, 0, 4676653, 4, { 626.798706f, 9.612555f, 495.238312f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_11", 2003987, 0, 4635604, 4, { -39.700001f, -23.180000f, -88.650002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_1", 2003989, 0, 4635625, 4, { -364.980011f, -38.239040f, -242.800003f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Alestainedparchment", 2004024, 0, 4667185, 4, { -412.948914f, -39.038830f, -229.716705f }, 1.000000f, 1.490527f, 0); 
    instance.addEObj( "unknown_12", 2004031, 0, 4667237, 4, { -412.173004f, -39.839039f, -229.800003f }, 1.000000f, 1.505800f, 0); 
    instance.addEObj( "unknown_13", 2004028, 0, 4667233, 4, { -142.070099f, -32.795330f, -122.924896f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sahaginbattlestandard", 2003871, 0, 4632727, 4, { -126.913803f, -27.084339f, 29.821051f }, 1.174927f, -0.767817f, 0); 
    instance.addEObj( "Sahaginbattlestandard_1", 2003872, 0, 4632728, 4, { -22.339720f, -14.980390f, -101.488899f }, 1.174927f, -0.817576f, 0); 
    instance.addEObj( "Giantclam", 2003897, 0, 4634869, 4, { -117.712402f, -32.496120f, -116.404503f }, 0.991760f, 1.288832f, 0); 
    instance.addEObj( "Giantclam_1", 2003898, 0, 4634870, 4, { -106.992897f, -31.158911f, -94.659210f }, 0.991760f, -1.423591f, 0); 
    instance.addEObj( "Giantclam_2", 2003899, 0, 4634871, 4, { -69.507530f, -27.301680f, -132.156998f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Giantclam_3", 2003900, 0, 4634872, 4, { -89.257423f, -29.330151f, -145.642105f }, 0.991760f, 1.180902f, 0); 
    instance.addEObj( "Giantclam_4", 2003901, 0, 4634873, 4, { -59.572590f, -26.160860f, -164.014099f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Crabburrow", 2003840, 0, 4631940, 4, { -770.551575f, -38.207619f, 651.426208f }, 0.991760f, 0.600323f, 0); 
    instance.addEObj( "Crabburrow_1", 2003841, 0, 4631946, 4, { -765.207275f, -38.110771f, 658.112915f }, 0.991760f, -0.942310f, 0); 
    instance.addEObj( "Crabburrow_2", 2003842, 0, 4631947, 4, { -758.439392f, -38.049961f, 662.365173f }, 0.991760f, 0.826589f, 0); 
    instance.addEObj( "Crabburrow_3", 2003843, 0, 4631948, 4, { -757.143616f, -38.985359f, 676.787170f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Crabburrow_4", 2003844, 0, 4631949, 4, { -754.011719f, -38.542469f, 684.832581f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Whitecapclam", 2003853, 0, 4632185, 4, { -810.238770f, -41.743771f, 662.165222f }, 1.000000f, -1.441076f, 0); 
    instance.addEObj( "Whitecapclam_1", 2003854, 0, 4632186, 4, { -789.547607f, -41.342072f, 676.356079f }, 1.000000f, 1.428301f, 0); 
    instance.addEObj( "Whitecapclam_2", 2003855, 0, 4632187, 4, { -790.127380f, -41.775372f, 708.583130f }, 1.000000f, 0.793895f, 0); 
    instance.addEObj( "unknown_14", 2003850, 0, 4632191, 4, { -810.669006f, -41.595810f, 676.161499f }, 2.500000f, 0.689346f, 0); 
    instance.addEObj( "unknown_15", 2003851, 0, 4632192, 4, { -798.439270f, -41.444229f, 685.012085f }, 2.500000f, 0.116264f, 0); 
    instance.addEObj( "unknown_16", 2003852, 0, 4632193, 4, { -801.280518f, -41.820759f, 698.888611f }, 2.500000f, -1.286736f, 0); 
    instance.addEObj( "Whitecapclam_3", 2003845, 0, 4632307, 4, { -813.199097f, -41.750950f, 670.374512f }, 0.991760f, -1.514498f, 0); 
    instance.addEObj( "Whitecapclam_4", 2003846, 0, 4632318, 4, { -800.778198f, -41.651291f, 690.791016f }, 0.991760f, -1.555723f, 0); 
    instance.addEObj( "Whitecapclam_5", 2003847, 0, 4632319, 4, { -803.982605f, -41.201649f, 675.257385f }, 0.991760f, -0.631866f, 0); 
    instance.addEObj( "Whitecapclam_6", 2003848, 0, 4632320, 4, { -797.695923f, -41.696480f, 704.249512f }, 0.991760f, 0.655068f, 0); 
    instance.addEObj( "Cargocrate", 2004002, 0, 4664070, 4, { -887.794006f, -20.652769f, 886.502014f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Cargocrate_1", 2004003, 0, 4664071, 4, { -882.816772f, -20.647770f, 874.723694f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Cargocrate_2", 2004004, 0, 4664072, 4, { -830.124207f, -25.652691f, 897.510376f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Cargocrate_3", 2004005, 0, 4664073, 4, { -833.263611f, -25.680969f, 880.716125f }, 0.991760f, 0.130838f, 0); 
    instance.addEObj( "Cargocrate_4", 2004006, 0, 4664074, 4, { -845.790405f, -25.647760f, 887.602112f }, 1.000000f, 1.312060f, 0); 
    instance.addEObj( "unknown_17", 2004007, 0, 4664075, 4, { -887.794006f, -20.652800f, 886.502014f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_18", 2004008, 0, 4664076, 4, { -882.816772f, -20.647800f, 874.723694f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_19", 2004009, 0, 4664077, 4, { -830.124207f, -25.652719f, 897.510376f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_20", 2004010, 0, 4664078, 4, { -833.263611f, -25.680969f, 880.716125f }, 0.991760f, 0.130838f, 0); 
    instance.addEObj( "unknown_21", 2004011, 0, 4664079, 4, { -845.790405f, -25.647800f, 887.602112f }, 1.000000f, 1.312060f, 0); 
    instance.addEObj( "Destination_2", 2003764, 0, 4629238, 4, { -236.554001f, -40.998039f, -176.023300f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_3", 2003765, 0, 4629239, 4, { -223.633698f, -41.337940f, -185.451706f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_4", 2003766, 0, 4629240, 4, { -219.491806f, -41.878448f, -208.037994f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_5", 2003767, 0, 4629241, 4, { -212.741501f, -41.662251f, -198.069504f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_6", 2003768, 0, 4629242, 4, { -230.716095f, -41.750069f, -201.698105f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Stolenarmaments", 2003815, 0, 4630831, 4, { -142.447906f, -40.863979f, -249.154602f }, 0.991760f, 0.407661f, 0); 
    instance.addEObj( "Stolenarmaments_1", 2003816, 0, 4630834, 4, { -134.597107f, -40.614399f, -234.956894f }, 1.000000f, 0.515440f, 0); 
    instance.addEObj( "Stolenarmaments_2", 2003817, 0, 4630840, 4, { -153.487900f, -41.070499f, -228.725296f }, 0.991760f, -0.566732f, 0); 
    instance.addEObj( "Stolenarmaments_3", 2003818, 0, 4630841, 4, { -278.431396f, -43.198299f, -267.627991f }, 0.991760f, 0.076748f, 0); 
    instance.addEObj( "Noxiousbarnacle", 2003821, 0, 4631041, 4, { -243.396698f, -42.404850f, -215.045395f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Noxiousbarnacle_1", 2003822, 0, 4631048, 4, { -224.186401f, -41.954521f, -236.341599f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Noxiousbarnacle_2", 2003823, 0, 4631054, 4, { -191.058594f, -41.476250f, -240.850906f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Noxiousbarnacle_3", 2003824, 0, 4631056, 4, { -179.861801f, -40.774448f, -216.160599f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Noxiousbarnacle_4", 2003825, 0, 4631057, 4, { -212.958298f, -41.803040f, -218.686600f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_22", 2004029, 0, 4667235, 4, { -199.192001f, -42.000031f, -277.298309f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Paralysispot", 2003828, 0, 4630936, 4, { -159.531097f, -41.392502f, -269.690002f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Paralysispot_1", 2003829, 0, 4630937, 4, { -218.480392f, -39.386490f, -332.295410f }, 1.000000f, 0.852022f, 0); 
    instance.addEObj( "Paralysispot_2", 2003830, 0, 4630938, 4, { -270.124512f, -43.246170f, -260.348907f }, 0.991760f, -1.163110f, 0); 
    instance.addEObj( "Paralysispot_3", 2003831, 0, 4630939, 4, { -192.826996f, -40.730042f, -211.518494f }, 1.000000f, 0.754514f, 0); 
    instance.addEObj( "unknown_23", 2004043, 0, 4680950, 4, { -807.583679f, -40.726379f, 649.774780f }, 0.991760f, 0.502818f, 0); 
    instance.addEObj( "unknown_24", 2004044, 0, 4680951, 4, { -803.067078f, -40.726379f, 649.378113f }, 0.991760f, -0.938667f, 0); 
    instance.addEObj( "unknown_25", 2004045, 0, 4680952, 4, { -800.953186f, -40.502930f, 651.721130f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_26", 2004046, 0, 4680953, 4, { -766.448486f, -37.924870f, 700.274170f }, 1.000000f, 0.118492f, 0); 
    instance.addEObj( "unknown_27", 2004047, 0, 4680954, 4, { -768.738403f, -37.927090f, 704.796570f }, 1.000000f, 0.193357f, 0); 
    instance.addEObj( "unknown_28", 2004048, 0, 4680955, 4, { -770.958679f, -38.241230f, 706.519470f }, 0.991760f, -0.514179f, 0); 
    instance.addEObj( "Pillagedgoods", 2003856, 0, 4632498, 4, { -360.025208f, -35.504021f, -399.101501f }, 1.000000f, -1.499913f, 0); 
    instance.addEObj( "Pillagedgoods_1", 2003857, 0, 4632499, 4, { -364.461792f, -35.263611f, -437.268005f }, 0.991760f, 0.302918f, 0); 
    instance.addEObj( "Pillagedgoods_2", 2003858, 0, 4632500, 4, { -367.693298f, -38.619400f, -388.609100f }, 1.000000f, -0.927391f, 0); 
    instance.addEObj( "Pillagedgoods_3", 2003859, 0, 4632501, 4, { -350.575989f, -35.202579f, -413.321198f }, 0.991760f, 0.251337f, 0); 
    instance.addEObj( "unknown_29", 2003881, 0, 4633479, 4, { -370.357697f, -42.000000f, -380.084290f }, 1.500000f, 1.562938f, 0); 
    instance.addEObj( "unknown_30", 2003958, 0, 4635201, 4, { -500.085693f, -32.058601f, -352.021698f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_31", 2003959, 0, 4635202, 4, { -510.758392f, -32.144100f, -353.908508f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_32", 2003960, 0, 4635203, 4, { -515.955322f, -31.779800f, -366.310303f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_33", 2003961, 0, 4635204, 4, { -514.180420f, -30.972200f, -380.404510f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_34", 2003962, 0, 4635205, 4, { -503.719604f, -30.753700f, -387.208191f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough", 2003833, 0, 4678073, 4, { -500.223389f, -31.211691f, -351.957794f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough_1", 2003834, 0, 4678074, 4, { -511.021790f, -31.335461f, -354.038086f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough_2", 2003835, 0, 4678075, 4, { -516.166992f, -31.174259f, -366.384399f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Brothtrough_3", 2003836, 0, 4678076, 4, { -514.396912f, -30.197689f, -380.514313f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Brothtrough_4", 2003837, 0, 4678077, 4, { -503.851196f, -29.891190f, -387.303314f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough_5", 2003864, 0, 4678133, 4, { -500.223389f, -31.211700f, -351.957794f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough_6", 2003865, 0, 4678134, 4, { -511.021790f, -31.335501f, -354.038086f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough_7", 2003866, 0, 4678135, 4, { -516.165771f, -31.166401f, -366.355011f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough_8", 2003867, 0, 4678136, 4, { -514.374023f, -30.188900f, -380.495087f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Brothtrough_9", 2003868, 0, 4678137, 4, { -503.851196f, -29.891199f, -387.303314f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Plunderedcargo", 2004016, 0, 4665693, 4, { -939.114807f, -31.760000f, 846.043823f }, 1.000000f, 1.452762f, 0); 
    instance.addEObj( "Plunderedcargo_1", 2004017, 0, 4665694, 4, { -931.591980f, -30.260000f, 829.366882f }, 1.000000f, -0.652909f, 0); 
    instance.addEObj( "Plunderedcargo_2", 2004018, 0, 4665695, 4, { -917.561523f, -31.749950f, 823.157471f }, 1.000000f, 1.052365f, 0); 
    instance.addEObj( "Plunderedcargo_3", 2004019, 0, 4665696, 4, { -929.004089f, -29.750090f, 842.867188f }, 1.000000f, 0.426993f, 0); 
    instance.addEObj( "unknown_35", 2004030, 0, 4667236, 4, { -383.505005f, -38.933071f, -232.745804f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_36", 2004322, 0, 4771342, 4, { 312.214813f, -36.423279f, 343.953613f }, 0.991760f, 0.498599f, 0); 
    instance.addEObj( "unknown_37", 2004323, 0, 4771343, 4, { 312.235687f, -36.405899f, 343.963196f }, 1.000000f, 0.498543f, 0); 
    instance.addEObj( "Mandragorabud", 2004324, 0, 4771381, 4, { -282.978607f, -40.618679f, 425.597290f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Mandragorabud_1", 2004325, 0, 4771382, 4, { -242.580002f, -38.666321f, 514.760010f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Mandragorabud_2", 2004326, 0, 4771383, 4, { -291.058990f, -38.043251f, 596.766479f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_7", 2002009, 0, 4265079, 4, { 173.845901f, -41.364090f, 280.723297f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_8", 2001896, 0, 4261312, 4, { 177.141998f, -42.008121f, 284.059387f }, 1.200000f, -1.569883f, 0); 
    instance.addEObj( "Destination_9", 2000288, 0, 3633634, 4, { 99.231392f, -14.297410f, 141.886200f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sighardswaterskin", 2000289, 0, 3633699, 4, { 348.349091f, -18.596300f, 168.406799f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "Sighardssatchel", 2000290, 0, 3633701, 4, { 297.408508f, -14.290290f, 148.854706f }, 1.200000f, 1.192938f, 0); 
    instance.addEObj( "Sighardshatchet", 2000294, 0, 3633777, 4, { 297.994110f, 0.894550f, 85.277359f }, 1.400000f, -0.381262f, 0); 
    instance.addEObj( "unknown_38", 2001732, 0, 4161486, 4, { 299.244598f, 0.717163f, 86.076050f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_39", 2004907, 0, 5110333, 4, { 319.474792f, -36.353802f, 346.762512f }, 0.700000f, 0.000000f, 0); 
    instance.addEObj( "unknown_40", 2004908, 0, 5110334, 4, { 594.187683f, 43.894299f, 303.791687f }, 0.500000f, 0.000000f, 0); 
    instance.addEObj( "Entrance", 2002696, 0, 4374460, 4, { 334.029785f, 10.376880f, 7.579656f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance_1", 2003135, 0, 4526234, 4, { -264.111206f, -39.994621f, 461.731598f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Exit", 2004015, 0, 4665790, 4, { -924.402100f, -33.416851f, 842.333374f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Exit_1", 2004012, 0, 4665791, 4, { -847.499817f, -29.316059f, 887.075684f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Exit_2", 2004013, 0, 4665798, 4, { -883.347107f, -29.227520f, 929.256226f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Exit_3", 2004014, 0, 4665811, 4, { -826.810120f, -29.343140f, 971.465576f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Winetun", 2002187, 0, 4300167, 4, { -502.711090f, -35.694180f, 728.267273f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_41", 2002631, 0, 4334599, 4, { -502.739899f, -36.750481f, 728.272278f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Spicebox", 2002188, 0, 4300175, 4, { -218.682098f, -42.000000f, 747.663879f }, 1.000000f, 0.122269f, 0); 
    instance.addEObj( "Campfire_1", 2002189, 0, 4300218, 4, { -307.759186f, -41.667500f, 695.422424f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_42", 2002328, 0, 4300228, 4, { -307.774200f, -41.565071f, 695.573730f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Supplybox", 2002452, 0, 4308994, 4, { 298.204895f, -36.405910f, 342.033997f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Specifiedlocation", 2002453, 0, 4308995, 4, { 322.709198f, -40.424999f, 368.734314f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_43", 2002666, 0, 4335358, 4, { 296.989990f, -35.540390f, 344.700500f }, 1.000000f, 0.332789f, 0); 
    instance.addEObj( "unknown_44", 2002667, 0, 4335359, 4, { 297.015411f, -36.405910f, 344.061401f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_45", 2002668, 0, 4335360, 4, { 297.013702f, -36.405918f, 345.330994f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_46", 2002669, 0, 4335367, 4, { 322.719788f, -40.424999f, 368.742004f }, 1.000000f, 1.555236f, 0); 
    instance.addEObj( "unknown_47", 2002670, 0, 4335369, 4, { 322.652008f, -40.451721f, 370.168610f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_48", 2002671, 0, 4335370, 4, { 322.590912f, -40.451721f, 371.575012f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Specifiedlocation_1", 2002672, 0, 4335437, 4, { 322.652008f, -40.424999f, 370.168610f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Specifiedlocation_2", 2002673, 0, 4335438, 4, { 322.594696f, -40.424999f, 371.579315f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Forgottencrate", 2002454, 0, 4308996, 4, { 334.120209f, -21.298759f, 183.023193f }, 0.991760f, 0.474938f, 0); 
    instance.addEObj( "unknown_49", 2002577, 0, 4330212, 4, { 328.578705f, -42.000000f, 378.197510f }, 1.000000f, -0.050412f, 0); 
    instance.addEObj( "unknown_50", 2002632, 0, 4334603, 4, { 334.112091f, -22.103689f, 183.045197f }, 1.000000f, 0.474890f, 0); 
    instance.addEObj( "unknown_51", 2002458, 0, 4309341, 4, { -415.441803f, -28.387011f, -237.211304f }, 1.200000f, 0.000000f, 0); 
    instance.addEObj( "Boxofcrystals", 2002455, 0, 4309069, 4, { -440.736511f, -40.487289f, -225.119095f }, 0.991760f, -1.439159f, 0); 
    instance.addEObj( "Boxofcrystals_1", 2002456, 0, 4309070, 4, { -417.608398f, -28.387020f, -251.586899f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Boxofcrystals_2", 2002457, 0, 4309071, 4, { -402.971405f, -38.115681f, -248.830093f }, 0.991760f, 0.616978f, 0); 
    instance.addEObj( "Sahaginpavis", 2003588, 0, 4628542, 4, { -47.623470f, -22.873289f, -152.788605f }, 1.500000f, -0.920355f, 0); 
    instance.addEObj( "Sahaginpavis_1", 2003586, 0, 4628545, 4, { -110.644798f, -31.157560f, -158.773102f }, 1.500000f, -1.159159f, 0); 
    instance.addEObj( "Sahaginpavis_2", 2003589, 0, 4628546, 4, { -55.355042f, -24.024590f, -102.190598f }, 1.500000f, -1.390167f, 0); 
    instance.addEObj( "Sahaginpavis_3", 2003587, 0, 4628548, 4, { -107.255203f, -31.396990f, -105.173897f }, 1.500000f, -1.167272f, 0); 
    instance.addEObj( "Sahaginpavis_4", 2003585, 0, 4628541, 4, { -34.901489f, -19.738871f, -129.025604f }, 1.500000f, -0.330329f, 0); 
    instance.addEObj( "unknown_52", 2003590, 0, 4628584, 4, { -450.852692f, -41.901871f, -238.766907f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_53", 2003591, 0, 4628661, 4, { -235.494400f, -41.748150f, -234.433807f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_54", 2003592, 0, 4628662, 4, { -204.722702f, -42.000000f, -248.499298f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_55", 2003593, 0, 4628663, 4, { -241.786301f, -42.000000f, -305.296112f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_56", 2003594, 0, 4628664, 4, { -193.872604f, -41.340500f, -319.893890f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_57", 2003595, 0, 4628665, 4, { -296.540710f, -41.705700f, -329.438812f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Frayedsack", 2002527, 0, 4323799, 4, { -168.285004f, -21.496731f, 44.156269f }, 1.000000f, -0.192529f, 0); 
    instance.addEObj( "Bandedchest", 2003951, 0, 4984185, 4, { -433.555695f, -31.493231f, -307.160706f }, 1.000000f, -0.921803f, 0); 
    instance.addEObj( "Destination_10", 2004931, 0, 5327290, 4, { 305.592407f, -25.009581f, 229.663498f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Treasurecoffer", 2002499, 0, 4321456, 4, { -319.167114f, -36.627239f, -278.727112f }, 1.000000f, 0.300102f, 0); 
    instance.addEObj( "unknown_58", 2005579, 0, 5873475, 4, { -118.859200f, -25.499701f, 42.380100f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Epitaphtophilosophy", 2002396, 0, 4306685, 4, { -347.335388f, -36.226681f, -249.624802f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_59", 2001739, 0, 4165533, 4, { 668.024719f, 7.278503f, 533.226318f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_60", 2004104, 0, 4696188, 4, { 249.256104f, -11.947810f, 98.893677f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_61", 2004683, 0, 5020445, 4, { 604.769775f, 29.781750f, 359.817200f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_11", 2001260, 0, 3929792, 4, { 602.502380f, 28.976830f, 361.043610f }, 0.991789f, 0.000048f, 0); 
    instance.addEObj( "Ironbrazier", 2001261, 0, 3929797, 4, { 602.520630f, 28.997000f, 361.066193f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Hidingspot", 2001262, 0, 3927427, 4, { 681.059021f, 41.435871f, 356.400085f }, 1.000000f, 0.802198f, 0); 
    instance.addEObj( "Hidingspot_1", 2001263, 0, 3927428, 4, { 680.959473f, 41.333691f, 362.448608f }, 1.000000f, 0.748521f, 0); 
    instance.addEObj( "Hidingspot_2", 2001263, 0, 3951412, 4, { 688.417419f, 41.599110f, 356.558105f }, 1.000000f, -0.889580f, 0); 
    instance.addEObj( "Dodoegg", 2001265, 0, 3929425, 4, { 529.932312f, 27.314671f, 321.116608f }, 0.750000f, 0.000000f, 0); 
    instance.addEObj( "Dodoegg_1", 2001266, 0, 3929427, 4, { 634.393677f, 43.101261f, 321.980591f }, 0.747620f, 0.000048f, 0); 
    instance.addEObj( "Dodoegg_2", 2001267, 0, 3929430, 4, { 591.015625f, 23.722040f, 370.845001f }, 0.750000f, 0.285160f, 0); 
    instance.addEObj( "Dodoegg_3", 2001268, 0, 3929434, 4, { 631.616577f, 25.336201f, 390.371490f }, 0.750000f, 1.457558f, 0); 
    instance.addEObj( "unknown_62", 2002862, 0, 4497133, 4, { 220.686600f, -36.406250f, 323.815399f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_63", 2002863, 0, 4497136, 4, { 210.477005f, -16.905680f, 115.508301f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Dodonest", 2002532, 0, 4326215, 4, { 52.323120f, -13.636880f, 41.184078f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_12", 2002554, 0, 4328185, 4, { 83.821243f, -1.182936f, -58.584641f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sucklingbabe", 2005001, 0, 5395041, 4, { 312.031708f, -35.150341f, 323.875000f }, 0.289917f, 0.000048f, 0); 

  }

  void onUpdate( QuestBattle& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( QuestBattle& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( DutyandtheBeast );