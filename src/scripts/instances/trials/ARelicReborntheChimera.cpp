#include <ScriptObject.h>
#include <Territory/InstanceContent.h>

using namespace Sapphire;

class ARelicReborntheChimera : public Sapphire::ScriptAPI::InstanceContentScript
{
public:
  ARelicReborntheChimera() : Sapphire::ScriptAPI::InstanceContentScript( 20019 )
  { }

  void onInit( InstanceContent& instance ) override
  {
    instance.addEObj( "Exit", 2000139, 0, 4600303, 4, { 556.049377f, 348.102509f, -752.435730f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance", 2000182, 4600289, 4600304, 5, { 523.532471f, 348.223389f, -736.685730f }, 1.000000f, 0.000000f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.addEObj( "unknown_0", 2002332, 0, 4614846, 4, { 533.090881f, 348.691895f, -742.750916f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_1", 2002333, 0, 4614847, 4, { 539.945984f, 348.846893f, -734.399475f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_2", 2000608, 3967803, 5908269, 4, { 202.369598f, 257.761108f, 80.435272f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_3", 2000608, 3976993, 5908270, 4, { 273.634705f, 254.600204f, 106.048500f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_4", 2000608, 3986797, 5908271, 4, { 205.504898f, 246.188995f, 194.875702f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_5", 2000608, 3986798, 5908272, 4, { 326.313385f, 239.193497f, 221.138901f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_6", 2000608, 2718481, 5923418, 4, { 240.552307f, 302.769714f, -199.979996f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_7", 2000608, 4065433, 5923421, 4, { 204.970001f, 302.119995f, -216.311600f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_8", 2000608, 2814617, 5923422, 4, { 205.869995f, 302.219086f, -276.681396f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_9", 2000608, 2763112, 5923469, 4, { -433.000000f, 211.007706f, -216.148605f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_10", 2000608, 4187649, 5923470, 4, { -453.000000f, 211.000000f, -281.046600f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_11", 2000608, 4187961, 5923471, 4, { -416.000000f, 210.788193f, -279.813812f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Bubblingspring", 2001208, 0, 4317609, 4, { 498.082611f, 347.705688f, -733.182922f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Bubblingspring_1", 2001208, 0, 4317612, 4, { 562.848389f, 348.102509f, -752.457214f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Bubblingspring_2", 2001208, 0, 4317613, 4, { 572.848572f, 348.073395f, -758.330078f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Bubblingspring_3", 2001208, 0, 4317614, 4, { 555.756470f, 348.102509f, -745.536804f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance", 2001710, 4253304, 4253303, 5, { 472.464294f, 233.528000f, 314.058502f }, 1.000000f, 0.000000f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.addEObj( "Entrance_1", 2001710, 4258415, 4258414, 5, { -715.850586f, 224.931900f, -41.878071f }, 0.991760f, 0.000048f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.addEObj( "unknown_12", 2000409, 0, 4314331, 4, { -755.580994f, 226.428604f, -92.050659f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_13", 2000409, 0, 4314359, 4, { -771.115601f, 233.194595f, -121.402100f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_14", 2000409, 0, 4314400, 4, { -735.255981f, 225.787704f, -65.476501f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Draconianrosary", 2002279, 0, 4285063, 4, { 458.884491f, 304.805786f, -279.591095f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sealedmissive", 2005632, 0, 5883708, 4, { 260.895996f, 359.000000f, -675.919006f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_15", 2006321, 0, 5935535, 4, { 276.500000f, 359.000000f, -705.000000f }, 1.000000f, 1.029744f, 0); 
    instance.addEObj( "unknown_16", 2002273, 0, 4313761, 4, { 269.545898f, 359.059814f, -669.964722f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_17", 2002273, 0, 5920750, 4, { -447.592896f, 210.986496f, -252.521606f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ambushsite", 2005848, 0, 5888373, 4, { 269.825195f, 302.937286f, -190.875198f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_18", 2005849, 0, 5888383, 4, { 215.014801f, 311.970612f, -233.447800f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Townsperson", 2005851, 0, 5888701, 4, { 225.795898f, 303.300690f, -284.867310f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Machinistmessenger", 2005890, 0, 5890069, 4, { 198.596207f, 303.699188f, -273.579010f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_19", 2005897, 0, 5890169, 4, { 224.872192f, 302.052399f, -289.723114f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_20", 2005897, 0, 5890172, 4, { 223.071701f, 302.479492f, -166.430206f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_21", 2005849, 0, 5891005, 4, { 215.014801f, 311.970612f, -233.447800f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Signalmortar", 2006175, 0, 5910901, 4, { 215.014801f, 311.970612f, -233.447800f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Signalmortar_1", 2006175, 0, 5910902, 4, { 215.014801f, 311.970612f, -233.447800f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Blackstandard", 2006369, 0, 5888358, 4, { 224.927902f, 302.062286f, -289.606689f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Crimsonstandard", 2006370, 0, 5888366, 4, { 223.115204f, 302.479492f, -166.613297f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Glowinggrimoire", 2002296, 0, 4293747, 4, { -893.095276f, 229.541397f, -11.886840f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Glowinggrimoire_1", 2002297, 0, 4293748, 4, { -892.973206f, 229.571899f, -11.947810f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_22", 2002333, 0, 4322343, 4, { 527.000671f, 349.538513f, -749.690979f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_23", 2002332, 0, 4322342, 4, { 535.429626f, 349.301300f, -748.008728f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_24", 2006280, 0, 5918778, 4, { 143.812500f, 280.041809f, 19.904699f }, 1.000000f, 0.000047f, 0); 
    instance.addEObj( "Destination", 2004446, 0, 4892448, 4, { 171.848099f, 229.100800f, 329.624207f }, 0.800000f, -0.822735f, 0); 
    instance.addEObj( "Destination_1", 2004447, 0, 4892449, 4, { 172.959106f, 229.742798f, 331.842987f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_25", 2004534, 0, 4892522, 4, { 144.869400f, 236.826294f, 328.664093f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Secondaryvortexturret", 2004448, 0, 4892555, 4, { 589.007385f, 302.089905f, -165.757095f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Secondaryvortexturret_1", 2004449, 0, 4892556, 4, { 708.743225f, 287.527496f, 109.998802f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Secondaryvortexturret_2", 2004450, 0, 4892558, 4, { 589.980713f, 286.535309f, 183.002701f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Primaryvortexturret", 2004451, 0, 4892559, 4, { 574.175720f, 302.792603f, 33.642712f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_26", 2004536, 0, 4893810, 4, { 588.996887f, 302.059509f, -165.779205f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_27", 2004537, 0, 4893811, 4, { 708.743225f, 287.527496f, 109.998901f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_28", 2004538, 0, 4893812, 4, { 589.980713f, 286.535309f, 183.002701f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_29", 2004539, 0, 4893813, 4, { 574.175720f, 302.792603f, 33.642700f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Ixalisilverpot", 2004482, 0, 4891563, 4, { 596.721680f, 302.271515f, -89.974709f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_1", 2004483, 0, 4891564, 4, { 638.220825f, 303.422485f, -93.910202f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_2", 2004484, 0, 4891566, 4, { 618.983887f, 299.812286f, -43.443501f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_3", 2004485, 0, 4891567, 4, { 650.711121f, 298.443909f, -10.194140f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_4", 2004486, 0, 4891568, 4, { 669.965393f, 301.397888f, -28.234591f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_5", 2004487, 0, 4891570, 4, { 698.367004f, 304.433685f, -34.135509f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_6", 2004488, 0, 4891571, 4, { 704.948181f, 300.453613f, -16.237499f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_7", 2004489, 0, 4891572, 4, { 570.060486f, 291.929993f, -19.321110f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_8", 2004490, 0, 4891573, 4, { 596.730591f, 303.561401f, -89.974533f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_9", 2004491, 0, 4891574, 4, { 638.250183f, 304.764709f, -93.882851f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_10", 2004492, 0, 4891575, 4, { 618.953613f, 301.155212f, -43.443501f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_11", 2004493, 0, 4891576, 4, { 650.711121f, 299.732910f, -10.194140f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_12", 2004494, 0, 4891577, 4, { 669.978699f, 302.747894f, -28.222570f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_13", 2004495, 0, 4891578, 4, { 698.367004f, 305.795990f, -34.166019f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_14", 2004496, 0, 4891579, 4, { 704.948181f, 301.787689f, -16.206989f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ixalisilverpot_15", 2004497, 0, 4891580, 4, { 570.060486f, 293.257202f, -19.321110f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_30", 2003670, 0, 4622729, 4, { 179.186600f, 221.972702f, 345.540405f }, 0.778198f, 0.229573f, 0); 
    instance.addEObj( "Destination_2", 2003741, 0, 4627127, 4, { 394.823486f, 225.082504f, 378.808105f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_31", 2003742, 0, 4627273, 4, { 477.866699f, 207.432907f, 477.683594f }, 0.991760f, 0.667244f, 0); 
    instance.addEObj( "unknown_32", 2001899, 0, 4262300, 4, { 4.592957f, 207.234100f, 434.622711f }, 0.991760f, 0.894564f, 0); 
    instance.addEObj( "Entrance_2", 2002692, 0, 4374466, 4, { 643.553101f, 287.216003f, 172.151993f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance_3", 2002705, 0, 4374465, 4, { -684.874878f, 209.000000f, -522.554871f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance_4", 2002706, 0, 4374464, 4, { -160.917206f, 234.890198f, 271.606506f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance_5", 2002708, 0, 4374463, 4, { -353.964905f, 214.790405f, 690.056885f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Entrance_6", 2003671, 0, 4627181, 4, { 489.181000f, 206.893707f, 479.661987f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_33", 2002503, 0, 4321909, 4, { 50.905151f, 235.439499f, 348.890411f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Snowman", 2002604, 0, 4331837, 4, { 256.279785f, 222.219101f, 309.088715f }, 0.991760f, 0.362279f, 0); 
    instance.addEObj( "Stolenwares", 2002110, 0, 4290065, 4, { 11.893010f, 207.219498f, 439.193604f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Stolenwares_1", 2002111, 0, 4290066, 4, { 24.144489f, 207.609299f, 427.380615f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Stolenwares_2", 2002261, 0, 4291275, 4, { 4.212927f, 206.201996f, 465.995087f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_34", 2002556, 0, 4329703, 4, { 170.244904f, 223.837402f, 365.529785f }, 0.991760f, 1.006642f, 0); 
    instance.addEObj( "unknown_35", 2002557, 0, 4329704, 4, { 169.604004f, 223.848404f, 365.743408f }, 1.000000f, 0.000048f, 0); 
    instance.addEObj( "unknown_36", 2002558, 0, 4329705, 4, { 170.763702f, 222.980103f, 366.903107f }, 0.991760f, 0.350760f, 0); 
    instance.addEObj( "Bloodstainedsnow", 2002112, 0, 4290135, 4, { -21.776661f, 207.188599f, 447.381805f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_37", 2002623, 0, 4334530, 4, { -22.680710f, 207.361801f, 444.831299f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_38", 2002624, 0, 4334531, 4, { -20.800091f, 207.082901f, 449.668488f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Firewood", 2002113, 0, 4291230, 4, { 167.345703f, 253.717102f, 203.875702f }, 0.991760f, -0.077707f, 0); 
    instance.addEObj( "Firewood_1", 2002114, 0, 4291231, 4, { 165.263596f, 273.991791f, 184.565308f }, 1.000000f, -1.194553f, 0); 
    instance.addEObj( "Firewood_2", 2002115, 0, 4291232, 4, { 168.684601f, 266.472809f, 159.180695f }, 0.991760f, -0.301729f, 0); 
    instance.addEObj( "Firewood_3", 2002116, 0, 4291234, 4, { 191.442398f, 246.595901f, 198.079803f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Firewood_4", 2002117, 0, 4291235, 4, { 196.127701f, 254.101395f, 163.190399f }, 1.000000f, -0.640161f, 0); 
    instance.addEObj( "Firewood_5", 2002118, 0, 4291237, 4, { 156.707596f, 276.339996f, 142.535706f }, 0.991760f, 0.166239f, 0); 
    instance.addEObj( "Firewood_6", 2002119, 0, 4291239, 4, { 154.541306f, 275.962006f, 175.911301f }, 0.991760f, -0.689295f, 0); 
    instance.addEObj( "Firewood_7", 2002120, 0, 4291241, 4, { 159.383194f, 273.862396f, 164.559601f }, 1.000000f, -0.218692f, 0); 
    instance.addEObj( "×カバン（�）", 2002121, 0, 4291288, 4, { 157.591599f, 273.767395f, -26.991890f }, 0.991760f, -0.467248f, 0); 
    instance.addEObj( "unknown_39", 2002264, 0, 4291295, 4, { 155.763504f, 274.014313f, -28.612930f }, 1.000000f, 0.351857f, 0); 
    instance.addEObj( "Magickedblade", 2002122, 0, 4291297, 4, { 157.183105f, 273.914703f, -29.770390f }, 0.991760f, 0.158338f, 0); 
    instance.addEObj( "unknown_40", 2002619, 0, 4334476, 4, { 157.183105f, 273.914703f, -29.770399f }, 0.991800f, 0.158338f, 0); 
    instance.addEObj( "Snowman_1", 2003163, 0, 4539442, 4, { 303.147095f, 228.879898f, 371.204895f }, 0.991760f, -0.088061f, 0); 
    instance.addEObj( "Snowman_2", 2003306, 0, 4540203, 4, { 303.142609f, 228.958893f, 371.454712f }, 1.000000f, -0.088104f, 0); 
    instance.addEObj( "Dullknife", 2002124, 0, 4291459, 4, { 530.342896f, 352.443115f, -696.046082f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_3", 2002125, 0, 4291556, 4, { 424.500610f, 328.307495f, -394.491486f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_4", 2002571, 0, 4329954, 4, { 408.765106f, 325.513885f, -396.628387f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sebastianbound", 2002686, 0, 4373391, 4, { 424.521210f, 329.121613f, -394.492401f }, 1.000000f, 0.000047f, 0); 
    instance.addEObj( "Unlitbrazier", 2002126, 0, 4292711, 4, { 218.558899f, 302.644592f, -161.886993f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Unlitbrazier_1", 2002127, 0, 4292713, 4, { 185.593002f, 302.497711f, -167.926193f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Unlitbrazier_2", 2002128, 0, 4292715, 4, { 215.548492f, 311.999908f, -227.274307f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Unlitbrazier_3", 2002129, 0, 4292721, 4, { 232.591293f, 312.000000f, -226.789703f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Unlitbrazier_4", 2002130, 0, 4292723, 4, { 240.171600f, 302.000000f, -184.816299f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_41", 2002561, 0, 4329675, 4, { 218.558899f, 302.644592f, -161.886993f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "unknown_42", 2002562, 0, 4329676, 4, { 185.593002f, 302.497711f, -167.926193f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "unknown_43", 2002563, 0, 4329677, 4, { 215.548492f, 311.999908f, -227.274307f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "unknown_44", 2002564, 0, 4329678, 4, { 232.591293f, 312.000000f, -226.789703f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "unknown_45", 2002565, 0, 4329679, 4, { 240.171600f, 302.000000f, -184.816299f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Overturnedwain", 2002131, 0, 4292751, 4, { 463.270111f, 303.467987f, -223.559906f }, 0.991760f, 1.562893f, 0); 
    instance.addEObj( "unknown_46", 2002509, 0, 4321975, 4, { 462.171387f, 303.750397f, -224.170303f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_47", 2002626, 0, 4334563, 4, { 462.577515f, 303.446411f, -226.972397f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_48", 2002627, 0, 4334564, 4, { 464.519012f, 303.700104f, -220.513000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Droppedlumber", 2002132, 0, 4292789, 4, { 586.000000f, 321.768494f, -279.176514f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_49", 2002137, 0, 4293139, 4, { 209.541107f, 302.000000f, -196.559494f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_50", 2002138, 0, 4293140, 4, { 204.746796f, 302.000000f, -191.268707f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "HouseHaillenarteparcel", 2002139, 0, 4293141, 4, { 208.085205f, 302.000000f, -193.576202f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "HouseHaillenarteparcel_1", 2002140, 0, 4293142, 4, { 210.027695f, 302.000000f, -193.202698f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "HouseDzemaelparcel", 2002141, 0, 4293143, 4, { 212.073196f, 302.000000f, -193.641296f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_51", 2002678, 0, 4335651, 4, { 208.085205f, 302.000000f, -193.576202f }, 1.500000f, 0.000000f, 0); 
    instance.addEObj( "unknown_52", 2002679, 0, 4335652, 4, { 210.027695f, 302.000000f, -193.202698f }, 1.500000f, 0.000000f, 0); 
    instance.addEObj( "unknown_53", 2002680, 0, 4335653, 4, { 212.073196f, 302.000000f, -193.641296f }, 1.500000f, 0.000000f, 0); 
    instance.addEObj( "unknown_54", 2002588, 0, 4330599, 4, { 444.947205f, 305.001312f, -258.762299f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_55", 2002615, 0, 4333659, 4, { 470.360901f, 305.406403f, -277.475586f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Snowmound", 2002409, 0, 4307714, 4, { 476.035400f, 247.472702f, -285.643188f }, 0.686646f, 0.000048f, 0); 
    instance.addEObj( "Snowmound_1", 2002410, 0, 4307715, 4, { 497.549408f, 252.528503f, -289.626495f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Snowmound_2", 2002411, 0, 4307716, 4, { 445.149414f, 252.515305f, -299.269592f }, 0.500000f, 0.000048f, 0); 
    instance.addEObj( "Snowmound_3", 2002412, 0, 4307717, 4, { 464.382599f, 250.876694f, -329.823792f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Snowmound_4", 2002413, 0, 4307718, 4, { 489.286896f, 249.067703f, -322.449707f }, 0.300000f, 0.000000f, 0); 
    instance.addEObj( "Snowmound_5", 2002414, 0, 4307719, 4, { 456.643005f, 249.834000f, -239.391403f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Knightseffects", 2002151, 0, 4293177, 4, { 683.400024f, 298.571106f, -300.649994f }, 1.000000f, 0.913474f, 0); 
    instance.addEObj( "Wormeatenalmanac", 2002152, 0, 4293185, 4, { 193.438599f, 358.118195f, -567.498291f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_56", 2002512, 0, 4334541, 4, { 193.637299f, 358.148102f, -567.961670f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Pastlogs", 2002320, 0, 4297083, 4, { 207.845200f, 299.085999f, 423.632690f }, 1.000000f, -0.962023f, 0); 
    instance.addEObj( "LettertoHouseDurendaire", 2002157, 0, 4293209, 4, { -229.363403f, 272.518494f, -33.367371f }, 0.991760f, 1.221882f, 0); 
    instance.addEObj( "unknown_57", 2002513, 0, 4334495, 4, { -229.593597f, 272.538391f, -34.168079f }, 1.000000f, 1.167617f, 0); 
    instance.addEObj( "Destination_5", 2002158, 0, 4293213, 4, { -424.232086f, 279.038788f, 89.611557f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Hereticcorpse", 2002589, 0, 4330601, 4, { -459.342285f, 207.291000f, -286.243988f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Rubble", 2002159, 0, 4293218, 4, { -69.000000f, 298.962585f, -234.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Rubble_1", 2002160, 0, 4293219, 4, { -86.771553f, 299.257202f, -228.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Rubble_2", 2002161, 0, 4293220, 4, { -80.000000f, 299.314789f, -257.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Rubble_3", 2002162, 0, 4293221, 4, { -121.178802f, 299.252014f, -264.595490f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Rubble_4", 2002163, 0, 4293222, 4, { -60.000000f, 299.261597f, -247.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_6", 2002164, 0, 4293226, 4, { -559.000000f, 209.391296f, -422.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Alchemicconcoction", 2002165, 0, 4293230, 4, { -185.065903f, 293.062988f, -70.607140f }, 0.991760f, 0.354415f, 0); 
    instance.addEObj( "Rottingvegetables", 2002166, 0, 4293232, 4, { -440.307404f, 210.772797f, -218.630997f }, 0.991760f, -0.737041f, 0); 
    instance.addEObj( "Rottingvegetables_1", 2002167, 0, 4293233, 4, { -463.731903f, 211.000000f, -269.971405f }, 1.000000f, 0.921098f, 0); 
    instance.addEObj( "Rottingvegetables_2", 2002168, 0, 4293234, 4, { -454.350586f, 217.999603f, -283.761810f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ratsnest", 2002169, 0, 4293235, 4, { -416.303314f, 207.516693f, -200.912598f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_58", 2002560, 0, 4329618, 4, { -416.825195f, 225.000000f, -298.519501f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Frozeninquisitorcorpse", 2002322, 0, 4297099, 4, { -486.580414f, 150.072296f, -315.875610f }, 1.296936f, 0.000048f, 0); 
    instance.addEObj( "Snowmound_6", 2002170, 0, 4297129, 4, { -488.666412f, 150.117798f, -318.693512f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Inquisitorcorpse", 2002590, 0, 4330878, 4, { -488.651489f, 150.669296f, -317.773895f }, 0.472961f, 0.596775f, 0); 
    instance.addEObj( "Snowmound_7", 2002174, 0, 4297161, 4, { -391.332092f, 219.271698f, -179.421997f }, 0.700000f, 0.000000f, 0); 
    instance.addEObj( "Suspiciousbox", 2002175, 0, 4297163, 4, { -391.226105f, 219.287399f, -179.491898f }, 0.991760f, 0.083460f, 0); 
    instance.addEObj( "unknown_59", 2002625, 0, 4334546, 4, { -391.229309f, 219.600494f, -179.497299f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_60", 2002323, 0, 4297303, 4, { -886.281677f, 228.306595f, 1.573470f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_61", 2002572, 0, 4330072, 4, { -900.200989f, 228.732895f, -4.376618f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Discardedweapon", 2002176, 0, 4297319, 4, { -407.811890f, 211.606094f, -290.303192f }, 1.000000f, -0.017453f, 0); 
    instance.addEObj( "Discardedweapon_1", 2002177, 0, 4297320, 4, { -450.390686f, 211.627106f, -284.911591f }, 1.000000f, -0.996286f, 0); 
    instance.addEObj( "Discardedweapon_2", 2002178, 0, 4298566, 4, { -430.616791f, 224.609299f, -195.776794f }, 1.000000f, -0.987620f, 0); 
    instance.addEObj( "Fallendragon", 2002179, 0, 4298822, 4, { -490.148193f, 152.236801f, -314.625793f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Snowboulder", 2002185, 0, 4298909, 4, { -952.598022f, 276.802887f, -38.108311f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Frozencorpse", 2002616, 0, 4334234, 4, { -952.755371f, 277.040314f, -38.552681f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_62", 2002324, 0, 4298959, 4, { -940.421387f, 254.371307f, -22.028601f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Rope", 2002186, 0, 4299097, 4, { -462.819489f, 212.067703f, -268.184296f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Footprints", 2002196, 0, 4301694, 4, { -322.804596f, 216.568497f, 655.847900f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Footprints_1", 2002197, 0, 4301697, 4, { -290.943787f, 223.285202f, 590.539307f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Footprints_2", 2002198, 0, 4301701, 4, { -316.136993f, 228.943405f, 540.931030f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Footprints_3", 2002199, 0, 4301704, 4, { -338.225006f, 235.241699f, 525.580017f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Footprints_4", 2002200, 0, 4301713, 4, { -358.266998f, 236.722794f, 506.290985f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_63", 2002681, 0, 4358197, 4, { -322.804596f, 216.562103f, 655.847900f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_64", 2002682, 0, 4358198, 4, { -290.937988f, 223.332794f, 590.546997f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_65", 2002683, 0, 4358199, 4, { -316.136993f, 228.958801f, 540.931030f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_66", 2002684, 0, 4358200, 4, { -338.225006f, 235.262299f, 525.580017f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_67", 2002685, 0, 4358201, 4, { -358.266998f, 236.738403f, 506.290985f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_7", 2002265, 0, 4301773, 4, { -692.997620f, 253.882797f, 507.003998f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_68", 2002334, 0, 4301812, 4, { -478.333099f, 288.486115f, 168.037903f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_69", 2002573, 0, 4330078, 4, { -501.952087f, 289.749390f, 158.649094f }, 0.991760f, -0.460441f, 0); 
    instance.addEObj( "Imperialshortsword", 2002540, 0, 4324088, 4, { -611.520325f, 246.232498f, 346.954590f }, 0.991760f, 0.317153f, 0); 
    instance.addEObj( "Imperialmagitekdevice", 2002541, 0, 4324089, 4, { -271.534302f, 224.455704f, 524.681396f }, 0.991760f, -0.196017f, 0); 
    instance.addEObj( "Natalanaetheryte", 2002582, 0, 4330471, 4, { 649.778992f, 292.462311f, 175.348495f }, 1.000000f, -0.936176f, 0); 
    instance.addEObj( "Natalanaetheryte_1", 2003456, 0, 4588208, 4, { 649.778992f, 292.462311f, 175.348495f }, 1.000000f, -0.936177f, 0); 
    instance.addEObj( "Highlandtealeaves", 2002854, 0, 4494864, 4, { -227.502304f, 226.025497f, 483.013794f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Highlandtealeaves_1", 2002856, 0, 4494865, 4, { -359.724792f, 229.619400f, 418.991302f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Highlandtealeaves_2", 2002855, 0, 4494866, 4, { -458.220093f, 232.355103f, 442.326599f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Highlandtealeaves_3", 2002857, 0, 4494867, 4, { -547.984375f, 237.121094f, 395.908905f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_70", 2004151, 0, 4867900, 4, { -701.384827f, 224.259705f, -31.639400f }, 1.250000f, 0.000000f, 0); 
    instance.addEObj( "unknown_71", 2004647, 0, 5032824, 4, { -277.729492f, 225.574097f, 557.305176f }, 0.869717f, -0.959184f, 0); 
    instance.addEObj( "unknown_72", 2004648, 0, 5032829, 4, { -282.093597f, 226.276001f, 547.203674f }, 0.961271f, 0.000144f, 0); 
    instance.addEObj( "Destination_8", 2004652, 0, 5033626, 4, { -440.630096f, 211.000000f, -263.624786f }, 0.961271f, -0.000240f, 0); 
    instance.addEObj( "Destination_9", 2004653, 0, 5033627, 4, { -451.891510f, 221.660599f, -149.273499f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_10", 2004654, 0, 5033628, 4, { -345.133789f, 254.430405f, -95.375252f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_11", 2004655, 0, 5033631, 4, { -386.190613f, 270.475891f, 77.653107f }, 0.930753f, -0.491475f, 0); 
    instance.addEObj( "unknown_73", 2004894, 0, 5098972, 4, { -382.314789f, 231.036804f, 306.416412f }, 0.808681f, 0.000623f, 0); 
    instance.addEObj( "Fallenhereticseffects", 2005002, 0, 5391928, 4, { -381.763000f, 230.825897f, 303.579987f }, 0.350000f, 0.635365f, 0); 
    instance.addEObj( "Entrance_7", 2004656, 0, 5036032, 4, { -918.822021f, 229.663498f, -9.475899f }, 0.991789f, 0.000048f, 0); 
    instance.addEObj( "Freshprints", 2004657, 0, 5040259, 4, { -395.285004f, 239.612396f, 343.831512f }, 0.625573f, -1.222937f, 0); 
    instance.addEObj( "unknown_74", 2004659, 0, 5040288, 4, { -190.020706f, 221.118500f, 438.972992f }, 0.961271f, 0.001582f, 0); 
    instance.addEObj( "unknown_75", 2004658, 0, 5052132, 4, { -394.979797f, 239.569595f, 343.923004f }, 0.930753f, 1.230607f, 0); 
    instance.addEObj( "unknown_76", 2004992, 0, 5375019, 4, { -396.652313f, 239.519196f, 342.411987f }, 1.000000f, 1.336400f, 0); 
    instance.addEObj( "unknown_77", 2004993, 0, 5375020, 4, { -382.345306f, 239.576599f, 358.480103f }, 1.000000f, 1.474899f, 0); 
    instance.addEObj( "unknown_78", 2005061, 0, 5607211, 4, { 126.176804f, 374.196991f, -652.674072f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "unknown_79", 2005062, 0, 5607273, 4, { -496.726990f, 206.347702f, -363.698792f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Entrance_8", 2005063, 0, 5607331, 4, { -167.060593f, 304.153809f, -331.227692f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_80", 2006319, 0, 5933348, 4, { 276.500000f, 359.000000f, -705.000000f }, 1.000000f, 1.029744f, 0); 
    instance.addEObj( "Destination_12", 2006367, 0, 5933582, 4, { 205.931900f, 307.865295f, 412.277893f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_81", 2006320, 0, 5935627, 4, { 238.806107f, 301.991211f, -277.955902f }, 1.000000f, 1.076123f, 0); 
    instance.addEObj( "Treasurecoffer", 2002497, 0, 4321563, 4, { 697.691101f, 287.492889f, 38.492439f }, 1.000000f, -0.095016f, 0); 
    instance.addEObj( "Destination_13", 2002373, 0, 4305855, 4, { 72.113586f, 227.200195f, 380.859009f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_82", 2002374, 0, 4305856, 4, { 72.115997f, 227.203796f, 380.863708f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Treasurecoffer_1", 2002494, 0, 4321555, 4, { 638.218811f, 286.441986f, 140.517807f }, 1.000000f, 0.128755f, 0); 
    instance.addEObj( "Campfire", 2002420, 0, 4307733, 4, { 524.679993f, 234.746399f, 324.109985f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_83", 2002421, 0, 4307735, 4, { 524.679993f, 234.746399f, 324.109985f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_84", 2002422, 0, 4307736, 4, { 524.687012f, 234.768402f, 323.539307f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_14", 2002423, 0, 4307760, 4, { -318.790009f, 304.652100f, 243.339996f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_15", 2002424, 0, 4307761, 4, { 67.930000f, 374.780914f, -672.190002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_16", 2002425, 0, 4307783, 4, { 96.709999f, 356.393188f, -257.230011f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_85", 2002426, 0, 4307801, 4, { 267.929993f, 362.500000f, -581.500000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_86", 2005704, 0, 5882477, 4, { -580.754395f, 206.884201f, -407.372314f }, 2.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_17", 2006305, 0, 5922993, 4, { -94.949997f, 298.660004f, -212.639999f }, 1.000000f, -1.570198f, 0); 
    instance.addEObj( "Destination_18", 2006306, 0, 5922995, 4, { -405.539093f, 274.708099f, 79.087517f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_87", 2006307, 0, 5922998, 4, { -314.612091f, 244.614594f, 32.300701f }, 0.991760f, 0.499558f, 0); 
    instance.addEObj( "unknown_88", 2006343, 0, 5930988, 4, { 209.459595f, 302.255096f, -166.858597f }, 0.991760f, 0.030407f, 0); 
    instance.addEObj( "unknown_89", 2006260, 0, 5920797, 4, { 232.654297f, 251.789093f, 127.244904f }, 1.000000f, 0.440930f, 0); 
    instance.addEObj( "unknown_90", 2006268, 0, 5920877, 4, { 224.311707f, 302.000000f, -276.842590f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_91", 2002359, 0, 4303345, 4, { -775.359985f, 224.895294f, 29.370520f }, 1.500000f, 0.612141f, 0); 
    instance.addEObj( "unknown_92", 2002714, 0, 4374658, 4, { -769.891724f, 224.920502f, 25.318480f }, 0.800000f, 0.000000f, 0); 
    instance.addEObj( "unknown_93", 2005572, 0, 5871800, 4, { 531.516724f, 348.503113f, -737.417175f }, 1.000000f, -1.399857f, 0); 
    instance.addEObj( "Oldwoodenchest", 2002308, 0, 4295741, 4, { -583.810730f, 235.002502f, 410.952087f }, 0.991760f, -1.174585f, 0); 
    instance.addEObj( "Weatheredcrate", 2004100, 0, 4695115, 4, { -583.810730f, 235.002502f, 410.952087f }, 0.991800f, -1.174586f, 0); 
    instance.addEObj( "Oldwoodenchest_1", 2002312, 0, 4296132, 4, { 579.492615f, 347.825012f, -764.355713f }, 0.991760f, -0.815885f, 0); 
    instance.addEObj( "unknown_94", 2002319, 0, 4296780, 4, { 574.172180f, 348.102509f, -761.256287f }, 1.200000f, 0.813446f, 0); 
    instance.addEObj( "×不浄", 2005854, 0, 5889993, 4, { 143.812500f, 280.041809f, 19.904680f }, 1.000000f, 0.000048f, 0); 
    instance.addEObj( "unknown_95", 2005853, 0, 5889994, 4, { 162.157593f, 275.421387f, 16.159300f }, 0.991760f, 1.412195f, 0); 
    instance.addEObj( "Foultaint", 2005889, 0, 5890011, 4, { 143.812500f, 280.041809f, 19.904699f }, 1.000000f, 0.000047f, 0); 
    instance.addEObj( "Entrance_9", 2003991, 0, 4636414, 4, { 532.612305f, 350.621094f, -710.986328f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_19", 2003993, 0, 4637050, 4, { 532.612305f, 350.621094f, -710.986328f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "unknown_96", 2005535, 0, 5878549, 4, { 50.339481f, 374.532593f, -676.325684f }, 0.991760f, -0.829369f, 0); 
    instance.addEObj( "MarkoftheFury", 2004597, 0, 4982870, 4, { -692.434387f, 254.300003f, 503.480499f }, 1.000000f, 1.137233f, 0); 
    instance.addEObj( "MarkoftheLover", 2004598, 0, 4982877, 4, { 64.600594f, 376.351105f, -672.703979f }, 1.000000f, 1.406116f, 0); 
    instance.addEObj( "unknown_97", 2004667, 0, 5018498, 4, { 214.585297f, 237.297501f, 438.357391f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_98", 2004666, 0, 5018499, 4, { -776.174194f, 253.943695f, 429.764313f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_99", 2004694, 0, 5018508, 4, { -682.533630f, 315.644409f, 371.826202f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_100", 2004695, 0, 5018509, 4, { 195.945602f, 307.884003f, 421.363312f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_101", 2004689, 0, 5021146, 4, { -420.229309f, 281.777802f, 104.652802f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_102", 2004870, 0, 5072794, 4, { 268.394897f, 360.122101f, -567.969421f }, 1.000000f, 0.000000f, 0); 

  }

  void onUpdate( InstanceContent& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( InstanceContent& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( ARelicReborntheChimera );