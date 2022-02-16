#include <ScriptObject.h>
#include <Territory/QuestBattle.h>

using namespace Sapphire;

class AusteritiesofWind : public Sapphire::ScriptAPI::QuestBattleScript
{
private:
  static constexpr auto INIT_P_POP_MITRA_01 = 4302425;
  static constexpr auto INIT_POP_1_BOSS_GARUDA_EGI_01 = 4302448;
  static constexpr auto INIT_POP_2_GARUDA_FZR_POP_02 = 4302452;
  static constexpr auto INIT_POP_2_GARUDA_FZR_POP_03 = 4302454;
  static constexpr auto INIT_POP_2_GARUDA_FZR_POP_04 = 4302455;
  static constexpr auto INIT_POP_1_BOSS_GARUDA_EGI_CHILD_A = 4321859;
  static constexpr auto INIT_POP_1_BOSS_GARUDA_EGI_CHILD_B = 4321860;
  static constexpr auto CUT_START_NCUT = 354;
  static constexpr auto DEF_ACTION_GARUDA_AIRIAL_SLASH = 794;
  static constexpr auto JOB_STORY_MES = 3675;

public:
  AusteritiesofWind() : Sapphire::ScriptAPI::QuestBattleScript( 81 )
  { }

  void onInit( QuestBattle& instance ) override
  {
    instance.addEObj( "unknown_0", 2000200, 2489513, 2814946, 4, { 111.832100f, 24.171450f, -613.209473f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_1", 2000201, 2489537, 2814950, 4, { 47.863529f, 24.380640f, -739.987976f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_2", 2000202, 2489511, 2814954, 4, { 127.017097f, 24.144819f, -719.131226f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_3", 2000203, 2489539, 2814961, 4, { 176.514206f, 24.118999f, -640.707825f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_4", 2000204, 0, 2814967, 4, { 223.131302f, 22.248779f, -596.149780f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Maelstrompavilion", 2004257, 0, 4768311, 4, { -113.594498f, 67.402763f, -240.718903f }, 0.991760f, -0.463341f, 0); 
    instance.addEObj( "unknown_5", 2003712, 0, 4622670, 4, { 16.288340f, 16.214291f, -196.113007f }, 1.300000f, -0.662930f, 0); 
    instance.addEObj( "Chunkofworthlessore", 2003713, 0, 4622671, 4, { 181.490402f, 64.607162f, -282.400696f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Chunkofworthlessore_1", 2003714, 0, 4622672, 4, { 197.014893f, 64.058884f, -225.597000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Chunkofworthlessore_2", 2003715, 0, 4622673, 4, { 154.497604f, 69.067200f, -254.291702f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Chunkofworthlessore_3", 2003716, 0, 4622674, 4, { 180.309601f, 64.624947f, -255.153900f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination", 2003717, 0, 4622675, 4, { 0.392186f, 16.459410f, -177.459305f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Prototypefurnace", 2003720, 2800112, 4627256, 4, { 224.798203f, 23.947399f, -580.943604f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_1", 2003719, 0, 4627261, 4, { 182.595596f, 24.735649f, -622.320679f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_6", 2004040, 0, 4676662, 4, { -92.160873f, 64.445030f, -251.523499f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_7", 2004040, 0, 4676663, 4, { -69.574387f, 64.656731f, -250.979004f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_8", 2004041, 0, 4676664, 4, { -91.496719f, 64.442841f, -241.866592f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_9", 2004039, 0, 4676665, 4, { -92.240784f, 64.133667f, -251.667099f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_10", 2004039, 0, 4676666, 4, { -92.038162f, 64.279160f, -241.824799f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_11", 2004039, 0, 4676669, 4, { -69.637207f, 64.719147f, -251.375198f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_12", 2004039, 0, 4676670, 4, { -83.360107f, 66.178337f, -248.401703f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_13", 2003721, 0, 4627271, 4, { 217.956894f, 59.975410f, -233.423492f }, 1.736969f, 0.000000f, 0); 
    instance.addEObj( "Furnaceplans", 2003722, 0, 4627272, 4, { 189.552704f, 64.273323f, -287.585297f }, 1.000000f, -1.060028f, 0); 
    instance.addEObj( "Primelocation", 2003723, 0, 4627319, 4, { 87.108398f, 22.022860f, -635.535217f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Primelocation_1", 2003724, 0, 4627321, 4, { 96.127403f, 21.914360f, -644.935608f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Primelocation_2", 2003725, 0, 4627323, 4, { 92.966003f, 25.842461f, -655.059814f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Primelocation_3", 2003726, 0, 4627339, 4, { 163.537796f, 25.925461f, -688.355713f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Primelocation_4", 2003727, 0, 4627340, 4, { 157.712494f, 22.129110f, -713.253296f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Primelocation_5", 2003728, 0, 4627342, 4, { 167.674194f, 21.954830f, -707.510620f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_14", 2003988, 0, 4635615, 4, { 87.095413f, 22.015221f, -635.553528f }, 0.991760f, -0.752860f, 0); 
    instance.addEObj( "unknown_15", 2003988, 0, 4635616, 4, { 96.127403f, 21.914330f, -644.935608f }, 1.000000f, 1.022267f, 0); 
    instance.addEObj( "unknown_16", 2003988, 0, 4635617, 4, { 92.965981f, 25.842449f, -655.059814f }, 1.000000f, 0.551679f, 0); 
    instance.addEObj( "unknown_17", 2003990, 0, 4635634, 4, { 163.537796f, 25.925461f, -688.355713f }, 1.000000f, -0.189227f, 0); 
    instance.addEObj( "unknown_18", 2003990, 0, 4635635, 4, { 157.712494f, 22.129110f, -713.253296f }, 1.000000f, 1.160838f, 0); 
    instance.addEObj( "unknown_19", 2003990, 0, 4635636, 4, { 167.674194f, 21.954830f, -707.510620f }, 1.000000f, 0.845668f, 0); 
    instance.addEObj( "Worthlessore", 2003769, 0, 4629326, 4, { -18.530001f, 48.450390f, -294.213989f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Worthlessore_1", 2003770, 0, 4629327, 4, { -5.971188f, 48.417622f, -322.240906f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Worthlessore_2", 2003771, 0, 4629328, 4, { 68.039917f, 48.355709f, -370.687408f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Worthlessore_3", 2003772, 0, 4629329, 4, { 38.311272f, 48.324329f, -397.077606f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Worthlessore_4", 2003773, 0, 4629330, 4, { 79.187187f, 57.522221f, -305.730713f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Lavishlunchpot", 2003774, 0, 4629557, 4, { 10.269290f, 49.820679f, -375.539795f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Lavishlunchpot_1", 2003775, 0, 4629558, 4, { 83.331993f, 49.058861f, -407.388794f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Lavishlunchpot_2", 2004020, 0, 4666857, 4, { 51.107780f, 48.309132f, -349.494812f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Lavishlunchpot_3", 2004021, 0, 4666858, 4, { 68.650002f, 49.791611f, -413.059998f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Lavishlunchpot_4", 2004022, 0, 4667121, 4, { 39.149200f, 48.311630f, -342.334198f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Lavishlunchpot_5", 2004023, 0, 4667122, 4, { 58.116009f, 67.026161f, -253.154297f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_20", 2003558, 0, 4619031, 4, { -26.840639f, 63.950562f, -241.809799f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_21", 2003559, 0, 4619032, 4, { 16.983280f, 71.183228f, -197.039795f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_22", 2003560, 0, 4619033, 4, { 60.696770f, 65.964828f, -232.274796f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_23", 2004033, 0, 4672685, 4, { 38.404701f, 69.332520f, -201.715103f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_24", 2004034, 0, 4672686, 4, { 41.252911f, 68.280510f, -215.786606f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_25", 2004035, 0, 4672690, 4, { -8.500248f, 67.861511f, -199.263794f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_26", 2004036, 0, 4672692, 4, { -33.111038f, 64.357941f, -205.636093f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "596thOrdersupplies", 2003784, 0, 4630945, 4, { -57.890499f, 64.762398f, -301.658691f }, 1.000000f, -0.330438f, 0); 
    instance.addEObj( "596thOrdersupplies_1", 2003785, 0, 4630947, 4, { -53.308041f, 64.489647f, -302.517212f }, 1.000000f, 0.484039f, 0); 
    instance.addEObj( "596thOrdersupplies_2", 2003786, 0, 4630948, 4, { -63.433620f, 64.865128f, -298.597992f }, 1.000000f, -0.865142f, 0); 
    instance.addEObj( "Safelocation", 2003793, 0, 4630954, 4, { -54.398441f, 64.499878f, -288.807495f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_27", 2003790, 0, 4630970, 4, { -57.908081f, 64.744019f, -301.686188f }, 0.991760f, -0.330434f, 0); 
    instance.addEObj( "unknown_28", 2003791, 0, 4630982, 4, { -53.330318f, 64.469360f, -302.540588f }, 0.991760f, 0.484122f, 0); 
    instance.addEObj( "unknown_29", 2003792, 0, 4630984, 4, { -63.433601f, 64.865097f, -298.597992f }, 1.000000f, -0.865142f, 0); 
    instance.addEObj( "unknown_30", 2003787, 0, 4630993, 4, { -57.890499f, 64.762398f, -301.658691f }, 1.000000f, -0.330438f, 0); 
    instance.addEObj( "unknown_31", 2003788, 0, 4630994, 4, { -53.307999f, 64.489700f, -302.517212f }, 1.000000f, 0.484039f, 0); 
    instance.addEObj( "unknown_32", 2003789, 0, 4630997, 4, { -63.433601f, 64.865097f, -298.597992f }, 1.000000f, -0.865142f, 0); 
    instance.addEObj( "Embers", 2003794, 0, 4631004, 4, { -62.119011f, 64.925049f, -302.424713f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_1", 2003795, 0, 4631005, 4, { -55.353619f, 64.478394f, -304.151093f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_2", 2003796, 0, 4631039, 4, { -57.373402f, 64.459908f, -307.670502f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_3", 2003797, 0, 4631043, 4, { -49.884769f, 64.493851f, -303.558685f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_4", 2003798, 0, 4631047, 4, { -66.775337f, 64.903130f, -304.667114f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_5", 2003799, 0, 4631050, 4, { -67.771118f, 64.440163f, -300.261505f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "639thOrderdigger", 2003802, 0, 4632314, 4, { 177.348602f, 64.461601f, -273.479889f }, 1.000000f, 0.433676f, 0); 
    instance.addEObj( "unknown_33", 2003803, 0, 4632315, 4, { 177.348602f, 64.461632f, -273.479889f }, 1.000000f, 0.433676f, 0); 
    instance.addEObj( "unknown_34", 2003804, 0, 4632316, 4, { 177.325104f, 64.438843f, -273.487488f }, 0.991760f, 0.433692f, 0); 
    instance.addEObj( "639thOrderdigger_1", 2003805, 0, 4632344, 4, { 176.133606f, 64.560417f, -273.387390f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "639thOrderdigger_2", 2003806, 0, 4632346, 4, { 178.466095f, 64.643242f, -271.215790f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "639thOrderdigger_3", 2003807, 0, 4632347, 4, { 180.396896f, 64.446709f, -268.157013f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Safelocation_1", 2003808, 0, 4632356, 4, { 169.415207f, 65.522247f, -263.692902f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "639thOrderpot", 2003553, 0, 4618975, 4, { 181.371994f, 64.742691f, -251.029404f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "639thOrderpot_1", 2003554, 0, 4618976, 4, { 181.177597f, 64.646927f, -242.389603f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "639thOrderpot_2", 2003555, 0, 4618977, 4, { 189.007904f, 64.709717f, -234.521500f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "639thOrderpot_3", 2003556, 0, 4618978, 4, { 206.763794f, 64.584084f, -251.769699f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "639thOrderpot_4", 2003557, 0, 4618979, 4, { 194.110001f, 64.805054f, -262.348389f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "411thOrderfurnace", 2003950, 0, 4635134, 4, { 50.000099f, 49.345901f, -342.665405f }, 1.000000f, 0.212422f, 0); 
    instance.addEObj( "411thOrderfurnace_1", 2003952, 0, 4635136, 4, { 50.899799f, 48.554199f, -339.520996f }, 1.000000f, 0.322183f, 0); 
    instance.addEObj( "Embers_6", 2003953, 0, 4635137, 4, { 46.463619f, 48.519791f, -341.272614f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_7", 2003954, 0, 4635138, 4, { 48.104389f, 48.617050f, -346.182495f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_8", 2003955, 0, 4635140, 4, { 51.847160f, 48.389000f, -348.562500f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_9", 2003956, 0, 4635141, 4, { 55.527592f, 48.741100f, -349.579102f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_10", 2003957, 0, 4635142, 4, { 54.239910f, 48.482361f, -343.258698f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_2", 2003779, 0, 4630251, 4, { 70.054077f, 55.512180f, -512.870972f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_3", 2003780, 0, 4630252, 4, { 74.680000f, 55.499378f, -484.529999f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_4", 2003781, 0, 4630253, 4, { 78.449997f, 55.627201f, -470.049988f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_5", 2003782, 0, 4630254, 4, { 65.354370f, 55.627201f, -450.766815f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_6", 2003783, 0, 4630255, 4, { 47.980000f, 55.587791f, -451.649994f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_35", 2004025, 0, 4667230, 4, { 77.134277f, 55.610081f, -480.582886f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_36", 2003680, 0, 4621972, 4, { 61.060398f, 47.879299f, -392.629700f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_37", 2003681, 0, 4621973, 4, { 57.621151f, 47.956680f, -388.337402f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_38", 2003682, 0, 4621974, 4, { 68.031769f, 47.898071f, -389.930298f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_39", 2003683, 0, 4621975, 4, { 58.258289f, 48.227051f, -377.944000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_40", 2003684, 0, 4621976, 4, { 64.740768f, 48.559830f, -382.346497f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Steelbrazier", 2003685, 0, 4621977, 4, { 61.061211f, 48.175789f, -392.596313f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Steelbrazier_1", 2003686, 0, 4621981, 4, { 57.621151f, 48.136581f, -388.287292f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Steelbrazier_2", 2003687, 0, 4621982, 4, { 68.031769f, 48.020020f, -389.930298f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Steelbrazier_3", 2003688, 0, 4621986, 4, { 58.258289f, 48.422272f, -377.944000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Steelbrazier_4", 2003689, 0, 4621987, 4, { 64.728798f, 48.734600f, -382.372314f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Pressurevalve", 2003743, 0, 4627465, 4, { 227.035599f, 22.769661f, -582.811890f }, 0.991760f, -0.955056f, 0); 
    instance.addEObj( "Pressurelid", 2003744, 2800112, 4627479, 4, { 224.798203f, 23.947399f, -580.943604f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_11", 2003745, 0, 4627480, 4, { 242.904907f, 22.530399f, -584.367126f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_12", 2003746, 0, 4627481, 4, { 239.326904f, 22.350241f, -577.270020f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_13", 2003747, 0, 4627482, 4, { 234.239502f, 22.064501f, -585.576172f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_14", 2003748, 0, 4627483, 4, { 214.791504f, 22.987720f, -590.935486f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_15", 2003749, 0, 4627484, 4, { 215.878693f, 22.420490f, -577.580200f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_16", 2003750, 0, 4627485, 4, { 206.656998f, 26.873341f, -588.792175f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_17", 2003751, 0, 4627486, 4, { 209.012894f, 26.187309f, -598.494507f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Swaystone", 2003647, 0, 4621094, 4, { 223.450699f, 21.496040f, -612.302979f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_41", 2003648, 0, 4621096, 4, { 231.830307f, 25.445280f, -625.231812f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_42", 2003649, 0, 4621097, 4, { 241.833801f, 26.391050f, -609.922119f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_43", 2003650, 0, 4621098, 4, { 230.540405f, 21.389219f, -600.694824f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_44", 2003651, 0, 4621099, 4, { 216.632202f, 21.423710f, -603.830383f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_45", 2003652, 0, 4621100, 4, { 205.677704f, 25.748400f, -610.034973f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_46", 2003653, 0, 4621101, 4, { 214.320404f, 22.050940f, -620.482910f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Swaystone_1", 2003672, 0, 4621628, 4, { 223.450699f, 21.496059f, -612.302979f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Alchemywain", 2003882, 0, 4634816, 4, { 167.602295f, 21.488340f, -566.717712f }, 0.991760f, -1.491548f, 0); 
    instance.addEObj( "unknown_47", 2003883, 0, 4634817, 4, { 167.602295f, 21.488380f, -566.717712f }, 0.991760f, -1.491547f, 0); 
    instance.addEObj( "unknown_48", 2003884, 0, 4634818, 4, { 168.426498f, 21.450220f, -566.491211f }, 0.991760f, -1.397526f, 0); 
    instance.addEObj( "Alchemywain_1", 2003885, 0, 4634819, 4, { 167.707199f, 21.466600f, -564.650024f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Alchemywain_2", 2003886, 0, 4634820, 4, { 170.832993f, 21.507950f, -565.162598f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Alchemywain_3", 2003887, 0, 4634821, 4, { 174.066498f, 21.446510f, -565.281372f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Safelocation_2", 2003888, 0, 4634822, 4, { 172.777802f, 21.377871f, -549.034912f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_18", 2003889, 0, 4634823, 4, { 179.893906f, 21.540150f, -572.844299f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_19", 2003890, 0, 4634824, 4, { 174.938004f, 21.598591f, -576.406128f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_20", 2003891, 0, 4634825, 4, { 165.542007f, 21.662790f, -575.320923f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_21", 2003892, 0, 4634826, 4, { 163.096207f, 21.502060f, -571.191223f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_22", 2003893, 0, 4634827, 4, { 170.123901f, 21.421520f, -573.279602f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "13thOrdersilverpot", 2003729, 0, 4627326, 4, { 142.638107f, 23.940170f, -536.141724f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "13thOrdersilverpot_1", 2003730, 0, 4627327, 4, { 157.057800f, 27.109980f, -583.670471f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "13thOrdersilverpot_2", 2003731, 0, 4627330, 4, { 183.556198f, 27.780560f, -585.020081f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "13thOrdersilverpot_3", 2003732, 0, 4627335, 4, { 184.146606f, 27.648861f, -534.164612f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "13thOrdersilverpot_4", 2003733, 0, 4627337, 4, { 217.509293f, 27.680401f, -534.619202f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "88thOrderfurnace", 2003963, 0, 4635323, 4, { 91.224312f, 55.767189f, -483.271912f }, 1.000000f, 1.135230f, 0); 
    instance.addEObj( "88thOrderfurnace_1", 2003965, 0, 4635325, 4, { 94.804321f, 57.328129f, -485.160614f }, 0.991760f, 1.455722f, 0); 
    instance.addEObj( "unknown_49", 2004026, 0, 4667231, 4, { 144.701202f, 24.274111f, -753.872009f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Deepshadow", 2003697, 0, 4622422, 4, { 41.243629f, 26.183571f, -801.453979f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Deepshadow_1", 2003698, 0, 4622424, 4, { 48.160740f, 25.557060f, -795.374573f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Deepshadow_2", 2003699, 0, 4622425, 4, { 7.964616f, 21.714451f, -769.050720f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Deepshadow_3", 2003700, 0, 4622427, 4, { 30.138821f, 26.339861f, -751.818176f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Deepshadow_4", 2003701, 0, 4622428, 4, { 5.157166f, 23.759621f, -803.919312f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Deepshadow_5", 2003702, 0, 4622430, 4, { 0.477117f, 24.574310f, -795.717224f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crystallinesaltpeter", 2003752, 0, 4628466, 4, { -2.191973f, 24.279270f, -722.291199f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crystallinesaltpeter_1", 2003753, 0, 4628467, 4, { 18.875771f, 25.566860f, -594.086975f }, 0.991760f, 0.249358f, 0); 
    instance.addEObj( "Crystallinesaltpeter_2", 2003754, 0, 4628471, 4, { 86.593483f, 24.238760f, -822.144897f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Crystallinesaltpeter_3", 2003755, 0, 4628472, 4, { 15.878380f, 26.831310f, -648.167297f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Crystallinesaltpeter_4", 2003756, 0, 4628473, 4, { 167.233795f, 24.790541f, -814.460571f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_23", 2003703, 0, 4635265, 4, { 282.956207f, 22.080931f, -803.404602f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_24", 2003704, 0, 4635266, 4, { 281.581512f, 22.136259f, -812.060120f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_25", 2003705, 0, 4635267, 4, { 279.445496f, 21.977489f, -796.061829f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_26", 2003706, 0, 4635268, 4, { 276.997711f, 21.723930f, -803.593994f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Embers_27", 2003707, 0, 4635269, 4, { 275.431885f, 21.596609f, -809.329285f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_28", 2003708, 0, 4635270, 4, { 275.757507f, 21.550230f, -817.695923f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Dingypot", 2003920, 0, 4635143, 4, { 75.242188f, 28.001659f, -753.536316f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Dingypot_1", 2003921, 0, 4635145, 4, { 127.327599f, 27.744061f, -783.677124f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Dingypot_2", 2003922, 0, 4635146, 4, { 91.329201f, 24.868130f, -817.703918f }, 1.000000f, 0.521134f, 0); 
    instance.addEObj( "unknown_50", 2003925, 0, 4635157, 4, { 75.262527f, 27.995291f, -753.517029f }, 1.000000f, 0.346243f, 0); 
    instance.addEObj( "unknown_51", 2003926, 0, 4635161, 4, { 127.327599f, 27.348110f, -783.677124f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_52", 2003927, 0, 4635163, 4, { 91.329201f, 24.598101f, -817.703918f }, 1.000000f, 0.521134f, 0); 
    instance.addEObj( "Dingypot_3", 2003923, 0, 4635167, 4, { 149.751999f, 25.383699f, -753.360718f }, 1.000000f, 0.000048f, 0); 
    instance.addEObj( "Dingypot_4", 2003924, 0, 4635168, 4, { 167.658798f, 27.884380f, -782.589478f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_53", 2003928, 0, 4635169, 4, { 149.751999f, 25.334860f, -753.360718f }, 1.000000f, -1.221861f, 0); 
    instance.addEObj( "unknown_54", 2003929, 0, 4635170, 4, { 167.680603f, 27.884380f, -782.559570f }, 0.991760f, 1.450737f, 0); 
    instance.addEObj( "Dingypot_5", 2003930, 0, 4635182, 4, { 75.262497f, 27.995300f, -753.517029f }, 1.000000f, 0.346244f, 0); 
    instance.addEObj( "Dingypot_6", 2003931, 0, 4635183, 4, { 127.327599f, 27.348169f, -783.677124f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Dingypot_7", 2003932, 0, 4635184, 4, { 91.329163f, 24.598120f, -817.703918f }, 1.000000f, 0.521134f, 0); 
    instance.addEObj( "Dingypot_8", 2003933, 0, 4635185, 4, { 149.751999f, 25.334801f, -753.360718f }, 1.000000f, -1.221861f, 0); 
    instance.addEObj( "Dingypot_9", 2003934, 0, 4635186, 4, { 167.680603f, 27.884399f, -782.559570f }, 0.991800f, 1.450737f, 0); 
    instance.addEObj( "13thOrdergoldpot", 2003935, 0, 4635188, 4, { 272.409790f, 25.358669f, -747.525574f }, 0.991760f, -1.441188f, 0); 
    instance.addEObj( "13thOrdergoldpot_1", 2003936, 0, 4635189, 4, { 292.225494f, 25.884979f, -733.943726f }, 0.991760f, 0.004479f, 0); 
    instance.addEObj( "unknown_55", 2003940, 0, 4635191, 4, { 272.379303f, 25.363951f, -747.525574f }, 0.991760f, -1.441094f, 0); 
    instance.addEObj( "unknown_56", 2003941, 0, 4635192, 4, { 292.225494f, 25.885000f, -733.974182f }, 1.000000f, 1.000123f, 0); 
    instance.addEObj( "13thOrdergoldpot_2", 2003937, 0, 4635195, 4, { 314.654907f, 22.203630f, -711.916077f }, 0.991760f, 0.885290f, 0); 
    instance.addEObj( "13thOrdergoldpot_3", 2003938, 0, 4635196, 4, { 316.918610f, 23.281179f, -693.082275f }, 1.000000f, 0.000048f, 0); 
    instance.addEObj( "13thOrdergoldpot_4", 2003939, 0, 4635197, 4, { 321.354095f, 25.885910f, -722.374390f }, 1.000000f, 0.614608f, 0); 
    instance.addEObj( "unknown_57", 2003942, 0, 4635198, 4, { 314.654907f, 22.203630f, -711.916077f }, 1.000000f, 0.885290f, 0); 
    instance.addEObj( "unknown_58", 2003943, 0, 4635199, 4, { 316.918610f, 23.281179f, -693.082275f }, 1.000000f, 0.796963f, 0); 
    instance.addEObj( "unknown_59", 2003944, 0, 4635200, 4, { 321.354095f, 25.916479f, -722.374390f }, 1.000000f, 1.404812f, 0); 
    instance.addEObj( "13thOrdergoldpot_5", 2003945, 0, 4635218, 4, { 272.358307f, 25.345209f, -747.554688f }, 0.991760f, -1.441052f, 0); 
    instance.addEObj( "13thOrdergoldpot_6", 2003946, 0, 4635219, 4, { 292.225494f, 25.884979f, -733.974182f }, 1.000000f, 1.000123f, 0); 
    instance.addEObj( "13thOrdergoldpot_7", 2003947, 0, 4635220, 4, { 314.654907f, 22.203600f, -711.916077f }, 1.000000f, 0.885290f, 0); 
    instance.addEObj( "13thOrdergoldpot_8", 2003948, 0, 4635221, 4, { 316.918610f, 23.281200f, -693.082275f }, 1.000000f, 0.796963f, 0); 
    instance.addEObj( "13thOrdergoldpot_9", 2003949, 0, 4635222, 4, { 321.354095f, 25.916460f, -722.374390f }, 1.000000f, 1.404812f, 0); 
    instance.addEObj( "Model86digger", 2003906, 0, 4635091, 4, { 290.454803f, 21.572701f, -722.551575f }, 1.000000f, 1.397035f, 0); 
    instance.addEObj( "unknown_60", 2003908, 0, 4635092, 4, { 290.454803f, 21.572741f, -722.551575f }, 1.000000f, 1.397035f, 0); 
    instance.addEObj( "unknown_61", 2003907, 0, 4635093, 4, { 290.454803f, 21.572701f, -722.551575f }, 1.000000f, 1.397035f, 0); 
    instance.addEObj( "Model86digger_1", 2003909, 0, 4635094, 4, { 290.032898f, 21.554770f, -721.325073f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Model86digger_2", 2003910, 0, 4635095, 4, { 293.423706f, 21.524401f, -721.908875f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Model86digger_3", 2003911, 0, 4635096, 4, { 296.600006f, 21.522169f, -722.117981f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Safelocation_3", 2003912, 0, 4635097, 4, { 295.787598f, 21.498960f, -711.921875f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_62", 2004027, 0, 4667232, 4, { 24.746099f, 21.499870f, -776.260620f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "13thOrderfurnace", 2003971, 0, 4635450, 4, { 99.168327f, 21.591490f, -639.734497f }, 0.991760f, -0.409649f, 0); 
    instance.addEObj( "13thOrderfurnace_1", 2003973, 0, 4635453, 4, { 97.184692f, 22.323910f, -641.840210f }, 0.991760f, -0.769543f, 0); 
    instance.addEObj( "Embers_29", 2003974, 0, 4635455, 4, { 97.002907f, 21.599529f, -637.466370f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_30", 2003975, 0, 4635458, 4, { 107.346497f, 22.897829f, -634.507080f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_31", 2003976, 0, 4635463, 4, { 101.361801f, 21.598619f, -642.093323f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_32", 2003977, 0, 4635464, 4, { 102.510300f, 22.369780f, -629.359924f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_33", 2003978, 0, 4635465, 4, { 106.937698f, 21.733650f, -640.168579f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "13thOrderfurnace_2", 2003981, 0, 4635494, 4, { 150.865997f, 22.934271f, -696.101318f }, 0.991760f, -0.750463f, 0); 
    instance.addEObj( "13thOrderfurnace_3", 2003979, 0, 4635495, 4, { 152.790207f, 22.175440f, -698.315674f }, 1.000000f, -1.023526f, 0); 
    instance.addEObj( "Embers_34", 2003982, 0, 4635496, 4, { 158.053696f, 21.444090f, -705.371399f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_35", 2003983, 0, 4635497, 4, { 147.626495f, 23.557140f, -705.229797f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_36", 2003984, 0, 4635498, 4, { 143.627106f, 27.180580f, -700.212219f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_37", 2003985, 0, 4635499, 4, { 161.462708f, 21.455429f, -701.332275f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Embers_38", 2003986, 0, 4635500, 4, { 153.048996f, 21.589190f, -707.030212f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_63", 2004365, 0, 4877188, 4, { -359.779388f, 54.920849f, -280.353607f }, 1.000000f, -1.275762f, 0); 
    instance.addEObj( "Entrance", 2002693, 0, 4374449, 4, { 144.324997f, 26.237820f, -624.777405f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Exit", 2002888, 0, 4618998, 4, { 150.476196f, 27.715269f, -552.166870f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Campfire", 2002087, 0, 4293807, 4, { -141.923904f, 64.992691f, -215.225998f }, 1.200000f, -0.347308f, 0); 
    instance.addEObj( "unknown_64", 2002298, 0, 4293998, 4, { -141.315796f, 64.582077f, -215.344193f }, 0.991760f, 0.372241f, 0); 
    instance.addEObj( "unknown_65", 2002602, 0, 4331823, 4, { -141.749405f, 64.486061f, -214.636398f }, 1.000000f, 0.460851f, 0); 
    instance.addEObj( "unknown_66", 2002603, 0, 4331825, 4, { -142.500595f, 64.402977f, -215.414795f }, 1.000000f, -1.243395f, 0); 
    instance.addEObj( "Destination_7", 2002088, 0, 4294174, 4, { -423.805115f, 49.648918f, -276.193512f }, 0.991760f, -0.190160f, 0); 
    instance.addEObj( "Destination_8", 2002089, 0, 4294208, 4, { -408.823486f, 48.861019f, -257.631989f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_9", 2002591, 0, 4330918, 4, { -423.805908f, 49.649261f, -276.209686f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Serratedarrowhead", 2002338, 0, 4302446, 4, { -148.235001f, 81.611061f, -306.558197f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Serratedarrowhead_1", 2002339, 0, 4302447, 4, { -134.575897f, 82.834610f, -293.465088f }, 1.000000f, -0.872664f, 0); 
    instance.addEObj( "Serratedarrowhead_2", 2002340, 0, 4302449, 4, { -115.998596f, 78.875618f, -315.083008f }, 1.000000f, 1.047198f, 0); 
    instance.addEObj( "Velociraptorclaw", 2002341, 0, 4302451, 4, { -137.223099f, 81.215981f, -299.382294f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Velociraptorclaw_1", 2002342, 0, 4302453, 4, { -138.018997f, 81.196129f, -311.270294f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Velociraptorclaw_2", 2002343, 0, 4302459, 4, { -132.007996f, 82.106491f, -321.749908f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_10", 2002090, 0, 4294388, 4, { -172.503296f, 78.144791f, -259.502502f }, 0.991760f, 0.856209f, 0); 
    instance.addEObj( "Destination_11", 2002091, 0, 4294389, 4, { -221.325699f, 66.613899f, -237.624695f }, 0.991760f, -0.998654f, 0); 
    instance.addEObj( "Destination_12", 2002092, 0, 4294391, 4, { -290.419312f, 71.309380f, -263.148407f }, 0.991760f, 1.292901f, 0); 
    instance.addEObj( "Koboldbomb", 2002093, 0, 4294426, 4, { -284.878387f, 64.467278f, -222.135605f }, 1.000000f, 0.377988f, 0); 
    instance.addEObj( "Koboldbomb_1", 2002094, 0, 4294823, 4, { -262.842102f, 64.501518f, -208.060593f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Koboldbomb_2", 2002095, 0, 4294824, 4, { -274.921387f, 64.267273f, -197.468399f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_13", 2002259, 0, 4294850, 4, { -290.000000f, 64.379967f, -208.000000f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "MarkoftheRedSwallow", 2002566, 0, 4329806, 4, { 8.902279f, 48.524551f, -308.206390f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "MarkoftheRedSwallow_1", 2002567, 0, 4329807, 4, { -3.311279f, 50.186958f, -346.089905f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "MarkoftheRedSwallow_2", 2002568, 0, 4329808, 4, { 39.505489f, 48.686501f, -345.754211f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "MarkoftheRedSwallow_3", 2002569, 0, 4329809, 4, { 81.331017f, 49.064911f, -398.062988f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Koboldsupplies", 2002242, 0, 4300363, 4, { 16.338209f, 48.435719f, -370.989014f }, 0.991760f, -1.433958f, 0); 
    instance.addEObj( "Koboldsupplies_1", 2002243, 0, 4300366, 4, { 71.590660f, 48.521481f, -409.755707f }, 1.000000f, 0.434845f, 0); 
    instance.addEObj( "Koboldsupplies_2", 2002244, 0, 4300368, 4, { 88.413643f, 55.610081f, -481.015015f }, 1.000000f, 1.299207f, 0); 
    instance.addEObj( "UGhamaroaetheryte", 2002583, 0, 4330486, 4, { 144.420898f, 29.055531f, -622.461426f }, 1.000000f, 0.011798f, 0); 
    instance.addEObj( "UGhamaroaetheryte_1", 2003457, 0, 4588207, 4, { 144.420898f, 29.055500f, -622.461426f }, 1.000000f, 0.011798f, 0); 
    instance.addEObj( "Treasurecoffer", 2002495, 0, 4321453, 4, { 224.967499f, 24.131371f, -651.320007f }, 1.000000f, -0.796539f, 0); 
    instance.addEObj( "Planarfissure", 2002436, 0, 4308752, 4, { 68.680794f, 55.852589f, -503.959686f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_67", 2006259, 0, 5920793, 4, { -230.291306f, 63.889599f, -257.460693f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Weatheredcrate", 2005009, 0, 5392189, 4, { -77.168457f, 64.522827f, -240.683105f }, 0.700000f, 0.070398f, 0); 
    instance.addEObj( "unknown_68", 2005013, 0, 5392190, 4, { -77.168503f, 64.886414f, -240.683105f }, 1.000000f, 0.070398f, 0); 
    instance.addEObj( "Ironbrazier", 2002346, 0, 4302860, 4, { -312.275909f, 32.551620f, -444.968414f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Keystone", 2005518, 0, 5860062, 4, { -275.153900f, 64.267303f, -197.340897f }, 1.000000f, -1.199734f, 0); 
    instance.addEObj( "Keystone_1", 2005519, 0, 5860066, 4, { -275.153900f, 64.267273f, -197.340897f }, 1.000000f, -1.199734f, 0); 
    instance.addEObj( "Destination_14", 2005521, 0, 5860091, 4, { -292.806702f, 72.183769f, -275.393799f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_15", 2005522, 0, 5860092, 4, { -302.033997f, 70.840637f, -292.279510f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_16", 2005523, 0, 5860093, 4, { -370.016113f, 65.702629f, -307.750000f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Amphora", 2005524, 0, 5860094, 4, { -381.557098f, 52.412479f, -298.750000f }, 1.000000f, -0.826262f, 0); 
    instance.addEObj( "Amphora_1", 2005530, 0, 5860194, 4, { -381.528412f, 52.486149f, -298.922211f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Amphora_2", 2005531, 0, 5860195, 4, { -381.528412f, 52.819439f, -298.891693f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Aetherialtrace", 2005528, 0, 5860445, 4, { -381.582001f, 52.497280f, -298.799194f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Forgottenwhisper", 2002379, 0, 4305786, 4, { -274.251312f, 65.819229f, -196.951508f }, 0.991760f, -1.199735f, 0); 
    instance.addEObj( "Forgottenwhisper_1", 2002380, 0, 4305792, 4, { -338.862793f, 61.724781f, -120.245003f }, 1.000000f, 1.347789f, 0); 
    instance.addEObj( "Forgottenwhisper_2", 2002381, 0, 4305793, 4, { -360.555389f, 66.358467f, -310.861389f }, 0.991760f, 0.172048f, 0); 
    instance.addEObj( "Forgottenwhisper_3", 2002382, 0, 4305794, 4, { -327.859100f, 65.878647f, -267.582397f }, 1.000000f, -1.328933f, 0); 
    instance.addEObj( "Destination_17", 2002383, 0, 4305795, 4, { -437.949188f, 51.396980f, -321.220001f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_69", 2002389, 0, 4306197, 4, { -378.080414f, 51.728500f, -290.114288f }, 0.500000f, 0.465559f, 0); 
    instance.addEObj( "Treasurecoffer_1", 2002491, 0, 4321445, 4, { 160.071701f, 22.766741f, -694.006226f }, 1.000000f, 0.206955f, 0); 
    instance.addEObj( "Treasurecoffer_2", 2002496, 0, 4321449, 4, { 149.994598f, 25.341631f, -755.586975f }, 1.000000f, 0.511556f, 0); 
    instance.addEObj( "Epitaphtoexpiry", 2002400, 0, 4306793, 4, { 117.333801f, 75.420120f, -246.534698f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "MarkoftheWanderer", 2004593, 0, 4982830, 4, { 188.134995f, 62.275070f, -156.653595f }, 1.000000f, -0.365649f, 0); 
    instance.addEObj( "unknown_70", 2004687, 0, 5021393, 4, { -302.710114f, 32.757389f, -452.125488f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_71", 2004566, 0, 4950414, 4, { -282.851990f, 62.674919f, -195.371002f }, 0.991760f, 1.104508f, 0); 
    instance.addEObj( "unknown_72", 2004567, 0, 4950415, 4, { -280.872803f, 62.607700f, -201.983704f }, 0.991760f, -0.429186f, 0); 
    instance.addEObj( "unknown_73", 2004572, 0, 4950416, 4, { -104.420502f, 64.388260f, -218.007004f }, 0.991760f, 1.353423f, 0); 

  }

  void onUpdate( QuestBattle& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( QuestBattle& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( AusteritiesofWind );