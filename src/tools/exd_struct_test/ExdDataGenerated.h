#ifndef _EXDDATA_H
#define _EXDDATA_H

/* This file has been automatically generated.
   Changes will be lost upon regeneration.
   To change the content edit tools/exd_struct_gen */

#include <GameData.h>
#include <File.h>
#include <ExdData.h>
#include <ExdCat.h>
#include <Exd.h>
#include <set>

namespace Core {
namespace Data {

class ExdDataGenerated;

struct Achievement;
struct AchievementCategory;
struct AchievementKind;
struct Action;
struct ActionCategory;
struct ActionComboRoute;
struct ActionIndirection;
struct ActionProcStatus;
struct ActionTimeline;
struct ActionTransient;
struct Addon;
struct Adventure;
struct AdventureExPhase;
struct AetherCurrent;
struct AetherialWheel;
struct Aetheryte;
struct AirshipExplorationLevel;
struct AirshipExplorationLog;
struct AirshipExplorationParamType;
struct AirshipExplorationPart;
struct AirshipExplorationPoint;
struct AnimaWeapon5;
struct AnimaWeapon5Param;
struct AnimaWeapon5PatternGroup;
struct AnimaWeapon5SpiritTalk;
struct AnimaWeapon5SpiritTalkParam;
struct AnimaWeapon5TradeItem;
struct AnimaWeaponFUITalk;
struct AnimaWeaponFUITalkParam;
struct AnimaWeaponIcon;
struct AnimaWeaponItem;
struct AquariumFish;
struct AquariumWater;
struct AttackType;
struct Balloon;
struct BaseParam;
struct BattleLeve;
struct BeastRankBonus;
struct BeastReputationRank;
struct BeastTribe;
struct Behavior;
struct BGM;
struct BNpcAnnounceIcon;
struct BNpcBase;
struct BNpcCustomize;
struct BNpcName;
struct BuddyAction;
struct BuddyEquip;
struct BuddyItem;
struct BuddyRank;
struct BuddySkill;
struct Cabinet;
struct CabinetCategory;
struct Calendar;
struct ChainBonus;
struct CharaMakeCustomize;
struct CharaMakeType;
struct ChocoboRace;
struct ChocoboRaceAbility;
struct ChocoboRaceAbilityType;
struct ChocoboRaceItem;
struct ChocoboRaceRank;
struct ChocoboRaceStatus;
struct ChocoboRaceTerritory;
struct ChocoboTaxiStand;
struct ClassJob;
struct ClassJobCategory;
struct Companion;
struct CompanionMove;
struct CompanionTransient;
struct CompanyAction;
struct CompanyCraftDraft;
struct CompanyCraftDraftCategory;
struct CompanyCraftManufactoryState;
struct CompanyCraftPart;
struct CompanyCraftProcess;
struct CompanyCraftSequence;
struct CompanyCraftSupplyItem;
struct CompanyCraftType;
struct CompleteJournal;
struct CompleteJournalCategory;
struct ContentExAction;
struct ContentFinderCondition;
struct ContentFinderConditionTransient;
struct ContentMemberType;
struct ContentRoulette;
struct ContentType;
struct CraftAction;
struct CraftLeve;
struct CraftType;
struct Currency;
struct CustomTalk;
struct Cutscene;
struct CutScreenImage;
struct DailySupplyItem;
struct DeepDungeonBan;
struct DeepDungeonDanger;
struct DeepDungeonEquipment;
struct DeepDungeonFloorEffectUI;
struct DeepDungeonItem;
struct DeepDungeonStatus;
struct DefaultTalk;
struct DeliveryQuest;
struct DisposalShop;
struct DisposalShopFilterType;
struct DisposalShopItem;
struct DpsChallenge;
struct DpsChallengeOfficer;
struct DpsChallengeTransient;
struct Emote;
struct EmoteCategory;
struct ENpcBase;
struct ENpcResident;
struct EObj;
struct EquipRaceCategory;
struct EquipSlotCategory;
struct EventAction;
struct EventIconPriority;
struct EventIconType;
struct EventItem;
struct EventItemHelp;
struct ExVersion;
struct Fate;
struct FCActivity;
struct FCAuthority;
struct FCAuthorityCategory;
struct FCChestName;
struct FccShop;
struct FCHierarchy;
struct FCReputation;
struct FCRights;
struct FishingSpot;
struct FishParameter;
struct GardeningSeed;
struct GatheringCondition;
struct GatheringExp;
struct GatheringItem;
struct GatheringItemLevelConvertTable;
struct GatheringItemPoint;
struct GatheringNotebookList;
struct GatheringPoint;
struct GatheringPointBase;
struct GatheringPointBonus;
struct GatheringPointBonusType;
struct GatheringPointName;
struct GatheringSubCategory;
struct GatheringType;
struct GcArmyExpedition;
struct GcArmyExpeditionMemberBonus;
struct GcArmyExpeditionType;
struct GcArmyMemberGrow;
struct GcArmyTraining;
struct GCScripShopCategory;
struct GCScripShopItem;
struct GCShop;
struct GCShopItemCategory;
struct GCSupplyDuty;
struct GCSupplyDutyReward;
struct GeneralAction;
struct GilShop;
struct GilShopItem;
struct GoldSaucerTextData;
struct GrandCompany;
struct GrandCompanyRank;
struct GuardianDeity;
struct GuildleveAssignment;
struct GuildOrderGuide;
struct GuildOrderOfficer;
struct HouseRetainerPose;
struct HousingFurniture;
struct HousingYardObject;
struct InstanceContent;
struct InstanceContentBuff;
struct InstanceContentTextData;
struct InstanceContentType;
struct Item;
struct ItemAction;
struct ItemFood;
struct ItemSearchCategory;
struct ItemSeries;
struct ItemSpecialBonus;
struct ItemUICategory;
struct JournalCategory;
struct JournalGenre;
struct JournalSection;
struct Leve;
struct LeveAssignmentType;
struct LeveClient;
struct Level;
struct LeveRewardItem;
struct LeveRewardItemGroup;
struct LeveVfx;
struct LogFilter;
struct LogKind;
struct LogKindCategoryText;
struct LogMessage;
struct MacroIcon;
struct MacroIconRedirectOld;
struct MainCommand;
struct MainCommandCategory;
struct Map;
struct MapMarker;
struct MapSymbol;
struct MasterpieceSupplyDuty;
struct MasterpieceSupplyMultiplier;
struct Materia;
struct MinionRace;
struct MinionRules;
struct MinionSkillType;
struct MobHuntTarget;
struct ModelChara;
struct MonsterNote;
struct MonsterNoteTarget;
struct Mount;
struct MountAction;
struct NpcEquip;
struct Omen;
struct OnlineStatus;
struct Orchestrion;
struct OrchestrionPath;
struct ParamGrow;
struct Pet;
struct PetAction;
struct Picture;
struct PlaceName;
struct Quest;
struct QuestRewardOther;
struct Race;
struct RacingChocoboItem;
struct RacingChocoboName;
struct RacingChocoboNameCategory;
struct RacingChocoboNameInfo;
struct RacingChocoboParam;
struct Recipe;
struct RecipeElement;
struct RecipeLevelTable;
struct RecipeNotebookList;
struct Relic;
struct Relic3;
struct RelicItem;
struct RelicNote;
struct RelicNoteCategory;
struct RetainerTask;
struct RetainerTaskNormal;
struct RetainerTaskParameter;
struct RetainerTaskRandom;
struct Salvage;
struct SatisfactionNpc;
struct SatisfactionSupply;
struct SatisfactionSupplyReward;
struct ScreenImage;
struct SecretRecipeBook;
struct SpearfishingItem;
struct SpearfishingNotebook;
struct SpecialShop;
struct SpecialShopItemCategory;
struct Stain;
struct Status;
struct Story;
struct SwitchTalk;
struct TerritoryType;
struct TextCommand;
struct Title;
struct Tomestones;
struct TomestonesItem;
struct TopicSelect;
struct Town;
struct Trait;
struct TraitRecast;
struct TraitTransient;
struct Tribe;
struct TripleTriad;
struct TripleTriadCard;
struct TripleTriadCardRarity;
struct TripleTriadCardResident;
struct TripleTriadCardType;
struct TripleTriadCompetition;
struct TripleTriadRule;
struct Tutorial;
struct TutorialDPS;
struct TutorialHealer;
struct TutorialTank;
struct Warp;
struct Weather;
struct WeatherGroup;
struct WeatherRate;
struct WeeklyBingoOrderData;
struct WeeklyBingoRewardData;
struct WeeklyBingoText;
struct WorldDCGroupType;


struct Achievement
{
   uint8_t achievementCategory;
   std::string name;
   std::string description;
   uint8_t points;
   uint16_t title;
   uint32_t item;
   uint16_t icon;
   uint8_t type;
   std::vector< int32_t > data;
   uint16_t order;

   Achievement( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AchievementCategory
{
   std::string name;
   uint8_t achievementKind;

   AchievementCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AchievementKind
{
   std::string name;

   AchievementKind( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Action
{
   std::string name;
   uint16_t icon;
   uint8_t actionCategory;
   int16_t actionTimelineUse;
   uint16_t actionTimelineHit;
   int8_t classJob;
   uint8_t classJobLevel;
   bool isRoleAction;
   int8_t range;
   bool canTargetSelf;
   bool canTargetParty;
   bool canTargetFriendly;
   bool canTargetHostile;
   bool targetArea;
   bool canTargetDead;
   uint8_t castType;
   uint8_t effectRange;
   uint8_t xAxisModifier;
   uint8_t costType;
   uint16_t cost;
   uint16_t actionCombo;
   bool preservesCombo;
   uint16_t cast100ms;
   uint16_t recast100ms;
   uint8_t cooldownGroup;
   int8_t attackType;
   uint8_t aspect;
   uint8_t actionProcStatus;
   uint16_t statusGainSelf;
   uint32_t actionData;
   uint8_t classJobCategory;
   bool affectsPosition;
   uint8_t omen;
   bool isPvP;

   Action( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ActionCategory
{
   std::string name;

   ActionCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ActionComboRoute
{
   std::string name;
   std::vector< uint16_t > action;

   ActionComboRoute( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ActionIndirection
{
   int32_t name;

   ActionIndirection( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ActionProcStatus
{
   uint16_t status;

   ActionProcStatus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ActionTimeline
{
   std::string key;

   ActionTimeline( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ActionTransient
{
   std::string description;

   ActionTransient( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Addon
{
   std::string text;

   Addon( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Adventure
{
   int32_t level;
   uint8_t emote;
   uint16_t minTime;
   uint16_t maxTime;
   int32_t placeName;
   int32_t iconList;
   int32_t iconDiscovered;
   std::string name;
   std::string impression;
   std::string description;
   int32_t iconUndiscovered;
   bool isInitial;

   Adventure( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AdventureExPhase
{
   uint32_t quest;
   uint32_t adventureBegin;
   uint32_t adventureEnd;

   AdventureExPhase( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AetherCurrent
{
   uint32_t quest;

   AetherCurrent( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AetherialWheel
{
   int32_t itemUnprimed;
   int32_t itemPrimed;
   uint8_t grade;
   uint8_t hoursRequired;

   AetherialWheel( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Aetheryte
{
   uint16_t placeName;
   uint16_t aethernetName;
   uint16_t territory;
   bool isAetheryte;
   uint8_t aethernetGroup;
   uint16_t map;
   int16_t aetherstreamX;
   int16_t aetherstreamY;

   Aetheryte( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AirshipExplorationLevel
{
   uint32_t expToNext;

   AirshipExplorationLevel( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AirshipExplorationLog
{
   std::string text;

   AirshipExplorationLog( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AirshipExplorationParamType
{
   std::string name;

   AirshipExplorationParamType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AirshipExplorationPart
{
   uint8_t rank;
   uint8_t components;
   int16_t surveillance;
   int16_t retrieval;
   int16_t speed;
   int16_t range;
   int16_t favor;
   uint8_t repairMaterials;

   AirshipExplorationPart( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AirshipExplorationPoint
{
   std::string name;
   std::string nameShort;
   uint8_t requiredLevel;
   uint16_t requiredFuel;
   uint16_t durationmin;
   uint8_t requiredSurveillance;
   uint32_t expReward;

   AirshipExplorationPoint( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeapon5
{
   int32_t item;
   uint8_t secondaryStatTotal;
   std::vector< uint8_t > parameter;

   AnimaWeapon5( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeapon5Param
{
   uint8_t baseParam;
   std::string name;

   AnimaWeapon5Param( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeapon5PatternGroup
{
   std::string name;

   AnimaWeapon5PatternGroup( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeapon5SpiritTalk
{
   int32_t dialogue;

   AnimaWeapon5SpiritTalk( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeapon5SpiritTalkParam
{
   std::string prologue;
   std::string epilogue;

   AnimaWeapon5SpiritTalkParam( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeapon5TradeItem
{
   uint32_t crystalSand;
   uint8_t qty;
   uint8_t category;

   AnimaWeapon5TradeItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeaponFUITalk
{
   int32_t dialogue;

   AnimaWeaponFUITalk( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeaponFUITalkParam
{
   std::string prologue;
   std::string epilogue;

   AnimaWeaponFUITalkParam( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeaponIcon
{
   int32_t hyperconductive;
   int32_t reborn;
   int32_t sharpened;
   int32_t zodiac;
   int32_t zodiacLux;

   AnimaWeaponIcon( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AnimaWeaponItem
{
   std::vector< uint32_t > item;

   AnimaWeaponItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AquariumFish
{
   uint8_t aquariumWater;
   uint8_t size;
   uint32_t item;

   AquariumFish( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AquariumWater
{
   std::string name;

   AquariumWater( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct AttackType
{
   std::string name;

   AttackType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Balloon
{
   std::string dialogue;

   Balloon( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BaseParam
{
   std::string name;
   std::string description;

   BaseParam( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BattleLeve
{
   std::vector< uint16_t > enemyLevel;
   std::vector< uint32_t > bNpcName;
   std::vector< int32_t > itemsInvolved;
   std::vector< uint8_t > itemsInvolvedQty;
   std::vector< uint8_t > itemDropRate;

   BattleLeve( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BeastRankBonus
{
   uint32_t item;
   std::vector< uint8_t > itemQuantity;

   BeastRankBonus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BeastReputationRank
{
   uint16_t requiredReputation;
   std::string name;

   BeastReputationRank( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BeastTribe
{
   uint8_t beastRankBonus;
   uint32_t iconReputation;
   uint32_t icon;
   std::string name;
   std::string nameRelation;

   BeastTribe( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Behavior
{
   uint16_t balloon;

   Behavior( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BGM
{
   std::string file;

   BGM( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BNpcAnnounceIcon
{
   uint32_t icon;

   BNpcAnnounceIcon( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BNpcBase
{
   float scale;
   uint16_t modelChara;
   uint16_t bNpcCustomize;
   uint16_t npcEquip;
   int32_t arrayEventHandler;

   BNpcBase( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BNpcCustomize
{
   uint8_t race;
   uint8_t gender;
   uint8_t bodyType;
   uint8_t height;
   uint8_t tribe;
   uint8_t face;
   uint8_t hairStyle;
   uint8_t hairHighlight;
   uint8_t skinColor;
   uint8_t eyeHeterochromia;
   uint8_t hairColor;
   uint8_t hairHighlightColor;
   uint8_t facialFeature;
   uint8_t facialFeatureColor;
   uint8_t eyebrows;
   uint8_t eyeColor;
   uint8_t eyeShape;
   uint8_t nose;
   uint8_t jaw;
   uint8_t mouth;
   uint8_t lipColor;
   uint8_t bustOrTone1;
   uint8_t extraFeature1;
   uint8_t extraFeature2OrBust;
   uint8_t facePaint;
   uint8_t facePaintColor;

   BNpcCustomize( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BNpcName
{
   std::string singular;
   std::string plural;

   BNpcName( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BuddyAction
{
   std::string name;
   std::string description;
   int32_t icon;
   int32_t iconStatus;

   BuddyAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BuddyEquip
{
   std::string singular;
   std::string plural;
   std::string name;
   int32_t modelTop;
   int32_t modelBody;
   int32_t modelLegs;
   uint8_t grandCompany;
   uint16_t iconHead;
   uint16_t iconBody;
   uint16_t iconLegs;

   BuddyEquip( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BuddyItem
{
   uint16_t name;

   BuddyItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BuddyRank
{
   uint32_t expRequired;

   BuddyRank( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct BuddySkill
{
   uint8_t buddyLevel;

   BuddySkill( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Cabinet
{
   int32_t item;
   uint16_t order;
   uint8_t category;

   Cabinet( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CabinetCategory
{
   uint8_t menuOrder;
   int32_t icon;
   int32_t category;

   CabinetCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Calendar
{
   std::vector< uint8_t > month;
   std::vector< uint8_t > day;

   Calendar( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChainBonus
{
   uint8_t bonus;
   uint8_t timeouts;

   ChainBonus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CharaMakeCustomize
{
   uint32_t icon;
   uint16_t data;

   CharaMakeCustomize( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CharaMakeType
{
   int32_t race;
   int32_t tribe;
   int8_t gender;
   std::vector< int32_t > facialFeatureIcon;

   CharaMakeType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboRace
{
   uint8_t chocoboRaceRank;
   uint8_t chocoboRaceTerritory;

   ChocoboRace( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboRaceAbility
{
   std::string name;
   std::string description;
   uint32_t icon;
   int8_t chocoboRaceAbilityType;
   uint8_t value;

   ChocoboRaceAbility( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboRaceAbilityType
{
   bool isActive;

   ChocoboRaceAbilityType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboRaceItem
{
   std::string name;
   std::string description;
   uint32_t icon;

   ChocoboRaceItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboRaceRank
{
   uint16_t ratingMin;
   uint16_t ratingMax;
   uint16_t name;
   uint16_t fee;
   int32_t icon;

   ChocoboRaceRank( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboRaceStatus
{
   int32_t status;

   ChocoboRaceStatus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboRaceTerritory
{
   uint16_t name;
   int32_t icon;

   ChocoboRaceTerritory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ChocoboTaxiStand
{
   std::string placeName;

   ChocoboTaxiStand( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ClassJob
{
   std::string name;
   std::string abbreviation;
   uint8_t classJobCategory;
   uint16_t modifierHitPoints;
   uint16_t modifierStrength;
   uint16_t modifierVitality;
   uint16_t modifierDexterity;
   uint16_t modifierIntelligence;
   uint16_t modifierMind;
   uint16_t modifierPiety;
   uint8_t classJobParent;
   std::string nameEnglish;
   int32_t itemStartingWeapon;
   uint16_t limitBreak1;
   uint16_t limitBreak2;
   uint16_t limitBreak3;
   uint32_t itemSoulCrystal;
   uint8_t startingLevel;

   ClassJob( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ClassJobCategory
{
   std::string name;
   bool aDV;
   bool gLA;
   bool pGL;
   bool mRD;
   bool lNC;
   bool aRC;
   bool cNJ;
   bool tHM;
   bool cRP;
   bool bSM;
   bool aRM;
   bool gSM;
   bool lTW;
   bool wVR;
   bool aLC;
   bool cUL;
   bool mIN;
   bool bTN;
   bool fSH;
   bool pLD;
   bool mNK;
   bool wAR;
   bool dRG;
   bool bRD;
   bool wHM;
   bool bLM;
   bool aCN;
   bool sMN;
   bool sCH;
   bool rOG;
   bool nIN;
   bool mCH;
   bool dRK;
   bool aST;

   ClassJobCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Companion
{
   std::string singular;
   std::string plural;
   uint8_t behavior;
   uint16_t icon;
   uint8_t cost;
   uint16_t hP;
   uint16_t skillAngle;
   uint8_t skillCost;
   uint8_t minionRace;

   Companion( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanionMove
{
   std::string name;

   CompanionMove( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanionTransient
{
   std::string description;
   std::string descriptionEnhanced;
   std::string tooltip;
   std::string specialActionName;
   std::string specialActionDescription;
   uint8_t attack;
   uint8_t defense;
   uint8_t speed;
   bool hasAreaAttack;
   bool strengthGate;
   bool strengthEye;
   bool strengthShield;
   bool strengthArcana;
   uint8_t minionSkillType;

   CompanionTransient( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyAction
{
   std::string name;
   std::string description;
   int32_t icon;
   uint8_t fCRank;
   uint32_t cost;
   uint8_t order;
   bool purchasable;

   CompanyAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftDraft
{
   std::string name;
   uint8_t companyCraftDraftCategory;
   uint32_t order;

   CompanyCraftDraft( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftDraftCategory
{
   std::string name;

   CompanyCraftDraftCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftManufactoryState
{
   std::string name;

   CompanyCraftManufactoryState( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftPart
{
   uint8_t companyCraftType;
   std::vector< uint16_t > companyCraftProcess;

   CompanyCraftPart( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftProcess
{

   CompanyCraftProcess( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftSequence
{
   int32_t resultItem;
   int32_t companyCraftDraftCategory;
   int32_t companyCraftType;
   int32_t companyCraftDraft;
   std::vector< uint16_t > companyCraftPart;

   CompanyCraftSequence( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftSupplyItem
{
   uint32_t item;

   CompanyCraftSupplyItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompanyCraftType
{
   std::string name;

   CompanyCraftType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompleteJournal
{
   std::string name;
   std::vector< int32_t > cutscene;

   CompleteJournal( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CompleteJournalCategory
{
   uint32_t firstQuest;
   uint32_t lastQuest;

   CompleteJournalCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ContentExAction
{
   uint32_t name;
   uint8_t charges;

   ContentExAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ContentFinderCondition
{
   uint8_t contentIndicator;
   uint16_t instanceContent;
   uint8_t contentMemberType;
   uint8_t classJobLevel;
   uint16_t itemLevelRequired;
   uint32_t icon;

   ContentFinderCondition( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ContentFinderConditionTransient
{
   std::string description;

   ContentFinderConditionTransient( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ContentMemberType
{
   uint8_t tanksPerParty;
   uint8_t healersPerParty;
   uint8_t meleesPerParty;
   uint8_t rangedPerParty;

   ContentMemberType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ContentRoulette
{
   std::string name;
   std::string description;
   std::string dutyType;
   bool isInDutyFinder;
   bool requireAllDuties;
   uint16_t itemLevelRequired;
   uint32_t icon;
   uint16_t rewardTomeA;
   uint16_t rewardTomeB;
   uint16_t rewardTomeC;
   uint8_t sortKey;
   uint8_t contentMemberType;

   ContentRoulette( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ContentType
{
   std::string name;
   uint32_t icon;
   uint32_t iconDutyFinder;

   ContentType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CraftAction
{
   std::string name;
   std::string description;
   uint16_t icon;
   int8_t classJob;
   uint8_t classJobCategory;
   uint8_t classJobLevel;
   uint32_t questRequirement;
   bool specialist;
   uint8_t cost;
   int32_t cRP;
   int32_t bSM;
   int32_t aRM;
   int32_t gSM;
   int32_t lTW;
   int32_t wVR;
   int32_t aLC;
   int32_t cUL;

   CraftAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CraftLeve
{
   int32_t leve;
   uint8_t repeats;

   CraftLeve( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CraftType
{
   std::string name;

   CraftType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Currency
{
   uint32_t item;
   uint32_t limit;

   Currency( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CustomTalk
{
   uint32_t iconActor;
   uint32_t iconMap;
   std::string name;
   std::vector< std::string > scriptInstruction;
   std::vector< uint32_t > scriptArg;
   bool text;

   CustomTalk( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Cutscene
{
   std::string path;

   Cutscene( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct CutScreenImage
{
   int32_t image;

   CutScreenImage( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DailySupplyItem
{

   DailySupplyItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DeepDungeonBan
{
   uint16_t screenImage;
   uint16_t logMessage;
   uint16_t name;

   DeepDungeonBan( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DeepDungeonDanger
{
   uint16_t screenImage;
   uint16_t logMessage;
   uint16_t name;

   DeepDungeonDanger( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DeepDungeonEquipment
{
   uint32_t icon;
   std::string singular;
   std::string plural;
   std::string name;
   std::string description;

   DeepDungeonEquipment( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DeepDungeonFloorEffectUI
{
   uint32_t icon;
   std::string name;
   std::string description;

   DeepDungeonFloorEffectUI( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DeepDungeonItem
{
   uint32_t icon;
   std::string singular;
   std::string plural;
   std::string name;
   std::string tooltip;
   uint32_t action;

   DeepDungeonItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DeepDungeonStatus
{
   uint16_t screenImage;
   uint16_t logMessage;
   uint16_t name;

   DeepDungeonStatus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DefaultTalk
{
   std::vector< uint16_t > actionTimelinePose;
   std::vector< std::string > text;

   DefaultTalk( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DeliveryQuest
{
   int32_t quest;

   DeliveryQuest( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DisposalShop
{
   std::string shopName;

   DisposalShop( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DisposalShopFilterType
{
   std::string category;

   DisposalShopFilterType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DisposalShopItem
{
   int32_t itemDisposed;
   int32_t itemReceived;
   uint32_t quantityReceived;

   DisposalShopItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DpsChallenge
{
   uint16_t playerLevel;
   uint16_t placeName;
   uint32_t icon;
   uint16_t order;
   std::string name;
   std::string description;

   DpsChallenge( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DpsChallengeOfficer
{
   uint32_t unlockQuest;
   std::vector< uint16_t > challengeName;

   DpsChallengeOfficer( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct DpsChallengeTransient
{
   uint16_t instanceContent;

   DpsChallengeTransient( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Emote
{
   std::string name;
   uint8_t emoteCategory;
   int32_t textCommand;
   uint16_t icon;
   uint16_t logMessageTargeted;
   uint16_t logMessageUntargeted;

   Emote( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EmoteCategory
{
   std::string name;

   EmoteCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ENpcBase
{
   std::vector< uint32_t > eNpcData;
   uint8_t race;
   uint8_t gender;
   uint8_t bodyType;
   uint8_t height;
   uint8_t tribe;
   uint8_t face;
   uint8_t hairStyle;
   uint8_t hairHighlight;
   uint8_t skinColor;
   uint8_t eyeHeterochromia;
   uint8_t hairColor;
   uint8_t hairHighlightColor;
   uint8_t facialFeature;
   uint8_t facialFeatureColor;
   uint8_t eyebrows;
   uint8_t eyeColor;
   uint8_t eyeShape;
   uint8_t nose;
   uint8_t jaw;
   uint8_t mouth;
   uint8_t lipColor;
   uint8_t bustOrTone1;
   uint8_t extraFeature1;
   uint8_t extraFeature2OrBust;
   uint8_t facePaint;
   uint8_t facePaintColor;
   uint16_t npcEquip;
   uint16_t behavior;
   uint64_t modelMainHand;
   uint8_t dyeMainHand;
   uint64_t modelOffHand;
   uint8_t dyeOffHand;
   uint32_t modelHead;
   uint8_t dyeHead;
   bool visor;
   uint32_t modelBody;
   uint8_t dyeBody;
   uint32_t modelHands;
   uint8_t dyeHands;
   uint32_t modelLegs;
   uint8_t dyeLegs;
   uint32_t modelFeet;
   uint8_t dyeFeet;
   uint32_t modelEars;
   uint8_t dyeEars;
   uint32_t modelNeck;
   uint8_t dyeNeck;
   uint32_t modelWrists;
   uint8_t dyeWrists;
   uint32_t modelLeftRing;
   uint8_t dyeLeftRing;
   uint32_t modelRightRing;
   uint8_t dyeRightRing;
   uint16_t balloon;

   ENpcBase( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ENpcResident
{
   std::string singular;
   std::string plural;
   std::string title;
   uint8_t map;

   ENpcResident( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EObj
{
   uint32_t data;

   EObj( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EquipRaceCategory
{
   bool hyur;
   bool elezen;
   bool lalafell;
   bool miqote;
   bool roegadyn;
   bool auRa;
   bool male;
   bool female;

   EquipRaceCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EquipSlotCategory
{
   int8_t mainHand;
   int8_t offHand;
   int8_t head;
   int8_t body;
   int8_t gloves;
   int8_t waist;
   int8_t legs;
   int8_t feet;
   int8_t ears;
   int8_t neck;
   int8_t wrists;
   int8_t fingerL;
   int8_t fingerR;
   int8_t soulCrystal;

   EquipSlotCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EventAction
{
   std::string name;
   uint16_t icon;

   EventAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EventIconPriority
{
   std::vector< uint32_t > icon;

   EventIconPriority( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EventIconType
{
   uint32_t npcIconAvailable;
   uint32_t mapIconAvailable;
   uint32_t npcIconInvalid;
   uint32_t mapIconInvalid;
   uint8_t iconRange;

   EventIconType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EventItem
{
   std::string singular;
   std::string plural;
   int8_t rarity;
   std::string name;
   uint16_t icon;
   uint8_t stackSize;
   uint32_t quest;

   EventItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct EventItemHelp
{
   std::string description;

   EventItemHelp( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ExVersion
{
   std::string name;

   ExVersion( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Fate
{
   uint8_t classJobLevel;
   uint8_t classJobLevelMax;
   uint32_t eventItem;
   uint32_t iconObjective;
   uint32_t iconMap;
   std::string name;
   std::string description;
   std::string objective;
   std::vector< std::string > statusText;

   Fate( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FCActivity
{
   std::string text;

   FCActivity( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FCAuthority
{
   std::string name;
   int32_t fCAuthorityCategory;

   FCAuthority( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FCAuthorityCategory
{
   std::string name;

   FCAuthorityCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FCChestName
{
   std::string name;

   FCChestName( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FccShop
{
   std::string name;

   FccShop( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FCHierarchy
{
   std::string name;

   FCHierarchy( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FCReputation
{
   uint32_t pointsToNext;
   uint32_t requiredPoints;
   std::string name;

   FCReputation( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FCRights
{
   std::string name;
   std::string description;
   uint16_t icon;
   uint8_t fCRank;

   FCRights( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FishingSpot
{
   uint8_t gatheringLevel;
   std::string bigFishOnReach;
   std::string bigFishOnEnd;
   uint8_t fishingSpotCategory;
   uint16_t territoryType;
   int16_t x;
   int16_t z;
   uint16_t radius;
   std::vector< int32_t > item;
   uint16_t placeName;

   FishingSpot( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct FishParameter
{
   std::string text;
   int32_t item;
   uint16_t gatheringItemLevel;
   int32_t territoryType;
   bool isFish;
   uint16_t gatheringSubCategory;

   FishParameter( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GardeningSeed
{
   uint32_t item;
   uint32_t icon;

   GardeningSeed( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringCondition
{
   std::string text;

   GatheringCondition( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringExp
{
   uint16_t exp;

   GatheringExp( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringItem
{
   int32_t item;
   uint16_t gatheringItemLevel;
   bool isHidden;

   GatheringItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringItemLevelConvertTable
{
   uint8_t gatheringItemLevel;
   uint8_t stars;

   GatheringItemLevelConvertTable( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringItemPoint
{
   uint32_t gatheringPoint;

   GatheringItemPoint( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringNotebookList
{
   std::vector< int32_t > gatheringItem;

   GatheringNotebookList( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringPoint
{
   int32_t gatheringPointBase;
   std::vector< uint16_t > gatheringPointBonus;
   uint16_t territoryType;
   uint16_t placeName;
   uint16_t gatheringSubCategory;

   GatheringPoint( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringPointBase
{
   int32_t gatheringType;
   uint8_t gatheringLevel;
   std::vector< int32_t > item;
   bool isLimited;

   GatheringPointBase( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringPointBonus
{
   uint8_t condition;
   uint16_t conditionValue;
   uint8_t bonusType;
   uint16_t bonusValue;

   GatheringPointBonus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringPointBonusType
{
   std::string text;

   GatheringPointBonusType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringPointName
{
   std::string singular;
   std::string plural;

   GatheringPointName( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringSubCategory
{
   int32_t item;
   std::string folkloreBook;

   GatheringSubCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GatheringType
{
   std::string name;
   int32_t iconMain;
   int32_t iconOff;

   GatheringType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GcArmyExpedition
{
   uint8_t requiredFlag;
   uint8_t unlockFlag;
   uint8_t requiredLevel;
   uint16_t requiredSeals;
   uint32_t rewardExperience;
   uint8_t percentBase;
   uint8_t gcArmyExpeditionType;
   std::string name;
   std::string description;

   GcArmyExpedition( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GcArmyExpeditionMemberBonus
{
   uint8_t race;
   uint8_t classJob;

   GcArmyExpeditionMemberBonus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GcArmyExpeditionType
{
   std::string name;

   GcArmyExpeditionType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GcArmyMemberGrow
{
   uint8_t classJob;
   int32_t classBook;

   GcArmyMemberGrow( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GcArmyTraining
{
   int8_t physicalBonus;
   int8_t mentalBonus;
   int8_t tacticalBonus;
   uint32_t experience;
   std::string name;
   std::string description;

   GcArmyTraining( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GCScripShopCategory
{
   int8_t grandCompany;
   int8_t tier;
   int8_t subCategory;

   GCScripShopCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GCScripShopItem
{
   int32_t item;
   int32_t requiredGrandCompanyRank;
   uint32_t costGCSeals;
   uint8_t sortKey;

   GCScripShopItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GCShop
{
   int8_t grandCompany;

   GCShop( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GCShopItemCategory
{
   std::string name;

   GCShopItemCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GCSupplyDuty
{

   GCSupplyDuty( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GCSupplyDutyReward
{
   uint32_t experienceSupply;
   uint32_t experienceProvisioning;
   uint32_t sealsExpertDelivery;
   uint32_t sealsSupply;
   uint32_t sealsProvisioning;

   GCSupplyDutyReward( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GeneralAction
{
   std::string name;
   std::string description;
   int32_t icon;

   GeneralAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GilShop
{
   std::string name;

   GilShop( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GilShopItem
{
   int32_t item;

   GilShopItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GoldSaucerTextData
{
   std::string text;

   GoldSaucerTextData( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GrandCompany
{
   std::string name;

   GrandCompany( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GrandCompanyRank
{
   uint8_t tier;
   uint8_t order;
   uint32_t maxSeals;
   uint32_t requiredSeals;
   int32_t iconMaelstrom;
   int32_t iconSerpents;
   int32_t iconFlames;
   int32_t questMaelstrom;
   int32_t questSerpents;
   int32_t questFlames;

   GrandCompanyRank( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GuardianDeity
{
   std::string name;
   std::string description;
   uint16_t icon;

   GuardianDeity( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GuildleveAssignment
{
   std::vector< uint32_t > quest;

   GuildleveAssignment( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GuildOrderGuide
{

   GuildOrderGuide( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct GuildOrderOfficer
{

   GuildOrderOfficer( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct HouseRetainerPose
{
   uint16_t actionTimeline;

   HouseRetainerPose( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct HousingFurniture
{
   uint16_t modelKey;
   uint8_t housingItemCategory;
   uint8_t usageType;
   uint32_t usageParameter;
   uint8_t housingLayoutLimit;
   uint32_t event;
   uint32_t item;
   bool destroyOnRemoval;

   HousingFurniture( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct HousingYardObject
{
   uint8_t modelKey;
   uint8_t housingItemCategory;
   uint8_t usageType;
   uint32_t usageParameter;
   uint8_t housingLayoutLimit;
   uint32_t event;
   uint32_t item;
   bool destroyOnRemoval;

   HousingYardObject( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct InstanceContent
{
   uint8_t instanceContentType;
   uint8_t weekRestriction;
   uint16_t timeLimitmin;
   uint8_t classJobLevelSync;
   std::string name;
   uint16_t bGM;
   uint16_t itemLevelSync;
   uint32_t territoryType;
   uint32_t icon;
   uint32_t instanceContentTextDataBossStart;
   uint32_t instanceContentTextDataBossEnd;
   uint32_t bNpcBaseBoss;
   uint32_t instanceContentTextDataObjectiveStart;
   uint32_t instanceContentTextDataObjectiveEnd;
   uint16_t sortKey;
   uint16_t newPlayerBonusA;
   uint16_t newPlayerBonusB;
   uint16_t finalBossCurrencyA;
   uint16_t finalBossCurrencyB;
   uint16_t finalBossCurrencyC;
   int32_t instanceContentBuff;
   uint8_t partyCondition;

   InstanceContent( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct InstanceContentBuff
{
   uint16_t echoStart;
   uint16_t echoDeath;

   InstanceContentBuff( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct InstanceContentTextData
{
   std::string text;

   InstanceContentTextData( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct InstanceContentType
{
   uint8_t sortKey;
   uint8_t contentType;

   InstanceContentType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Item
{
   std::string singular;
   std::string plural;
   int8_t startsWithVowel;
   std::string description;
   std::string name;
   uint16_t icon;
   uint16_t levelItem;
   uint8_t rarity;
   uint8_t filterGroup;
   uint32_t stain;
   uint8_t itemUICategory;
   uint8_t itemSearchCategory;
   uint8_t equipSlotCategory;
   uint32_t stackSize;
   bool isUnique;
   bool isUntradable;
   bool isIndisposable;
   uint32_t priceMid;
   uint32_t priceLow;
   bool canBeHq;
   bool isDyeable;
   bool isCrestWorthy;
   uint16_t itemAction;
   uint16_t cooldowns;
   uint8_t classJobRepair;
   int32_t itemRepair;
   int32_t itemGlamour;
   uint16_t salvage;
   bool isCollectable;
   uint16_t aetherialReduce;
   uint8_t levelEquip;
   uint8_t equipRestriction;
   uint8_t classJobCategory;
   uint8_t grandCompany;
   uint8_t itemSeries;
   uint8_t baseParamModifier;
   uint64_t modelMain;
   uint64_t modelSub;
   uint8_t classJobUse;
   uint16_t damagePhys;
   uint16_t damageMag;
   uint16_t delayms;
   uint16_t blockRate;
   uint16_t block;
   uint16_t defensePhys;
   uint16_t defenseMag;
   uint8_t itemSpecialBonus;
   uint8_t itemSpecialBonusParam;
   uint8_t materializeType;
   uint8_t materiaSlotCount;
   bool isAdvancedMeldingPermitted;
   bool isPvP;

   Item( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ItemAction
{
   uint16_t type;
   std::vector< uint16_t > data;
   std::vector< uint16_t > dataHQ;

   ItemAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ItemFood
{

   ItemFood( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ItemSearchCategory
{
   std::string name;
   int32_t icon;
   uint8_t category;
   uint8_t order;
   int8_t classJob;

   ItemSearchCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ItemSeries
{
   std::string name;

   ItemSeries( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ItemSpecialBonus
{
   std::string name;

   ItemSpecialBonus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ItemUICategory
{
   std::string name;
   int32_t icon;
   uint8_t orderMinor;
   uint8_t orderMajor;

   ItemUICategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct JournalCategory
{
   std::string name;
   uint8_t journalSection;

   JournalCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct JournalGenre
{
   int32_t icon;
   uint8_t journalCategory;
   std::string name;

   JournalGenre( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct JournalSection
{
   std::string name;

   JournalSection( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Leve
{
   std::string name;
   std::string description;
   int32_t leveClient;
   int32_t leveAssignmentType;
   uint16_t classJobLevel;
   uint8_t allowanceCost;
   int32_t placeNameStart;
   int32_t placeNameIssued;
   uint8_t classJobCategory;
   int32_t journalCategory;
   int32_t placeNameStartZone;
   int32_t iconCityState;
   int32_t dataId;
   uint32_t expReward;
   uint32_t gilReward;
   uint16_t leveRewardItem;
   uint8_t leveVfx;
   uint8_t leveVfxFrame;
   uint32_t levelLevemete;
   int32_t iconIssuer;
   uint32_t levelStart;
   uint16_t bGM;

   Leve( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LeveAssignmentType
{
   bool isFaction;
   int32_t icon;
   std::string name;

   LeveAssignmentType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LeveClient
{
   std::string name;

   LeveClient( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Level
{
   float x;
   float y;
   float z;
   float yaw;
   float radius;
   uint8_t type;
   uint32_t objectKey;
   uint16_t map;
   uint16_t territory;

   Level( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LeveRewardItem
{

   LeveRewardItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LeveRewardItemGroup
{

   LeveRewardItemGroup( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LeveVfx
{
   std::string effect;
   int32_t icon;

   LeveVfx( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LogFilter
{
   uint16_t logKind;
   std::string name;
   std::string example;

   LogFilter( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LogKind
{
   std::string format;
   std::string name;
   std::string example;
   uint8_t logKindCategoryText;

   LogKind( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LogKindCategoryText
{
   std::string text;

   LogKindCategoryText( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct LogMessage
{
   uint16_t logKind;
   std::string text;

   LogMessage( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MacroIcon
{
   int32_t icon;

   MacroIcon( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MacroIconRedirectOld
{
   uint32_t iconOld;
   int32_t iconNew;

   MacroIconRedirectOld( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MainCommand
{
   int32_t icon;
   uint8_t mainCommandCategory;
   std::string name;
   std::string description;

   MainCommand( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MainCommandCategory
{
   std::string name;

   MainCommandCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Map
{
   uint8_t hierarchy;
   uint16_t mapMarkerRange;
   std::string id;
   uint16_t sizeFactor;
   int16_t offsetX;
   int16_t offsetY;
   uint16_t placeNameRegion;
   uint16_t placeName;
   uint16_t placeNameSub;
   uint16_t territoryType;

   Map( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MapMarker
{
   int16_t x;
   int16_t y;
   uint16_t icon;
   uint16_t placeNameSubtext;
   uint8_t subtextOrientation;
   uint8_t type;
   uint8_t dataType;
   uint16_t dataKey;

   MapMarker( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MapSymbol
{
   int32_t icon;
   int32_t placeName;

   MapSymbol( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MasterpieceSupplyDuty
{
   uint8_t classJob;
   uint8_t classJobLevel;
   uint16_t rewardCurrency;

   MasterpieceSupplyDuty( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MasterpieceSupplyMultiplier
{
   std::vector< uint16_t > xpMultiplier;
   std::vector< uint16_t > currencyMultiplier;

   MasterpieceSupplyMultiplier( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Materia
{
   std::vector< int32_t > item;
   uint8_t baseParam;
   std::vector< uint8_t > value;

   Materia( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MinionRace
{
   std::string name;

   MinionRace( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MinionRules
{
   std::string rule;
   std::string description;

   MinionRules( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MinionSkillType
{
   std::string name;

   MinionSkillType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MobHuntTarget
{
   uint16_t name;
   uint16_t fATE;
   uint32_t icon;
   uint16_t territoryType;
   uint16_t placeName;

   MobHuntTarget( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ModelChara
{
   uint8_t type;
   uint16_t model;
   uint8_t base;
   uint8_t variant;

   ModelChara( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MonsterNote
{
   std::vector< uint16_t > monsterNoteTarget;
   std::vector< uint8_t > count;
   uint32_t reward;
   std::string name;

   MonsterNote( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MonsterNoteTarget
{
   uint16_t bNpcName;
   int32_t icon;

   MonsterNoteTarget( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Mount
{
   std::string singular;
   std::string plural;
   uint8_t flyingCondition;
   uint8_t isFlying;
   uint16_t rideBGM;
   uint16_t icon;

   Mount( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct MountAction
{
   std::vector< uint16_t > action;

   MountAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct NpcEquip
{
   uint64_t modelMainHand;
   uint8_t dyeMainHand;
   uint64_t modelOffHand;
   uint8_t dyeOffHand;
   uint32_t modelHead;
   uint8_t dyeHead;
   bool visor;
   uint32_t modelBody;
   uint8_t dyeBody;
   uint32_t modelHands;
   uint8_t dyeHands;
   uint32_t modelLegs;
   uint8_t dyeLegs;
   uint32_t modelFeet;
   uint8_t dyeFeet;
   uint32_t modelEars;
   uint8_t dyeEars;
   uint32_t modelNeck;
   uint8_t dyeNeck;
   uint32_t modelWrists;
   uint8_t dyeWrists;
   uint32_t modelLeftRing;
   uint8_t dyeLeftRing;
   uint32_t modelRightRing;
   uint8_t dyeRightRing;

   NpcEquip( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Omen
{
   std::string fileName;

   Omen( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct OnlineStatus
{
   std::string name;
   uint32_t icon;

   OnlineStatus( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Orchestrion
{
   std::string name;
   std::string description;

   Orchestrion( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct OrchestrionPath
{
   std::string file;

   OrchestrionPath( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ParamGrow
{
   int32_t expToNext;
   uint8_t additionalActions;
   int32_t mpModifier;
   int32_t baseSpeed;
   int32_t levelModifier;
   uint8_t questExpModifier;
   uint16_t hpModifier;
   int32_t huntingLogExpReward;

   ParamGrow( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Pet
{
   std::string name;

   Pet( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct PetAction
{
   std::string name;
   std::string description;
   uint16_t action;
   uint8_t pet;

   PetAction( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Picture
{
   int32_t item;
   int32_t image;
   int32_t signature;

   Picture( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct PlaceName
{
   std::string name;
   std::string nameNoArticle;

   PlaceName( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Quest
{
   std::string name;
   std::string id;
   uint8_t expansion;
   uint8_t classJobCategory0;
   uint16_t classJobLevel0;
   uint8_t questLevelOffset;
   uint8_t classJobCategory1;
   uint16_t classJobLevel1;
   uint8_t previousQuestJoin;
   uint32_t previousQuest0;
   uint32_t previousQuest1;
   uint32_t previousQuest2;
   uint8_t questLockJoin;
   std::vector< uint32_t > questLock;
   uint8_t classJobUnlock;
   uint8_t grandCompany;
   uint8_t grandCompanyRank;
   uint8_t instanceContentJoin;
   std::vector< uint32_t > instanceContent;
   uint16_t bellStart;
   uint16_t bellEnd;
   uint8_t beastTribe;
   uint8_t beastReputationRank;
   int32_t mountRequired;
   bool isHouseRequired;
   uint32_t eNpcResidentStart;
   uint32_t eNpcResidentEnd;
   bool isRepeatable;
   uint8_t repeatIntervalType;
   std::vector< std::string > scriptInstruction;
   std::vector< uint32_t > scriptArg;
   std::vector< uint32_t > level;
   uint8_t classJobRequired;
   uint16_t expFactor;
   uint32_t gilReward;
   uint16_t gCSeals;
   std::vector< uint8_t > itemCatalyst;
   std::vector< uint8_t > itemCountCatalyst;
   uint8_t itemRewardType;
   std::vector< uint32_t > itemReward0;
   std::vector< uint8_t > itemCountReward0;
   std::vector< uint8_t > stainReward0;
   std::vector< uint32_t > itemReward1;
   std::vector< uint8_t > itemCountReward1;
   std::vector< bool > isHQReward1;
   std::vector< uint8_t > stainReward1;
   uint8_t emoteReward;
   uint16_t actionReward;
   std::vector< uint8_t > generalActionReward;
   uint8_t otherReward;
   uint32_t instanceContentUnlock;
   uint8_t tomestoneReward;
   uint8_t tomestoneCountReward;
   uint8_t reputationReward;
   uint16_t placeName;
   uint8_t journalGenre;
   uint32_t icon;
   uint32_t iconSpecial;
   uint8_t eventIconType;
   uint16_t sortKey;

   Quest( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct QuestRewardOther
{
   std::string name;

   QuestRewardOther( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Race
{
   std::string masculine;
   std::string feminine;
   int32_t rSEMBody;
   int32_t rSEMHands;
   int32_t rSEMLegs;
   int32_t rSEMFeet;
   int32_t rSEFBody;
   int32_t rSEFHands;
   int32_t rSEFLegs;
   int32_t rSEFFeet;

   Race( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RacingChocoboItem
{
   int32_t item;
   uint8_t category;
   std::vector< uint8_t > param;

   RacingChocoboItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RacingChocoboName
{
   std::string name;

   RacingChocoboName( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RacingChocoboNameCategory
{
   uint8_t sortKey;
   std::string name;

   RacingChocoboNameCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RacingChocoboNameInfo
{
   uint8_t racingChocoboNameCategory;

   RacingChocoboNameInfo( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RacingChocoboParam
{
   std::string name;

   RacingChocoboParam( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Recipe
{
   int32_t craftType;
   uint16_t recipeLevelTable;
   int32_t itemResult;
   uint8_t amountResult;
   uint8_t recipeElement;
   bool isSecondary;
   uint16_t difficultyFactor;
   uint16_t qualityFactor;
   uint16_t durabilityFactor;
   uint16_t requiredCraftsmanship;
   uint16_t requiredControl;
   uint16_t quickSynthCraftsmanship;
   uint16_t quickSynthControl;
   uint16_t secretRecipeBook;
   bool canQuickSynth;
   bool canHq;
   int32_t statusRequired;
   int32_t itemRequired;
   bool isSpecializationRequired;

   Recipe( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RecipeElement
{
   std::string name;

   RecipeElement( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RecipeLevelTable
{
   uint8_t classJobLevel;
   uint8_t stars;
   uint16_t difficulty;
   int16_t quality;
   uint16_t durability;

   RecipeLevelTable( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RecipeNotebookList
{
   std::vector< int32_t > recipe;

   RecipeNotebookList( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Relic
{
   uint32_t itemAtma;
   uint32_t itemAnimus;
   int32_t icon;

   Relic( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Relic3
{
   uint32_t itemAnimus;
   uint32_t itemScroll;
   uint8_t materiaLimit;
   uint32_t itemNovus;
   int32_t icon;

   Relic3( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RelicItem
{
   uint32_t gladiatorItem;
   uint32_t pugilistItem;
   uint32_t marauderItem;
   uint32_t lancerItem;
   uint32_t archerItem;
   uint32_t conjurerItem;
   uint32_t thaumaturgeItem;
   uint32_t arcanistSMNItem;
   uint32_t arcanistSCHItem;
   uint32_t shieldItem;
   uint32_t rogueItem;

   RelicItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RelicNote
{
   uint32_t eventItem;
   std::vector< uint16_t > monsterNoteTargetNM;
   std::vector< uint16_t > leve;

   RelicNote( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RelicNoteCategory
{
   std::string text;

   RelicNoteCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RetainerTask
{
   bool isRandom;
   uint8_t classJobCategory;
   uint8_t retainerLevel;
   uint16_t retainerTaskParameter;
   uint16_t ventureCost;
   uint16_t maxTimemin;
   int32_t experience;
   uint16_t requiredItemLevel;
   uint16_t requiredGathering;
   uint16_t task;

   RetainerTask( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RetainerTaskNormal
{
   int32_t item;
   uint8_t quantity0;
   uint8_t quantity1;
   uint8_t quantity2;

   RetainerTaskNormal( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RetainerTaskParameter
{
   std::vector< int16_t > itemLevelDoW;
   std::vector< int16_t > gatheringDoL;
   std::vector< int16_t > gatheringFSH;

   RetainerTaskParameter( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct RetainerTaskRandom
{
   std::string name;
   int16_t requirement;

   RetainerTaskRandom( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Salvage
{
   uint16_t optimalSkill;

   Salvage( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SatisfactionNpc
{
   int32_t npc;
   int32_t questRequired;
   uint8_t deliveriesPerWeek;
   std::vector< int32_t > supplyIndex;
   std::vector< uint16_t > satisfactionRequired;
   int32_t icon;

   SatisfactionNpc( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SatisfactionSupply
{
   uint8_t slot;
   uint8_t probability;
   int32_t item;
   uint16_t collectabilityLow;
   uint16_t collectabilityMid;
   uint16_t collectabilityHigh;
   uint16_t reward;

   SatisfactionSupply( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SatisfactionSupplyReward
{
   uint16_t satisfactionLow;
   uint16_t satisfactionMid;
   uint16_t satisfactionHigh;
   uint16_t gilLow;
   uint16_t gilMid;
   uint16_t gilHigh;

   SatisfactionSupplyReward( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct ScreenImage
{
   uint32_t image;

   ScreenImage( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SecretRecipeBook
{
   int32_t item;
   std::string name;

   SecretRecipeBook( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SpearfishingItem
{
   std::string description;
   int32_t item;
   uint16_t gatheringItemLevel;
   uint16_t territoryType;
   bool isVisible;

   SpearfishingItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SpearfishingNotebook
{
   uint8_t gatheringLevel;
   int32_t territoryType;
   int16_t x;
   int16_t y;
   uint16_t radius;
   uint16_t placeName;
   uint16_t gatheringPointBase;

   SpearfishingNotebook( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SpecialShop
{
   std::string name;
   std::vector< int32_t > questItem;
   int32_t questShop;

   SpecialShop( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SpecialShopItemCategory
{
   std::string name;

   SpecialShopItemCategory( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Stain
{
   uint32_t color;
   uint8_t shade;
   std::string name;

   Stain( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Status
{
   std::string name;
   std::string description;
   uint16_t icon;
   uint8_t maxStacks;
   bool lockMovement;
   bool lockActions;
   bool lockControl;
   bool transfiguration;
   bool canDispel;
   bool isPermanent;
   bool inflictedByActor;
   bool isFcBuff;
   bool invisibility;

   Status( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Story
{

   Story( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct SwitchTalk
{
   std::vector< uint32_t > quest;
   std::vector< uint32_t > defaultTalk;

   SwitchTalk( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TerritoryType
{
   std::string name;
   std::string bg;
   uint16_t placeNameRegion;
   uint16_t placeNameZone;
   uint16_t placeName;
   uint16_t map;
   uint8_t weatherRate;
   int32_t aetheryte;

   TerritoryType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TextCommand
{
   std::string command;
   std::string shortCommand;
   std::string description;
   std::string alias;
   std::string shortAlias;

   TextCommand( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Title
{
   std::string masculine;
   std::string feminine;
   bool isPrefix;

   Title( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Tomestones
{
   uint16_t weeklyLimit;

   Tomestones( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TomestonesItem
{
   int32_t item;
   int32_t tomestones;

   TomestonesItem( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TopicSelect
{
   std::string name;

   TopicSelect( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Town
{
   std::string name;
   int32_t icon;

   Town( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Trait
{
   std::string name;
   int32_t icon;
   uint8_t classJob;
   uint8_t level;
   int16_t value;
   uint8_t classJobCategory;

   Trait( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TraitRecast
{
   uint16_t trait;
   uint16_t action;
   uint16_t timeds;

   TraitRecast( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TraitTransient
{
   std::string description;

   TraitTransient( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Tribe
{
   std::string masculine;
   std::string feminine;
   int8_t sTR;
   int8_t dEX;
   int8_t vIT;
   int8_t iNT;
   int8_t mND;
   int8_t pIE;

   Tribe( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TripleTriad
{
   std::vector< uint16_t > tripleTriadCardFixed;
   std::vector< uint16_t > tripleTriadCardVariable;
   std::vector< uint8_t > tripleTriadRule;
   bool usesRegionalRules;
   uint16_t fee;
   uint8_t previousQuestJoin;
   std::vector< uint32_t > previousQuest;
   uint16_t startTime;
   uint16_t endTime;
   uint32_t defaultTalkChallenge;
   uint32_t defaultTalkUnavailable;
   uint32_t defaultTalkNPCWin;
   uint32_t defaultTalkDraw;
   uint32_t defaultTalkPCWin;

   TripleTriad( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TripleTriadCard
{
   std::string name;
   int8_t startsWithVowel;
   std::string description;

   TripleTriadCard( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TripleTriadCardRarity
{
   uint8_t stars;

   TripleTriadCardRarity( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TripleTriadCardResident
{
   uint8_t top;
   uint8_t bottom;
   uint8_t left;
   uint8_t right;
   uint8_t tripleTriadCardRarity;
   uint8_t tripleTriadCardType;
   uint16_t saleValue;
   uint8_t sortKey;

   TripleTriadCardResident( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TripleTriadCardType
{
   std::string name;

   TripleTriadCardType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TripleTriadCompetition
{
   std::string name;

   TripleTriadCompetition( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TripleTriadRule
{
   std::string name;

   TripleTriadRule( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Tutorial
{
   uint32_t exp;
   uint32_t gil;
   uint32_t rewardTank;
   uint32_t rewardMelee;
   uint32_t rewardRanged;
   uint32_t objective;

   Tutorial( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TutorialDPS
{
   uint8_t objective;

   TutorialDPS( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TutorialHealer
{
   uint8_t objective;

   TutorialHealer( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct TutorialTank
{
   uint8_t objective;

   TutorialTank( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Warp
{
   uint32_t level;
   uint16_t placeName;
   uint32_t defaultTalk1;
   uint32_t defaultTalk2;
   uint32_t defaultTalk3;
   uint16_t warpCondition;
   uint16_t warpLogic;

   Warp( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct Weather
{
   int32_t icon;
   std::string name;
   std::string description;

   Weather( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct WeatherGroup
{
   int32_t weatherRate;

   WeatherGroup( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct WeatherRate
{

   WeatherRate( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct WeeklyBingoOrderData
{
   uint32_t data;
   uint8_t text;
   uint32_t icon;

   WeeklyBingoOrderData( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct WeeklyBingoRewardData
{
   uint32_t rewardItem2;
   bool rewardHQ2;
   uint16_t rewardQuantity2;

   WeeklyBingoRewardData( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct WeeklyBingoText
{
   std::string description;

   WeeklyBingoText( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};

struct WorldDCGroupType
{
   std::string name;

   WorldDCGroupType( uint32_t row_id, Core::Data::ExdDataGenerated* exdData );
};



  class ExdDataGenerated
  {
  public:
     ExdDataGenerated();
     ~ExdDataGenerated();

     bool init( const std::string& path );

     xiv::exd::Exd setupDatAccess( const std::string& name, xiv::exd::Language lang );

     template< class T >
     T getField( std::vector< xiv::exd::Field >& fields, uint32_t index )
     {
        return *boost::get< T >( &fields.at( index ) );
     }

     void loadIdList( xiv::exd::Exd& data, std::set< uint32_t >& outIdList );

     boost::shared_ptr< xiv::dat::GameData > m_data;
     boost::shared_ptr< xiv::exd::ExdData > m_exd_data;

     xiv::exd::Exd m_AchievementDat;
     xiv::exd::Exd m_AchievementCategoryDat;
     xiv::exd::Exd m_AchievementKindDat;
     xiv::exd::Exd m_ActionDat;
     xiv::exd::Exd m_ActionCategoryDat;
     xiv::exd::Exd m_ActionComboRouteDat;
     xiv::exd::Exd m_ActionIndirectionDat;
     xiv::exd::Exd m_ActionProcStatusDat;
     xiv::exd::Exd m_ActionTimelineDat;
     xiv::exd::Exd m_ActionTransientDat;
     xiv::exd::Exd m_AddonDat;
     xiv::exd::Exd m_AdventureDat;
     xiv::exd::Exd m_AdventureExPhaseDat;
     xiv::exd::Exd m_AetherCurrentDat;
     xiv::exd::Exd m_AetherialWheelDat;
     xiv::exd::Exd m_AetheryteDat;
     xiv::exd::Exd m_AirshipExplorationLevelDat;
     xiv::exd::Exd m_AirshipExplorationLogDat;
     xiv::exd::Exd m_AirshipExplorationParamTypeDat;
     xiv::exd::Exd m_AirshipExplorationPartDat;
     xiv::exd::Exd m_AirshipExplorationPointDat;
     xiv::exd::Exd m_AnimaWeapon5Dat;
     xiv::exd::Exd m_AnimaWeapon5ParamDat;
     xiv::exd::Exd m_AnimaWeapon5PatternGroupDat;
     xiv::exd::Exd m_AnimaWeapon5SpiritTalkDat;
     xiv::exd::Exd m_AnimaWeapon5SpiritTalkParamDat;
     xiv::exd::Exd m_AnimaWeapon5TradeItemDat;
     xiv::exd::Exd m_AnimaWeaponFUITalkDat;
     xiv::exd::Exd m_AnimaWeaponFUITalkParamDat;
     xiv::exd::Exd m_AnimaWeaponIconDat;
     xiv::exd::Exd m_AnimaWeaponItemDat;
     xiv::exd::Exd m_AquariumFishDat;
     xiv::exd::Exd m_AquariumWaterDat;
     xiv::exd::Exd m_AttackTypeDat;
     xiv::exd::Exd m_BalloonDat;
     xiv::exd::Exd m_BaseParamDat;
     xiv::exd::Exd m_BattleLeveDat;
     xiv::exd::Exd m_BeastRankBonusDat;
     xiv::exd::Exd m_BeastReputationRankDat;
     xiv::exd::Exd m_BeastTribeDat;
     xiv::exd::Exd m_BehaviorDat;
     xiv::exd::Exd m_BGMDat;
     xiv::exd::Exd m_BNpcAnnounceIconDat;
     xiv::exd::Exd m_BNpcBaseDat;
     xiv::exd::Exd m_BNpcCustomizeDat;
     xiv::exd::Exd m_BNpcNameDat;
     xiv::exd::Exd m_BuddyActionDat;
     xiv::exd::Exd m_BuddyEquipDat;
     xiv::exd::Exd m_BuddyItemDat;
     xiv::exd::Exd m_BuddyRankDat;
     xiv::exd::Exd m_BuddySkillDat;
     xiv::exd::Exd m_CabinetDat;
     xiv::exd::Exd m_CabinetCategoryDat;
     xiv::exd::Exd m_CalendarDat;
     xiv::exd::Exd m_ChainBonusDat;
     xiv::exd::Exd m_CharaMakeCustomizeDat;
     xiv::exd::Exd m_CharaMakeTypeDat;
     xiv::exd::Exd m_ChocoboRaceDat;
     xiv::exd::Exd m_ChocoboRaceAbilityDat;
     xiv::exd::Exd m_ChocoboRaceAbilityTypeDat;
     xiv::exd::Exd m_ChocoboRaceItemDat;
     xiv::exd::Exd m_ChocoboRaceRankDat;
     xiv::exd::Exd m_ChocoboRaceStatusDat;
     xiv::exd::Exd m_ChocoboRaceTerritoryDat;
     xiv::exd::Exd m_ChocoboTaxiStandDat;
     xiv::exd::Exd m_ClassJobDat;
     xiv::exd::Exd m_ClassJobCategoryDat;
     xiv::exd::Exd m_CompanionDat;
     xiv::exd::Exd m_CompanionMoveDat;
     xiv::exd::Exd m_CompanionTransientDat;
     xiv::exd::Exd m_CompanyActionDat;
     xiv::exd::Exd m_CompanyCraftDraftDat;
     xiv::exd::Exd m_CompanyCraftDraftCategoryDat;
     xiv::exd::Exd m_CompanyCraftManufactoryStateDat;
     xiv::exd::Exd m_CompanyCraftPartDat;
     xiv::exd::Exd m_CompanyCraftProcessDat;
     xiv::exd::Exd m_CompanyCraftSequenceDat;
     xiv::exd::Exd m_CompanyCraftSupplyItemDat;
     xiv::exd::Exd m_CompanyCraftTypeDat;
     xiv::exd::Exd m_CompleteJournalDat;
     xiv::exd::Exd m_CompleteJournalCategoryDat;
     xiv::exd::Exd m_ContentExActionDat;
     xiv::exd::Exd m_ContentFinderConditionDat;
     xiv::exd::Exd m_ContentFinderConditionTransientDat;
     xiv::exd::Exd m_ContentMemberTypeDat;
     xiv::exd::Exd m_ContentRouletteDat;
     xiv::exd::Exd m_ContentTypeDat;
     xiv::exd::Exd m_CraftActionDat;
     xiv::exd::Exd m_CraftLeveDat;
     xiv::exd::Exd m_CraftTypeDat;
     xiv::exd::Exd m_CurrencyDat;
     xiv::exd::Exd m_CustomTalkDat;
     xiv::exd::Exd m_CutsceneDat;
     xiv::exd::Exd m_CutScreenImageDat;
     xiv::exd::Exd m_DailySupplyItemDat;
     xiv::exd::Exd m_DeepDungeonBanDat;
     xiv::exd::Exd m_DeepDungeonDangerDat;
     xiv::exd::Exd m_DeepDungeonEquipmentDat;
     xiv::exd::Exd m_DeepDungeonFloorEffectUIDat;
     xiv::exd::Exd m_DeepDungeonItemDat;
     xiv::exd::Exd m_DeepDungeonStatusDat;
     xiv::exd::Exd m_DefaultTalkDat;
     xiv::exd::Exd m_DeliveryQuestDat;
     xiv::exd::Exd m_DisposalShopDat;
     xiv::exd::Exd m_DisposalShopFilterTypeDat;
     xiv::exd::Exd m_DisposalShopItemDat;
     xiv::exd::Exd m_DpsChallengeDat;
     xiv::exd::Exd m_DpsChallengeOfficerDat;
     xiv::exd::Exd m_DpsChallengeTransientDat;
     xiv::exd::Exd m_EmoteDat;
     xiv::exd::Exd m_EmoteCategoryDat;
     xiv::exd::Exd m_ENpcBaseDat;
     xiv::exd::Exd m_ENpcResidentDat;
     xiv::exd::Exd m_EObjDat;
     xiv::exd::Exd m_EquipRaceCategoryDat;
     xiv::exd::Exd m_EquipSlotCategoryDat;
     xiv::exd::Exd m_EventActionDat;
     xiv::exd::Exd m_EventIconPriorityDat;
     xiv::exd::Exd m_EventIconTypeDat;
     xiv::exd::Exd m_EventItemDat;
     xiv::exd::Exd m_EventItemHelpDat;
     xiv::exd::Exd m_ExVersionDat;
     xiv::exd::Exd m_FateDat;
     xiv::exd::Exd m_FCActivityDat;
     xiv::exd::Exd m_FCAuthorityDat;
     xiv::exd::Exd m_FCAuthorityCategoryDat;
     xiv::exd::Exd m_FCChestNameDat;
     xiv::exd::Exd m_FccShopDat;
     xiv::exd::Exd m_FCHierarchyDat;
     xiv::exd::Exd m_FCReputationDat;
     xiv::exd::Exd m_FCRightsDat;
     xiv::exd::Exd m_FishingSpotDat;
     xiv::exd::Exd m_FishParameterDat;
     xiv::exd::Exd m_GardeningSeedDat;
     xiv::exd::Exd m_GatheringConditionDat;
     xiv::exd::Exd m_GatheringExpDat;
     xiv::exd::Exd m_GatheringItemDat;
     xiv::exd::Exd m_GatheringItemLevelConvertTableDat;
     xiv::exd::Exd m_GatheringItemPointDat;
     xiv::exd::Exd m_GatheringNotebookListDat;
     xiv::exd::Exd m_GatheringPointDat;
     xiv::exd::Exd m_GatheringPointBaseDat;
     xiv::exd::Exd m_GatheringPointBonusDat;
     xiv::exd::Exd m_GatheringPointBonusTypeDat;
     xiv::exd::Exd m_GatheringPointNameDat;
     xiv::exd::Exd m_GatheringSubCategoryDat;
     xiv::exd::Exd m_GatheringTypeDat;
     xiv::exd::Exd m_GcArmyExpeditionDat;
     xiv::exd::Exd m_GcArmyExpeditionMemberBonusDat;
     xiv::exd::Exd m_GcArmyExpeditionTypeDat;
     xiv::exd::Exd m_GcArmyMemberGrowDat;
     xiv::exd::Exd m_GcArmyTrainingDat;
     xiv::exd::Exd m_GCScripShopCategoryDat;
     xiv::exd::Exd m_GCScripShopItemDat;
     xiv::exd::Exd m_GCShopDat;
     xiv::exd::Exd m_GCShopItemCategoryDat;
     xiv::exd::Exd m_GCSupplyDutyDat;
     xiv::exd::Exd m_GCSupplyDutyRewardDat;
     xiv::exd::Exd m_GeneralActionDat;
     xiv::exd::Exd m_GilShopDat;
     xiv::exd::Exd m_GilShopItemDat;
     xiv::exd::Exd m_GoldSaucerTextDataDat;
     xiv::exd::Exd m_GrandCompanyDat;
     xiv::exd::Exd m_GrandCompanyRankDat;
     xiv::exd::Exd m_GuardianDeityDat;
     xiv::exd::Exd m_GuildleveAssignmentDat;
     xiv::exd::Exd m_GuildOrderGuideDat;
     xiv::exd::Exd m_GuildOrderOfficerDat;
     xiv::exd::Exd m_HouseRetainerPoseDat;
     xiv::exd::Exd m_HousingFurnitureDat;
     xiv::exd::Exd m_HousingYardObjectDat;
     xiv::exd::Exd m_InstanceContentDat;
     xiv::exd::Exd m_InstanceContentBuffDat;
     xiv::exd::Exd m_InstanceContentTextDataDat;
     xiv::exd::Exd m_InstanceContentTypeDat;
     xiv::exd::Exd m_ItemDat;
     xiv::exd::Exd m_ItemActionDat;
     xiv::exd::Exd m_ItemFoodDat;
     xiv::exd::Exd m_ItemSearchCategoryDat;
     xiv::exd::Exd m_ItemSeriesDat;
     xiv::exd::Exd m_ItemSpecialBonusDat;
     xiv::exd::Exd m_ItemUICategoryDat;
     xiv::exd::Exd m_JournalCategoryDat;
     xiv::exd::Exd m_JournalGenreDat;
     xiv::exd::Exd m_JournalSectionDat;
     xiv::exd::Exd m_LeveDat;
     xiv::exd::Exd m_LeveAssignmentTypeDat;
     xiv::exd::Exd m_LeveClientDat;
     xiv::exd::Exd m_LevelDat;
     xiv::exd::Exd m_LeveRewardItemDat;
     xiv::exd::Exd m_LeveRewardItemGroupDat;
     xiv::exd::Exd m_LeveVfxDat;
     xiv::exd::Exd m_LogFilterDat;
     xiv::exd::Exd m_LogKindDat;
     xiv::exd::Exd m_LogKindCategoryTextDat;
     xiv::exd::Exd m_LogMessageDat;
     xiv::exd::Exd m_MacroIconDat;
     xiv::exd::Exd m_MacroIconRedirectOldDat;
     xiv::exd::Exd m_MainCommandDat;
     xiv::exd::Exd m_MainCommandCategoryDat;
     xiv::exd::Exd m_MapDat;
     xiv::exd::Exd m_MapMarkerDat;
     xiv::exd::Exd m_MapSymbolDat;
     xiv::exd::Exd m_MasterpieceSupplyDutyDat;
     xiv::exd::Exd m_MasterpieceSupplyMultiplierDat;
     xiv::exd::Exd m_MateriaDat;
     xiv::exd::Exd m_MinionRaceDat;
     xiv::exd::Exd m_MinionRulesDat;
     xiv::exd::Exd m_MinionSkillTypeDat;
     xiv::exd::Exd m_MobHuntTargetDat;
     xiv::exd::Exd m_ModelCharaDat;
     xiv::exd::Exd m_MonsterNoteDat;
     xiv::exd::Exd m_MonsterNoteTargetDat;
     xiv::exd::Exd m_MountDat;
     xiv::exd::Exd m_MountActionDat;
     xiv::exd::Exd m_NpcEquipDat;
     xiv::exd::Exd m_OmenDat;
     xiv::exd::Exd m_OnlineStatusDat;
     xiv::exd::Exd m_OrchestrionDat;
     xiv::exd::Exd m_OrchestrionPathDat;
     xiv::exd::Exd m_ParamGrowDat;
     xiv::exd::Exd m_PetDat;
     xiv::exd::Exd m_PetActionDat;
     xiv::exd::Exd m_PictureDat;
     xiv::exd::Exd m_PlaceNameDat;
     xiv::exd::Exd m_QuestDat;
     xiv::exd::Exd m_QuestRewardOtherDat;
     xiv::exd::Exd m_RaceDat;
     xiv::exd::Exd m_RacingChocoboItemDat;
     xiv::exd::Exd m_RacingChocoboNameDat;
     xiv::exd::Exd m_RacingChocoboNameCategoryDat;
     xiv::exd::Exd m_RacingChocoboNameInfoDat;
     xiv::exd::Exd m_RacingChocoboParamDat;
     xiv::exd::Exd m_RecipeDat;
     xiv::exd::Exd m_RecipeElementDat;
     xiv::exd::Exd m_RecipeLevelTableDat;
     xiv::exd::Exd m_RecipeNotebookListDat;
     xiv::exd::Exd m_RelicDat;
     xiv::exd::Exd m_Relic3Dat;
     xiv::exd::Exd m_RelicItemDat;
     xiv::exd::Exd m_RelicNoteDat;
     xiv::exd::Exd m_RelicNoteCategoryDat;
     xiv::exd::Exd m_RetainerTaskDat;
     xiv::exd::Exd m_RetainerTaskNormalDat;
     xiv::exd::Exd m_RetainerTaskParameterDat;
     xiv::exd::Exd m_RetainerTaskRandomDat;
     xiv::exd::Exd m_SalvageDat;
     xiv::exd::Exd m_SatisfactionNpcDat;
     xiv::exd::Exd m_SatisfactionSupplyDat;
     xiv::exd::Exd m_SatisfactionSupplyRewardDat;
     xiv::exd::Exd m_ScreenImageDat;
     xiv::exd::Exd m_SecretRecipeBookDat;
     xiv::exd::Exd m_SpearfishingItemDat;
     xiv::exd::Exd m_SpearfishingNotebookDat;
     xiv::exd::Exd m_SpecialShopDat;
     xiv::exd::Exd m_SpecialShopItemCategoryDat;
     xiv::exd::Exd m_StainDat;
     xiv::exd::Exd m_StatusDat;
     xiv::exd::Exd m_StoryDat;
     xiv::exd::Exd m_SwitchTalkDat;
     xiv::exd::Exd m_TerritoryTypeDat;
     xiv::exd::Exd m_TextCommandDat;
     xiv::exd::Exd m_TitleDat;
     xiv::exd::Exd m_TomestonesDat;
     xiv::exd::Exd m_TomestonesItemDat;
     xiv::exd::Exd m_TopicSelectDat;
     xiv::exd::Exd m_TownDat;
     xiv::exd::Exd m_TraitDat;
     xiv::exd::Exd m_TraitRecastDat;
     xiv::exd::Exd m_TraitTransientDat;
     xiv::exd::Exd m_TribeDat;
     xiv::exd::Exd m_TripleTriadDat;
     xiv::exd::Exd m_TripleTriadCardDat;
     xiv::exd::Exd m_TripleTriadCardRarityDat;
     xiv::exd::Exd m_TripleTriadCardResidentDat;
     xiv::exd::Exd m_TripleTriadCardTypeDat;
     xiv::exd::Exd m_TripleTriadCompetitionDat;
     xiv::exd::Exd m_TripleTriadRuleDat;
     xiv::exd::Exd m_TutorialDat;
     xiv::exd::Exd m_TutorialDPSDat;
     xiv::exd::Exd m_TutorialHealerDat;
     xiv::exd::Exd m_TutorialTankDat;
     xiv::exd::Exd m_WarpDat;
     xiv::exd::Exd m_WeatherDat;
     xiv::exd::Exd m_WeatherGroupDat;
     xiv::exd::Exd m_WeatherRateDat;
     xiv::exd::Exd m_WeeklyBingoOrderDataDat;
     xiv::exd::Exd m_WeeklyBingoRewardDataDat;
     xiv::exd::Exd m_WeeklyBingoTextDat;
     xiv::exd::Exd m_WorldDCGroupTypeDat;


     boost::shared_ptr< Achievement > getAchievement( uint32_t AchievementId );
     boost::shared_ptr< AchievementCategory > getAchievementCategory( uint32_t AchievementCategoryId );
     boost::shared_ptr< AchievementKind > getAchievementKind( uint32_t AchievementKindId );
     boost::shared_ptr< Action > getAction( uint32_t ActionId );
     boost::shared_ptr< ActionCategory > getActionCategory( uint32_t ActionCategoryId );
     boost::shared_ptr< ActionComboRoute > getActionComboRoute( uint32_t ActionComboRouteId );
     boost::shared_ptr< ActionIndirection > getActionIndirection( uint32_t ActionIndirectionId );
     boost::shared_ptr< ActionProcStatus > getActionProcStatus( uint32_t ActionProcStatusId );
     boost::shared_ptr< ActionTimeline > getActionTimeline( uint32_t ActionTimelineId );
     boost::shared_ptr< ActionTransient > getActionTransient( uint32_t ActionTransientId );
     boost::shared_ptr< Addon > getAddon( uint32_t AddonId );
     boost::shared_ptr< Adventure > getAdventure( uint32_t AdventureId );
     boost::shared_ptr< AdventureExPhase > getAdventureExPhase( uint32_t AdventureExPhaseId );
     boost::shared_ptr< AetherCurrent > getAetherCurrent( uint32_t AetherCurrentId );
     boost::shared_ptr< AetherialWheel > getAetherialWheel( uint32_t AetherialWheelId );
     boost::shared_ptr< Aetheryte > getAetheryte( uint32_t AetheryteId );
     boost::shared_ptr< AirshipExplorationLevel > getAirshipExplorationLevel( uint32_t AirshipExplorationLevelId );
     boost::shared_ptr< AirshipExplorationLog > getAirshipExplorationLog( uint32_t AirshipExplorationLogId );
     boost::shared_ptr< AirshipExplorationParamType > getAirshipExplorationParamType( uint32_t AirshipExplorationParamTypeId );
     boost::shared_ptr< AirshipExplorationPart > getAirshipExplorationPart( uint32_t AirshipExplorationPartId );
     boost::shared_ptr< AirshipExplorationPoint > getAirshipExplorationPoint( uint32_t AirshipExplorationPointId );
     boost::shared_ptr< AnimaWeapon5 > getAnimaWeapon5( uint32_t AnimaWeapon5Id );
     boost::shared_ptr< AnimaWeapon5Param > getAnimaWeapon5Param( uint32_t AnimaWeapon5ParamId );
     boost::shared_ptr< AnimaWeapon5PatternGroup > getAnimaWeapon5PatternGroup( uint32_t AnimaWeapon5PatternGroupId );
     boost::shared_ptr< AnimaWeapon5SpiritTalk > getAnimaWeapon5SpiritTalk( uint32_t AnimaWeapon5SpiritTalkId );
     boost::shared_ptr< AnimaWeapon5SpiritTalkParam > getAnimaWeapon5SpiritTalkParam( uint32_t AnimaWeapon5SpiritTalkParamId );
     boost::shared_ptr< AnimaWeapon5TradeItem > getAnimaWeapon5TradeItem( uint32_t AnimaWeapon5TradeItemId );
     boost::shared_ptr< AnimaWeaponFUITalk > getAnimaWeaponFUITalk( uint32_t AnimaWeaponFUITalkId );
     boost::shared_ptr< AnimaWeaponFUITalkParam > getAnimaWeaponFUITalkParam( uint32_t AnimaWeaponFUITalkParamId );
     boost::shared_ptr< AnimaWeaponIcon > getAnimaWeaponIcon( uint32_t AnimaWeaponIconId );
     boost::shared_ptr< AnimaWeaponItem > getAnimaWeaponItem( uint32_t AnimaWeaponItemId );
     boost::shared_ptr< AquariumFish > getAquariumFish( uint32_t AquariumFishId );
     boost::shared_ptr< AquariumWater > getAquariumWater( uint32_t AquariumWaterId );
     boost::shared_ptr< AttackType > getAttackType( uint32_t AttackTypeId );
     boost::shared_ptr< Balloon > getBalloon( uint32_t BalloonId );
     boost::shared_ptr< BaseParam > getBaseParam( uint32_t BaseParamId );
     boost::shared_ptr< BattleLeve > getBattleLeve( uint32_t BattleLeveId );
     boost::shared_ptr< BeastRankBonus > getBeastRankBonus( uint32_t BeastRankBonusId );
     boost::shared_ptr< BeastReputationRank > getBeastReputationRank( uint32_t BeastReputationRankId );
     boost::shared_ptr< BeastTribe > getBeastTribe( uint32_t BeastTribeId );
     boost::shared_ptr< Behavior > getBehavior( uint32_t BehaviorId );
     boost::shared_ptr< BGM > getBGM( uint32_t BGMId );
     boost::shared_ptr< BNpcAnnounceIcon > getBNpcAnnounceIcon( uint32_t BNpcAnnounceIconId );
     boost::shared_ptr< BNpcBase > getBNpcBase( uint32_t BNpcBaseId );
     boost::shared_ptr< BNpcCustomize > getBNpcCustomize( uint32_t BNpcCustomizeId );
     boost::shared_ptr< BNpcName > getBNpcName( uint32_t BNpcNameId );
     boost::shared_ptr< BuddyAction > getBuddyAction( uint32_t BuddyActionId );
     boost::shared_ptr< BuddyEquip > getBuddyEquip( uint32_t BuddyEquipId );
     boost::shared_ptr< BuddyItem > getBuddyItem( uint32_t BuddyItemId );
     boost::shared_ptr< BuddyRank > getBuddyRank( uint32_t BuddyRankId );
     boost::shared_ptr< BuddySkill > getBuddySkill( uint32_t BuddySkillId );
     boost::shared_ptr< Cabinet > getCabinet( uint32_t CabinetId );
     boost::shared_ptr< CabinetCategory > getCabinetCategory( uint32_t CabinetCategoryId );
     boost::shared_ptr< Calendar > getCalendar( uint32_t CalendarId );
     boost::shared_ptr< ChainBonus > getChainBonus( uint32_t ChainBonusId );
     boost::shared_ptr< CharaMakeCustomize > getCharaMakeCustomize( uint32_t CharaMakeCustomizeId );
     boost::shared_ptr< CharaMakeType > getCharaMakeType( uint32_t CharaMakeTypeId );
     boost::shared_ptr< ChocoboRace > getChocoboRace( uint32_t ChocoboRaceId );
     boost::shared_ptr< ChocoboRaceAbility > getChocoboRaceAbility( uint32_t ChocoboRaceAbilityId );
     boost::shared_ptr< ChocoboRaceAbilityType > getChocoboRaceAbilityType( uint32_t ChocoboRaceAbilityTypeId );
     boost::shared_ptr< ChocoboRaceItem > getChocoboRaceItem( uint32_t ChocoboRaceItemId );
     boost::shared_ptr< ChocoboRaceRank > getChocoboRaceRank( uint32_t ChocoboRaceRankId );
     boost::shared_ptr< ChocoboRaceStatus > getChocoboRaceStatus( uint32_t ChocoboRaceStatusId );
     boost::shared_ptr< ChocoboRaceTerritory > getChocoboRaceTerritory( uint32_t ChocoboRaceTerritoryId );
     boost::shared_ptr< ChocoboTaxiStand > getChocoboTaxiStand( uint32_t ChocoboTaxiStandId );
     boost::shared_ptr< ClassJob > getClassJob( uint32_t ClassJobId );
     boost::shared_ptr< ClassJobCategory > getClassJobCategory( uint32_t ClassJobCategoryId );
     boost::shared_ptr< Companion > getCompanion( uint32_t CompanionId );
     boost::shared_ptr< CompanionMove > getCompanionMove( uint32_t CompanionMoveId );
     boost::shared_ptr< CompanionTransient > getCompanionTransient( uint32_t CompanionTransientId );
     boost::shared_ptr< CompanyAction > getCompanyAction( uint32_t CompanyActionId );
     boost::shared_ptr< CompanyCraftDraft > getCompanyCraftDraft( uint32_t CompanyCraftDraftId );
     boost::shared_ptr< CompanyCraftDraftCategory > getCompanyCraftDraftCategory( uint32_t CompanyCraftDraftCategoryId );
     boost::shared_ptr< CompanyCraftManufactoryState > getCompanyCraftManufactoryState( uint32_t CompanyCraftManufactoryStateId );
     boost::shared_ptr< CompanyCraftPart > getCompanyCraftPart( uint32_t CompanyCraftPartId );
     boost::shared_ptr< CompanyCraftProcess > getCompanyCraftProcess( uint32_t CompanyCraftProcessId );
     boost::shared_ptr< CompanyCraftSequence > getCompanyCraftSequence( uint32_t CompanyCraftSequenceId );
     boost::shared_ptr< CompanyCraftSupplyItem > getCompanyCraftSupplyItem( uint32_t CompanyCraftSupplyItemId );
     boost::shared_ptr< CompanyCraftType > getCompanyCraftType( uint32_t CompanyCraftTypeId );
     boost::shared_ptr< CompleteJournal > getCompleteJournal( uint32_t CompleteJournalId );
     boost::shared_ptr< CompleteJournalCategory > getCompleteJournalCategory( uint32_t CompleteJournalCategoryId );
     boost::shared_ptr< ContentExAction > getContentExAction( uint32_t ContentExActionId );
     boost::shared_ptr< ContentFinderCondition > getContentFinderCondition( uint32_t ContentFinderConditionId );
     boost::shared_ptr< ContentFinderConditionTransient > getContentFinderConditionTransient( uint32_t ContentFinderConditionTransientId );
     boost::shared_ptr< ContentMemberType > getContentMemberType( uint32_t ContentMemberTypeId );
     boost::shared_ptr< ContentRoulette > getContentRoulette( uint32_t ContentRouletteId );
     boost::shared_ptr< ContentType > getContentType( uint32_t ContentTypeId );
     boost::shared_ptr< CraftAction > getCraftAction( uint32_t CraftActionId );
     boost::shared_ptr< CraftLeve > getCraftLeve( uint32_t CraftLeveId );
     boost::shared_ptr< CraftType > getCraftType( uint32_t CraftTypeId );
     boost::shared_ptr< Currency > getCurrency( uint32_t CurrencyId );
     boost::shared_ptr< CustomTalk > getCustomTalk( uint32_t CustomTalkId );
     boost::shared_ptr< Cutscene > getCutscene( uint32_t CutsceneId );
     boost::shared_ptr< CutScreenImage > getCutScreenImage( uint32_t CutScreenImageId );
     boost::shared_ptr< DailySupplyItem > getDailySupplyItem( uint32_t DailySupplyItemId );
     boost::shared_ptr< DeepDungeonBan > getDeepDungeonBan( uint32_t DeepDungeonBanId );
     boost::shared_ptr< DeepDungeonDanger > getDeepDungeonDanger( uint32_t DeepDungeonDangerId );
     boost::shared_ptr< DeepDungeonEquipment > getDeepDungeonEquipment( uint32_t DeepDungeonEquipmentId );
     boost::shared_ptr< DeepDungeonFloorEffectUI > getDeepDungeonFloorEffectUI( uint32_t DeepDungeonFloorEffectUIId );
     boost::shared_ptr< DeepDungeonItem > getDeepDungeonItem( uint32_t DeepDungeonItemId );
     boost::shared_ptr< DeepDungeonStatus > getDeepDungeonStatus( uint32_t DeepDungeonStatusId );
     boost::shared_ptr< DefaultTalk > getDefaultTalk( uint32_t DefaultTalkId );
     boost::shared_ptr< DeliveryQuest > getDeliveryQuest( uint32_t DeliveryQuestId );
     boost::shared_ptr< DisposalShop > getDisposalShop( uint32_t DisposalShopId );
     boost::shared_ptr< DisposalShopFilterType > getDisposalShopFilterType( uint32_t DisposalShopFilterTypeId );
     boost::shared_ptr< DisposalShopItem > getDisposalShopItem( uint32_t DisposalShopItemId );
     boost::shared_ptr< DpsChallenge > getDpsChallenge( uint32_t DpsChallengeId );
     boost::shared_ptr< DpsChallengeOfficer > getDpsChallengeOfficer( uint32_t DpsChallengeOfficerId );
     boost::shared_ptr< DpsChallengeTransient > getDpsChallengeTransient( uint32_t DpsChallengeTransientId );
     boost::shared_ptr< Emote > getEmote( uint32_t EmoteId );
     boost::shared_ptr< EmoteCategory > getEmoteCategory( uint32_t EmoteCategoryId );
     boost::shared_ptr< ENpcBase > getENpcBase( uint32_t ENpcBaseId );
     boost::shared_ptr< ENpcResident > getENpcResident( uint32_t ENpcResidentId );
     boost::shared_ptr< EObj > getEObj( uint32_t EObjId );
     boost::shared_ptr< EquipRaceCategory > getEquipRaceCategory( uint32_t EquipRaceCategoryId );
     boost::shared_ptr< EquipSlotCategory > getEquipSlotCategory( uint32_t EquipSlotCategoryId );
     boost::shared_ptr< EventAction > getEventAction( uint32_t EventActionId );
     boost::shared_ptr< EventIconPriority > getEventIconPriority( uint32_t EventIconPriorityId );
     boost::shared_ptr< EventIconType > getEventIconType( uint32_t EventIconTypeId );
     boost::shared_ptr< EventItem > getEventItem( uint32_t EventItemId );
     boost::shared_ptr< EventItemHelp > getEventItemHelp( uint32_t EventItemHelpId );
     boost::shared_ptr< ExVersion > getExVersion( uint32_t ExVersionId );
     boost::shared_ptr< Fate > getFate( uint32_t FateId );
     boost::shared_ptr< FCActivity > getFCActivity( uint32_t FCActivityId );
     boost::shared_ptr< FCAuthority > getFCAuthority( uint32_t FCAuthorityId );
     boost::shared_ptr< FCAuthorityCategory > getFCAuthorityCategory( uint32_t FCAuthorityCategoryId );
     boost::shared_ptr< FCChestName > getFCChestName( uint32_t FCChestNameId );
     boost::shared_ptr< FccShop > getFccShop( uint32_t FccShopId );
     boost::shared_ptr< FCHierarchy > getFCHierarchy( uint32_t FCHierarchyId );
     boost::shared_ptr< FCReputation > getFCReputation( uint32_t FCReputationId );
     boost::shared_ptr< FCRights > getFCRights( uint32_t FCRightsId );
     boost::shared_ptr< FishingSpot > getFishingSpot( uint32_t FishingSpotId );
     boost::shared_ptr< FishParameter > getFishParameter( uint32_t FishParameterId );
     boost::shared_ptr< GardeningSeed > getGardeningSeed( uint32_t GardeningSeedId );
     boost::shared_ptr< GatheringCondition > getGatheringCondition( uint32_t GatheringConditionId );
     boost::shared_ptr< GatheringExp > getGatheringExp( uint32_t GatheringExpId );
     boost::shared_ptr< GatheringItem > getGatheringItem( uint32_t GatheringItemId );
     boost::shared_ptr< GatheringItemLevelConvertTable > getGatheringItemLevelConvertTable( uint32_t GatheringItemLevelConvertTableId );
     boost::shared_ptr< GatheringItemPoint > getGatheringItemPoint( uint32_t GatheringItemPointId );
     boost::shared_ptr< GatheringNotebookList > getGatheringNotebookList( uint32_t GatheringNotebookListId );
     boost::shared_ptr< GatheringPoint > getGatheringPoint( uint32_t GatheringPointId );
     boost::shared_ptr< GatheringPointBase > getGatheringPointBase( uint32_t GatheringPointBaseId );
     boost::shared_ptr< GatheringPointBonus > getGatheringPointBonus( uint32_t GatheringPointBonusId );
     boost::shared_ptr< GatheringPointBonusType > getGatheringPointBonusType( uint32_t GatheringPointBonusTypeId );
     boost::shared_ptr< GatheringPointName > getGatheringPointName( uint32_t GatheringPointNameId );
     boost::shared_ptr< GatheringSubCategory > getGatheringSubCategory( uint32_t GatheringSubCategoryId );
     boost::shared_ptr< GatheringType > getGatheringType( uint32_t GatheringTypeId );
     boost::shared_ptr< GcArmyExpedition > getGcArmyExpedition( uint32_t GcArmyExpeditionId );
     boost::shared_ptr< GcArmyExpeditionMemberBonus > getGcArmyExpeditionMemberBonus( uint32_t GcArmyExpeditionMemberBonusId );
     boost::shared_ptr< GcArmyExpeditionType > getGcArmyExpeditionType( uint32_t GcArmyExpeditionTypeId );
     boost::shared_ptr< GcArmyMemberGrow > getGcArmyMemberGrow( uint32_t GcArmyMemberGrowId );
     boost::shared_ptr< GcArmyTraining > getGcArmyTraining( uint32_t GcArmyTrainingId );
     boost::shared_ptr< GCScripShopCategory > getGCScripShopCategory( uint32_t GCScripShopCategoryId );
     boost::shared_ptr< GCScripShopItem > getGCScripShopItem( uint32_t GCScripShopItemId );
     boost::shared_ptr< GCShop > getGCShop( uint32_t GCShopId );
     boost::shared_ptr< GCShopItemCategory > getGCShopItemCategory( uint32_t GCShopItemCategoryId );
     boost::shared_ptr< GCSupplyDuty > getGCSupplyDuty( uint32_t GCSupplyDutyId );
     boost::shared_ptr< GCSupplyDutyReward > getGCSupplyDutyReward( uint32_t GCSupplyDutyRewardId );
     boost::shared_ptr< GeneralAction > getGeneralAction( uint32_t GeneralActionId );
     boost::shared_ptr< GilShop > getGilShop( uint32_t GilShopId );
     boost::shared_ptr< GilShopItem > getGilShopItem( uint32_t GilShopItemId );
     boost::shared_ptr< GoldSaucerTextData > getGoldSaucerTextData( uint32_t GoldSaucerTextDataId );
     boost::shared_ptr< GrandCompany > getGrandCompany( uint32_t GrandCompanyId );
     boost::shared_ptr< GrandCompanyRank > getGrandCompanyRank( uint32_t GrandCompanyRankId );
     boost::shared_ptr< GuardianDeity > getGuardianDeity( uint32_t GuardianDeityId );
     boost::shared_ptr< GuildleveAssignment > getGuildleveAssignment( uint32_t GuildleveAssignmentId );
     boost::shared_ptr< GuildOrderGuide > getGuildOrderGuide( uint32_t GuildOrderGuideId );
     boost::shared_ptr< GuildOrderOfficer > getGuildOrderOfficer( uint32_t GuildOrderOfficerId );
     boost::shared_ptr< HouseRetainerPose > getHouseRetainerPose( uint32_t HouseRetainerPoseId );
     boost::shared_ptr< HousingFurniture > getHousingFurniture( uint32_t HousingFurnitureId );
     boost::shared_ptr< HousingYardObject > getHousingYardObject( uint32_t HousingYardObjectId );
     boost::shared_ptr< InstanceContent > getInstanceContent( uint32_t InstanceContentId );
     boost::shared_ptr< InstanceContentBuff > getInstanceContentBuff( uint32_t InstanceContentBuffId );
     boost::shared_ptr< InstanceContentTextData > getInstanceContentTextData( uint32_t InstanceContentTextDataId );
     boost::shared_ptr< InstanceContentType > getInstanceContentType( uint32_t InstanceContentTypeId );
     boost::shared_ptr< Item > getItem( uint32_t ItemId );
     boost::shared_ptr< ItemAction > getItemAction( uint32_t ItemActionId );
     boost::shared_ptr< ItemFood > getItemFood( uint32_t ItemFoodId );
     boost::shared_ptr< ItemSearchCategory > getItemSearchCategory( uint32_t ItemSearchCategoryId );
     boost::shared_ptr< ItemSeries > getItemSeries( uint32_t ItemSeriesId );
     boost::shared_ptr< ItemSpecialBonus > getItemSpecialBonus( uint32_t ItemSpecialBonusId );
     boost::shared_ptr< ItemUICategory > getItemUICategory( uint32_t ItemUICategoryId );
     boost::shared_ptr< JournalCategory > getJournalCategory( uint32_t JournalCategoryId );
     boost::shared_ptr< JournalGenre > getJournalGenre( uint32_t JournalGenreId );
     boost::shared_ptr< JournalSection > getJournalSection( uint32_t JournalSectionId );
     boost::shared_ptr< Leve > getLeve( uint32_t LeveId );
     boost::shared_ptr< LeveAssignmentType > getLeveAssignmentType( uint32_t LeveAssignmentTypeId );
     boost::shared_ptr< LeveClient > getLeveClient( uint32_t LeveClientId );
     boost::shared_ptr< Level > getLevel( uint32_t LevelId );
     boost::shared_ptr< LeveRewardItem > getLeveRewardItem( uint32_t LeveRewardItemId );
     boost::shared_ptr< LeveRewardItemGroup > getLeveRewardItemGroup( uint32_t LeveRewardItemGroupId );
     boost::shared_ptr< LeveVfx > getLeveVfx( uint32_t LeveVfxId );
     boost::shared_ptr< LogFilter > getLogFilter( uint32_t LogFilterId );
     boost::shared_ptr< LogKind > getLogKind( uint32_t LogKindId );
     boost::shared_ptr< LogKindCategoryText > getLogKindCategoryText( uint32_t LogKindCategoryTextId );
     boost::shared_ptr< LogMessage > getLogMessage( uint32_t LogMessageId );
     boost::shared_ptr< MacroIcon > getMacroIcon( uint32_t MacroIconId );
     boost::shared_ptr< MacroIconRedirectOld > getMacroIconRedirectOld( uint32_t MacroIconRedirectOldId );
     boost::shared_ptr< MainCommand > getMainCommand( uint32_t MainCommandId );
     boost::shared_ptr< MainCommandCategory > getMainCommandCategory( uint32_t MainCommandCategoryId );
     boost::shared_ptr< Map > getMap( uint32_t MapId );
     boost::shared_ptr< MapMarker > getMapMarker( uint32_t MapMarkerId );
     boost::shared_ptr< MapSymbol > getMapSymbol( uint32_t MapSymbolId );
     boost::shared_ptr< MasterpieceSupplyDuty > getMasterpieceSupplyDuty( uint32_t MasterpieceSupplyDutyId );
     boost::shared_ptr< MasterpieceSupplyMultiplier > getMasterpieceSupplyMultiplier( uint32_t MasterpieceSupplyMultiplierId );
     boost::shared_ptr< Materia > getMateria( uint32_t MateriaId );
     boost::shared_ptr< MinionRace > getMinionRace( uint32_t MinionRaceId );
     boost::shared_ptr< MinionRules > getMinionRules( uint32_t MinionRulesId );
     boost::shared_ptr< MinionSkillType > getMinionSkillType( uint32_t MinionSkillTypeId );
     boost::shared_ptr< MobHuntTarget > getMobHuntTarget( uint32_t MobHuntTargetId );
     boost::shared_ptr< ModelChara > getModelChara( uint32_t ModelCharaId );
     boost::shared_ptr< MonsterNote > getMonsterNote( uint32_t MonsterNoteId );
     boost::shared_ptr< MonsterNoteTarget > getMonsterNoteTarget( uint32_t MonsterNoteTargetId );
     boost::shared_ptr< Mount > getMount( uint32_t MountId );
     boost::shared_ptr< MountAction > getMountAction( uint32_t MountActionId );
     boost::shared_ptr< NpcEquip > getNpcEquip( uint32_t NpcEquipId );
     boost::shared_ptr< Omen > getOmen( uint32_t OmenId );
     boost::shared_ptr< OnlineStatus > getOnlineStatus( uint32_t OnlineStatusId );
     boost::shared_ptr< Orchestrion > getOrchestrion( uint32_t OrchestrionId );
     boost::shared_ptr< OrchestrionPath > getOrchestrionPath( uint32_t OrchestrionPathId );
     boost::shared_ptr< ParamGrow > getParamGrow( uint32_t ParamGrowId );
     boost::shared_ptr< Pet > getPet( uint32_t PetId );
     boost::shared_ptr< PetAction > getPetAction( uint32_t PetActionId );
     boost::shared_ptr< Picture > getPicture( uint32_t PictureId );
     boost::shared_ptr< PlaceName > getPlaceName( uint32_t PlaceNameId );
     boost::shared_ptr< Quest > getQuest( uint32_t QuestId );
     boost::shared_ptr< QuestRewardOther > getQuestRewardOther( uint32_t QuestRewardOtherId );
     boost::shared_ptr< Race > getRace( uint32_t RaceId );
     boost::shared_ptr< RacingChocoboItem > getRacingChocoboItem( uint32_t RacingChocoboItemId );
     boost::shared_ptr< RacingChocoboName > getRacingChocoboName( uint32_t RacingChocoboNameId );
     boost::shared_ptr< RacingChocoboNameCategory > getRacingChocoboNameCategory( uint32_t RacingChocoboNameCategoryId );
     boost::shared_ptr< RacingChocoboNameInfo > getRacingChocoboNameInfo( uint32_t RacingChocoboNameInfoId );
     boost::shared_ptr< RacingChocoboParam > getRacingChocoboParam( uint32_t RacingChocoboParamId );
     boost::shared_ptr< Recipe > getRecipe( uint32_t RecipeId );
     boost::shared_ptr< RecipeElement > getRecipeElement( uint32_t RecipeElementId );
     boost::shared_ptr< RecipeLevelTable > getRecipeLevelTable( uint32_t RecipeLevelTableId );
     boost::shared_ptr< RecipeNotebookList > getRecipeNotebookList( uint32_t RecipeNotebookListId );
     boost::shared_ptr< Relic > getRelic( uint32_t RelicId );
     boost::shared_ptr< Relic3 > getRelic3( uint32_t Relic3Id );
     boost::shared_ptr< RelicItem > getRelicItem( uint32_t RelicItemId );
     boost::shared_ptr< RelicNote > getRelicNote( uint32_t RelicNoteId );
     boost::shared_ptr< RelicNoteCategory > getRelicNoteCategory( uint32_t RelicNoteCategoryId );
     boost::shared_ptr< RetainerTask > getRetainerTask( uint32_t RetainerTaskId );
     boost::shared_ptr< RetainerTaskNormal > getRetainerTaskNormal( uint32_t RetainerTaskNormalId );
     boost::shared_ptr< RetainerTaskParameter > getRetainerTaskParameter( uint32_t RetainerTaskParameterId );
     boost::shared_ptr< RetainerTaskRandom > getRetainerTaskRandom( uint32_t RetainerTaskRandomId );
     boost::shared_ptr< Salvage > getSalvage( uint32_t SalvageId );
     boost::shared_ptr< SatisfactionNpc > getSatisfactionNpc( uint32_t SatisfactionNpcId );
     boost::shared_ptr< SatisfactionSupply > getSatisfactionSupply( uint32_t SatisfactionSupplyId );
     boost::shared_ptr< SatisfactionSupplyReward > getSatisfactionSupplyReward( uint32_t SatisfactionSupplyRewardId );
     boost::shared_ptr< ScreenImage > getScreenImage( uint32_t ScreenImageId );
     boost::shared_ptr< SecretRecipeBook > getSecretRecipeBook( uint32_t SecretRecipeBookId );
     boost::shared_ptr< SpearfishingItem > getSpearfishingItem( uint32_t SpearfishingItemId );
     boost::shared_ptr< SpearfishingNotebook > getSpearfishingNotebook( uint32_t SpearfishingNotebookId );
     boost::shared_ptr< SpecialShop > getSpecialShop( uint32_t SpecialShopId );
     boost::shared_ptr< SpecialShopItemCategory > getSpecialShopItemCategory( uint32_t SpecialShopItemCategoryId );
     boost::shared_ptr< Stain > getStain( uint32_t StainId );
     boost::shared_ptr< Status > getStatus( uint32_t StatusId );
     boost::shared_ptr< Story > getStory( uint32_t StoryId );
     boost::shared_ptr< SwitchTalk > getSwitchTalk( uint32_t SwitchTalkId );
     boost::shared_ptr< TerritoryType > getTerritoryType( uint32_t TerritoryTypeId );
     boost::shared_ptr< TextCommand > getTextCommand( uint32_t TextCommandId );
     boost::shared_ptr< Title > getTitle( uint32_t TitleId );
     boost::shared_ptr< Tomestones > getTomestones( uint32_t TomestonesId );
     boost::shared_ptr< TomestonesItem > getTomestonesItem( uint32_t TomestonesItemId );
     boost::shared_ptr< TopicSelect > getTopicSelect( uint32_t TopicSelectId );
     boost::shared_ptr< Town > getTown( uint32_t TownId );
     boost::shared_ptr< Trait > getTrait( uint32_t TraitId );
     boost::shared_ptr< TraitRecast > getTraitRecast( uint32_t TraitRecastId );
     boost::shared_ptr< TraitTransient > getTraitTransient( uint32_t TraitTransientId );
     boost::shared_ptr< Tribe > getTribe( uint32_t TribeId );
     boost::shared_ptr< TripleTriad > getTripleTriad( uint32_t TripleTriadId );
     boost::shared_ptr< TripleTriadCard > getTripleTriadCard( uint32_t TripleTriadCardId );
     boost::shared_ptr< TripleTriadCardRarity > getTripleTriadCardRarity( uint32_t TripleTriadCardRarityId );
     boost::shared_ptr< TripleTriadCardResident > getTripleTriadCardResident( uint32_t TripleTriadCardResidentId );
     boost::shared_ptr< TripleTriadCardType > getTripleTriadCardType( uint32_t TripleTriadCardTypeId );
     boost::shared_ptr< TripleTriadCompetition > getTripleTriadCompetition( uint32_t TripleTriadCompetitionId );
     boost::shared_ptr< TripleTriadRule > getTripleTriadRule( uint32_t TripleTriadRuleId );
     boost::shared_ptr< Tutorial > getTutorial( uint32_t TutorialId );
     boost::shared_ptr< TutorialDPS > getTutorialDPS( uint32_t TutorialDPSId );
     boost::shared_ptr< TutorialHealer > getTutorialHealer( uint32_t TutorialHealerId );
     boost::shared_ptr< TutorialTank > getTutorialTank( uint32_t TutorialTankId );
     boost::shared_ptr< Warp > getWarp( uint32_t WarpId );
     boost::shared_ptr< Weather > getWeather( uint32_t WeatherId );
     boost::shared_ptr< WeatherGroup > getWeatherGroup( uint32_t WeatherGroupId );
     boost::shared_ptr< WeatherRate > getWeatherRate( uint32_t WeatherRateId );
     boost::shared_ptr< WeeklyBingoOrderData > getWeeklyBingoOrderData( uint32_t WeeklyBingoOrderDataId );
     boost::shared_ptr< WeeklyBingoRewardData > getWeeklyBingoRewardData( uint32_t WeeklyBingoRewardDataId );
     boost::shared_ptr< WeeklyBingoText > getWeeklyBingoText( uint32_t WeeklyBingoTextId );
     boost::shared_ptr< WorldDCGroupType > getWorldDCGroupType( uint32_t WorldDCGroupTypeId );


     std::set< uint32_t > m_AchievementIdList;
     std::set< uint32_t > m_AchievementCategoryIdList;
     std::set< uint32_t > m_AchievementKindIdList;
     std::set< uint32_t > m_ActionIdList;
     std::set< uint32_t > m_ActionCategoryIdList;
     std::set< uint32_t > m_ActionComboRouteIdList;
     std::set< uint32_t > m_ActionIndirectionIdList;
     std::set< uint32_t > m_ActionProcStatusIdList;
     std::set< uint32_t > m_ActionTimelineIdList;
     std::set< uint32_t > m_ActionTransientIdList;
     std::set< uint32_t > m_AddonIdList;
     std::set< uint32_t > m_AdventureIdList;
     std::set< uint32_t > m_AdventureExPhaseIdList;
     std::set< uint32_t > m_AetherCurrentIdList;
     std::set< uint32_t > m_AetherialWheelIdList;
     std::set< uint32_t > m_AetheryteIdList;
     std::set< uint32_t > m_AirshipExplorationLevelIdList;
     std::set< uint32_t > m_AirshipExplorationLogIdList;
     std::set< uint32_t > m_AirshipExplorationParamTypeIdList;
     std::set< uint32_t > m_AirshipExplorationPartIdList;
     std::set< uint32_t > m_AirshipExplorationPointIdList;
     std::set< uint32_t > m_AnimaWeapon5IdList;
     std::set< uint32_t > m_AnimaWeapon5ParamIdList;
     std::set< uint32_t > m_AnimaWeapon5PatternGroupIdList;
     std::set< uint32_t > m_AnimaWeapon5SpiritTalkIdList;
     std::set< uint32_t > m_AnimaWeapon5SpiritTalkParamIdList;
     std::set< uint32_t > m_AnimaWeapon5TradeItemIdList;
     std::set< uint32_t > m_AnimaWeaponFUITalkIdList;
     std::set< uint32_t > m_AnimaWeaponFUITalkParamIdList;
     std::set< uint32_t > m_AnimaWeaponIconIdList;
     std::set< uint32_t > m_AnimaWeaponItemIdList;
     std::set< uint32_t > m_AquariumFishIdList;
     std::set< uint32_t > m_AquariumWaterIdList;
     std::set< uint32_t > m_AttackTypeIdList;
     std::set< uint32_t > m_BalloonIdList;
     std::set< uint32_t > m_BaseParamIdList;
     std::set< uint32_t > m_BattleLeveIdList;
     std::set< uint32_t > m_BeastRankBonusIdList;
     std::set< uint32_t > m_BeastReputationRankIdList;
     std::set< uint32_t > m_BeastTribeIdList;
     std::set< uint32_t > m_BehaviorIdList;
     std::set< uint32_t > m_BGMIdList;
     std::set< uint32_t > m_BNpcAnnounceIconIdList;
     std::set< uint32_t > m_BNpcBaseIdList;
     std::set< uint32_t > m_BNpcCustomizeIdList;
     std::set< uint32_t > m_BNpcNameIdList;
     std::set< uint32_t > m_BuddyActionIdList;
     std::set< uint32_t > m_BuddyEquipIdList;
     std::set< uint32_t > m_BuddyItemIdList;
     std::set< uint32_t > m_BuddyRankIdList;
     std::set< uint32_t > m_BuddySkillIdList;
     std::set< uint32_t > m_CabinetIdList;
     std::set< uint32_t > m_CabinetCategoryIdList;
     std::set< uint32_t > m_CalendarIdList;
     std::set< uint32_t > m_ChainBonusIdList;
     std::set< uint32_t > m_CharaMakeCustomizeIdList;
     std::set< uint32_t > m_CharaMakeTypeIdList;
     std::set< uint32_t > m_ChocoboRaceIdList;
     std::set< uint32_t > m_ChocoboRaceAbilityIdList;
     std::set< uint32_t > m_ChocoboRaceAbilityTypeIdList;
     std::set< uint32_t > m_ChocoboRaceItemIdList;
     std::set< uint32_t > m_ChocoboRaceRankIdList;
     std::set< uint32_t > m_ChocoboRaceStatusIdList;
     std::set< uint32_t > m_ChocoboRaceTerritoryIdList;
     std::set< uint32_t > m_ChocoboTaxiStandIdList;
     std::set< uint32_t > m_ClassJobIdList;
     std::set< uint32_t > m_ClassJobCategoryIdList;
     std::set< uint32_t > m_CompanionIdList;
     std::set< uint32_t > m_CompanionMoveIdList;
     std::set< uint32_t > m_CompanionTransientIdList;
     std::set< uint32_t > m_CompanyActionIdList;
     std::set< uint32_t > m_CompanyCraftDraftIdList;
     std::set< uint32_t > m_CompanyCraftDraftCategoryIdList;
     std::set< uint32_t > m_CompanyCraftManufactoryStateIdList;
     std::set< uint32_t > m_CompanyCraftPartIdList;
     std::set< uint32_t > m_CompanyCraftProcessIdList;
     std::set< uint32_t > m_CompanyCraftSequenceIdList;
     std::set< uint32_t > m_CompanyCraftSupplyItemIdList;
     std::set< uint32_t > m_CompanyCraftTypeIdList;
     std::set< uint32_t > m_CompleteJournalIdList;
     std::set< uint32_t > m_CompleteJournalCategoryIdList;
     std::set< uint32_t > m_ContentExActionIdList;
     std::set< uint32_t > m_ContentFinderConditionIdList;
     std::set< uint32_t > m_ContentFinderConditionTransientIdList;
     std::set< uint32_t > m_ContentMemberTypeIdList;
     std::set< uint32_t > m_ContentRouletteIdList;
     std::set< uint32_t > m_ContentTypeIdList;
     std::set< uint32_t > m_CraftActionIdList;
     std::set< uint32_t > m_CraftLeveIdList;
     std::set< uint32_t > m_CraftTypeIdList;
     std::set< uint32_t > m_CurrencyIdList;
     std::set< uint32_t > m_CustomTalkIdList;
     std::set< uint32_t > m_CutsceneIdList;
     std::set< uint32_t > m_CutScreenImageIdList;
     std::set< uint32_t > m_DailySupplyItemIdList;
     std::set< uint32_t > m_DeepDungeonBanIdList;
     std::set< uint32_t > m_DeepDungeonDangerIdList;
     std::set< uint32_t > m_DeepDungeonEquipmentIdList;
     std::set< uint32_t > m_DeepDungeonFloorEffectUIIdList;
     std::set< uint32_t > m_DeepDungeonItemIdList;
     std::set< uint32_t > m_DeepDungeonStatusIdList;
     std::set< uint32_t > m_DefaultTalkIdList;
     std::set< uint32_t > m_DeliveryQuestIdList;
     std::set< uint32_t > m_DisposalShopIdList;
     std::set< uint32_t > m_DisposalShopFilterTypeIdList;
     std::set< uint32_t > m_DisposalShopItemIdList;
     std::set< uint32_t > m_DpsChallengeIdList;
     std::set< uint32_t > m_DpsChallengeOfficerIdList;
     std::set< uint32_t > m_DpsChallengeTransientIdList;
     std::set< uint32_t > m_EmoteIdList;
     std::set< uint32_t > m_EmoteCategoryIdList;
     std::set< uint32_t > m_ENpcBaseIdList;
     std::set< uint32_t > m_ENpcResidentIdList;
     std::set< uint32_t > m_EObjIdList;
     std::set< uint32_t > m_EquipRaceCategoryIdList;
     std::set< uint32_t > m_EquipSlotCategoryIdList;
     std::set< uint32_t > m_EventActionIdList;
     std::set< uint32_t > m_EventIconPriorityIdList;
     std::set< uint32_t > m_EventIconTypeIdList;
     std::set< uint32_t > m_EventItemIdList;
     std::set< uint32_t > m_EventItemHelpIdList;
     std::set< uint32_t > m_ExVersionIdList;
     std::set< uint32_t > m_FateIdList;
     std::set< uint32_t > m_FCActivityIdList;
     std::set< uint32_t > m_FCAuthorityIdList;
     std::set< uint32_t > m_FCAuthorityCategoryIdList;
     std::set< uint32_t > m_FCChestNameIdList;
     std::set< uint32_t > m_FccShopIdList;
     std::set< uint32_t > m_FCHierarchyIdList;
     std::set< uint32_t > m_FCReputationIdList;
     std::set< uint32_t > m_FCRightsIdList;
     std::set< uint32_t > m_FishingSpotIdList;
     std::set< uint32_t > m_FishParameterIdList;
     std::set< uint32_t > m_GardeningSeedIdList;
     std::set< uint32_t > m_GatheringConditionIdList;
     std::set< uint32_t > m_GatheringExpIdList;
     std::set< uint32_t > m_GatheringItemIdList;
     std::set< uint32_t > m_GatheringItemLevelConvertTableIdList;
     std::set< uint32_t > m_GatheringItemPointIdList;
     std::set< uint32_t > m_GatheringNotebookListIdList;
     std::set< uint32_t > m_GatheringPointIdList;
     std::set< uint32_t > m_GatheringPointBaseIdList;
     std::set< uint32_t > m_GatheringPointBonusIdList;
     std::set< uint32_t > m_GatheringPointBonusTypeIdList;
     std::set< uint32_t > m_GatheringPointNameIdList;
     std::set< uint32_t > m_GatheringSubCategoryIdList;
     std::set< uint32_t > m_GatheringTypeIdList;
     std::set< uint32_t > m_GcArmyExpeditionIdList;
     std::set< uint32_t > m_GcArmyExpeditionMemberBonusIdList;
     std::set< uint32_t > m_GcArmyExpeditionTypeIdList;
     std::set< uint32_t > m_GcArmyMemberGrowIdList;
     std::set< uint32_t > m_GcArmyTrainingIdList;
     std::set< uint32_t > m_GCScripShopCategoryIdList;
     std::set< uint32_t > m_GCScripShopItemIdList;
     std::set< uint32_t > m_GCShopIdList;
     std::set< uint32_t > m_GCShopItemCategoryIdList;
     std::set< uint32_t > m_GCSupplyDutyIdList;
     std::set< uint32_t > m_GCSupplyDutyRewardIdList;
     std::set< uint32_t > m_GeneralActionIdList;
     std::set< uint32_t > m_GilShopIdList;
     std::set< uint32_t > m_GilShopItemIdList;
     std::set< uint32_t > m_GoldSaucerTextDataIdList;
     std::set< uint32_t > m_GrandCompanyIdList;
     std::set< uint32_t > m_GrandCompanyRankIdList;
     std::set< uint32_t > m_GuardianDeityIdList;
     std::set< uint32_t > m_GuildleveAssignmentIdList;
     std::set< uint32_t > m_GuildOrderGuideIdList;
     std::set< uint32_t > m_GuildOrderOfficerIdList;
     std::set< uint32_t > m_HouseRetainerPoseIdList;
     std::set< uint32_t > m_HousingFurnitureIdList;
     std::set< uint32_t > m_HousingYardObjectIdList;
     std::set< uint32_t > m_InstanceContentIdList;
     std::set< uint32_t > m_InstanceContentBuffIdList;
     std::set< uint32_t > m_InstanceContentTextDataIdList;
     std::set< uint32_t > m_InstanceContentTypeIdList;
     std::set< uint32_t > m_ItemIdList;
     std::set< uint32_t > m_ItemActionIdList;
     std::set< uint32_t > m_ItemFoodIdList;
     std::set< uint32_t > m_ItemSearchCategoryIdList;
     std::set< uint32_t > m_ItemSeriesIdList;
     std::set< uint32_t > m_ItemSpecialBonusIdList;
     std::set< uint32_t > m_ItemUICategoryIdList;
     std::set< uint32_t > m_JournalCategoryIdList;
     std::set< uint32_t > m_JournalGenreIdList;
     std::set< uint32_t > m_JournalSectionIdList;
     std::set< uint32_t > m_LeveIdList;
     std::set< uint32_t > m_LeveAssignmentTypeIdList;
     std::set< uint32_t > m_LeveClientIdList;
     std::set< uint32_t > m_LevelIdList;
     std::set< uint32_t > m_LeveRewardItemIdList;
     std::set< uint32_t > m_LeveRewardItemGroupIdList;
     std::set< uint32_t > m_LeveVfxIdList;
     std::set< uint32_t > m_LogFilterIdList;
     std::set< uint32_t > m_LogKindIdList;
     std::set< uint32_t > m_LogKindCategoryTextIdList;
     std::set< uint32_t > m_LogMessageIdList;
     std::set< uint32_t > m_MacroIconIdList;
     std::set< uint32_t > m_MacroIconRedirectOldIdList;
     std::set< uint32_t > m_MainCommandIdList;
     std::set< uint32_t > m_MainCommandCategoryIdList;
     std::set< uint32_t > m_MapIdList;
     std::set< uint32_t > m_MapMarkerIdList;
     std::set< uint32_t > m_MapSymbolIdList;
     std::set< uint32_t > m_MasterpieceSupplyDutyIdList;
     std::set< uint32_t > m_MasterpieceSupplyMultiplierIdList;
     std::set< uint32_t > m_MateriaIdList;
     std::set< uint32_t > m_MinionRaceIdList;
     std::set< uint32_t > m_MinionRulesIdList;
     std::set< uint32_t > m_MinionSkillTypeIdList;
     std::set< uint32_t > m_MobHuntTargetIdList;
     std::set< uint32_t > m_ModelCharaIdList;
     std::set< uint32_t > m_MonsterNoteIdList;
     std::set< uint32_t > m_MonsterNoteTargetIdList;
     std::set< uint32_t > m_MountIdList;
     std::set< uint32_t > m_MountActionIdList;
     std::set< uint32_t > m_NpcEquipIdList;
     std::set< uint32_t > m_OmenIdList;
     std::set< uint32_t > m_OnlineStatusIdList;
     std::set< uint32_t > m_OrchestrionIdList;
     std::set< uint32_t > m_OrchestrionPathIdList;
     std::set< uint32_t > m_ParamGrowIdList;
     std::set< uint32_t > m_PetIdList;
     std::set< uint32_t > m_PetActionIdList;
     std::set< uint32_t > m_PictureIdList;
     std::set< uint32_t > m_PlaceNameIdList;
     std::set< uint32_t > m_QuestIdList;
     std::set< uint32_t > m_QuestRewardOtherIdList;
     std::set< uint32_t > m_RaceIdList;
     std::set< uint32_t > m_RacingChocoboItemIdList;
     std::set< uint32_t > m_RacingChocoboNameIdList;
     std::set< uint32_t > m_RacingChocoboNameCategoryIdList;
     std::set< uint32_t > m_RacingChocoboNameInfoIdList;
     std::set< uint32_t > m_RacingChocoboParamIdList;
     std::set< uint32_t > m_RecipeIdList;
     std::set< uint32_t > m_RecipeElementIdList;
     std::set< uint32_t > m_RecipeLevelTableIdList;
     std::set< uint32_t > m_RecipeNotebookListIdList;
     std::set< uint32_t > m_RelicIdList;
     std::set< uint32_t > m_Relic3IdList;
     std::set< uint32_t > m_RelicItemIdList;
     std::set< uint32_t > m_RelicNoteIdList;
     std::set< uint32_t > m_RelicNoteCategoryIdList;
     std::set< uint32_t > m_RetainerTaskIdList;
     std::set< uint32_t > m_RetainerTaskNormalIdList;
     std::set< uint32_t > m_RetainerTaskParameterIdList;
     std::set< uint32_t > m_RetainerTaskRandomIdList;
     std::set< uint32_t > m_SalvageIdList;
     std::set< uint32_t > m_SatisfactionNpcIdList;
     std::set< uint32_t > m_SatisfactionSupplyIdList;
     std::set< uint32_t > m_SatisfactionSupplyRewardIdList;
     std::set< uint32_t > m_ScreenImageIdList;
     std::set< uint32_t > m_SecretRecipeBookIdList;
     std::set< uint32_t > m_SpearfishingItemIdList;
     std::set< uint32_t > m_SpearfishingNotebookIdList;
     std::set< uint32_t > m_SpecialShopIdList;
     std::set< uint32_t > m_SpecialShopItemCategoryIdList;
     std::set< uint32_t > m_StainIdList;
     std::set< uint32_t > m_StatusIdList;
     std::set< uint32_t > m_StoryIdList;
     std::set< uint32_t > m_SwitchTalkIdList;
     std::set< uint32_t > m_TerritoryTypeIdList;
     std::set< uint32_t > m_TextCommandIdList;
     std::set< uint32_t > m_TitleIdList;
     std::set< uint32_t > m_TomestonesIdList;
     std::set< uint32_t > m_TomestonesItemIdList;
     std::set< uint32_t > m_TopicSelectIdList;
     std::set< uint32_t > m_TownIdList;
     std::set< uint32_t > m_TraitIdList;
     std::set< uint32_t > m_TraitRecastIdList;
     std::set< uint32_t > m_TraitTransientIdList;
     std::set< uint32_t > m_TribeIdList;
     std::set< uint32_t > m_TripleTriadIdList;
     std::set< uint32_t > m_TripleTriadCardIdList;
     std::set< uint32_t > m_TripleTriadCardRarityIdList;
     std::set< uint32_t > m_TripleTriadCardResidentIdList;
     std::set< uint32_t > m_TripleTriadCardTypeIdList;
     std::set< uint32_t > m_TripleTriadCompetitionIdList;
     std::set< uint32_t > m_TripleTriadRuleIdList;
     std::set< uint32_t > m_TutorialIdList;
     std::set< uint32_t > m_TutorialDPSIdList;
     std::set< uint32_t > m_TutorialHealerIdList;
     std::set< uint32_t > m_TutorialTankIdList;
     std::set< uint32_t > m_WarpIdList;
     std::set< uint32_t > m_WeatherIdList;
     std::set< uint32_t > m_WeatherGroupIdList;
     std::set< uint32_t > m_WeatherRateIdList;
     std::set< uint32_t > m_WeeklyBingoOrderDataIdList;
     std::set< uint32_t > m_WeeklyBingoRewardDataIdList;
     std::set< uint32_t > m_WeeklyBingoTextIdList;
     std::set< uint32_t > m_WorldDCGroupTypeIdList;


const std::set< uint32_t >& ExdDataGenerated::getAchievementIdList()
{
   if( m_AchievementIdList.size() == 0 )
      loadIdList( m_AchievementDat, m_AchievementIdList );
   return m_AchievementIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAchievementCategoryIdList()
{
   if( m_AchievementCategoryIdList.size() == 0 )
      loadIdList( m_AchievementCategoryDat, m_AchievementCategoryIdList );
   return m_AchievementCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAchievementKindIdList()
{
   if( m_AchievementKindIdList.size() == 0 )
      loadIdList( m_AchievementKindDat, m_AchievementKindIdList );
   return m_AchievementKindIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getActionIdList()
{
   if( m_ActionIdList.size() == 0 )
      loadIdList( m_ActionDat, m_ActionIdList );
   return m_ActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getActionCategoryIdList()
{
   if( m_ActionCategoryIdList.size() == 0 )
      loadIdList( m_ActionCategoryDat, m_ActionCategoryIdList );
   return m_ActionCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getActionComboRouteIdList()
{
   if( m_ActionComboRouteIdList.size() == 0 )
      loadIdList( m_ActionComboRouteDat, m_ActionComboRouteIdList );
   return m_ActionComboRouteIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getActionIndirectionIdList()
{
   if( m_ActionIndirectionIdList.size() == 0 )
      loadIdList( m_ActionIndirectionDat, m_ActionIndirectionIdList );
   return m_ActionIndirectionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getActionProcStatusIdList()
{
   if( m_ActionProcStatusIdList.size() == 0 )
      loadIdList( m_ActionProcStatusDat, m_ActionProcStatusIdList );
   return m_ActionProcStatusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getActionTimelineIdList()
{
   if( m_ActionTimelineIdList.size() == 0 )
      loadIdList( m_ActionTimelineDat, m_ActionTimelineIdList );
   return m_ActionTimelineIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getActionTransientIdList()
{
   if( m_ActionTransientIdList.size() == 0 )
      loadIdList( m_ActionTransientDat, m_ActionTransientIdList );
   return m_ActionTransientIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAddonIdList()
{
   if( m_AddonIdList.size() == 0 )
      loadIdList( m_AddonDat, m_AddonIdList );
   return m_AddonIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAdventureIdList()
{
   if( m_AdventureIdList.size() == 0 )
      loadIdList( m_AdventureDat, m_AdventureIdList );
   return m_AdventureIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAdventureExPhaseIdList()
{
   if( m_AdventureExPhaseIdList.size() == 0 )
      loadIdList( m_AdventureExPhaseDat, m_AdventureExPhaseIdList );
   return m_AdventureExPhaseIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAetherCurrentIdList()
{
   if( m_AetherCurrentIdList.size() == 0 )
      loadIdList( m_AetherCurrentDat, m_AetherCurrentIdList );
   return m_AetherCurrentIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAetherialWheelIdList()
{
   if( m_AetherialWheelIdList.size() == 0 )
      loadIdList( m_AetherialWheelDat, m_AetherialWheelIdList );
   return m_AetherialWheelIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAetheryteIdList()
{
   if( m_AetheryteIdList.size() == 0 )
      loadIdList( m_AetheryteDat, m_AetheryteIdList );
   return m_AetheryteIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAirshipExplorationLevelIdList()
{
   if( m_AirshipExplorationLevelIdList.size() == 0 )
      loadIdList( m_AirshipExplorationLevelDat, m_AirshipExplorationLevelIdList );
   return m_AirshipExplorationLevelIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAirshipExplorationLogIdList()
{
   if( m_AirshipExplorationLogIdList.size() == 0 )
      loadIdList( m_AirshipExplorationLogDat, m_AirshipExplorationLogIdList );
   return m_AirshipExplorationLogIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAirshipExplorationParamTypeIdList()
{
   if( m_AirshipExplorationParamTypeIdList.size() == 0 )
      loadIdList( m_AirshipExplorationParamTypeDat, m_AirshipExplorationParamTypeIdList );
   return m_AirshipExplorationParamTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAirshipExplorationPartIdList()
{
   if( m_AirshipExplorationPartIdList.size() == 0 )
      loadIdList( m_AirshipExplorationPartDat, m_AirshipExplorationPartIdList );
   return m_AirshipExplorationPartIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAirshipExplorationPointIdList()
{
   if( m_AirshipExplorationPointIdList.size() == 0 )
      loadIdList( m_AirshipExplorationPointDat, m_AirshipExplorationPointIdList );
   return m_AirshipExplorationPointIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeapon5IdList()
{
   if( m_AnimaWeapon5IdList.size() == 0 )
      loadIdList( m_AnimaWeapon5Dat, m_AnimaWeapon5IdList );
   return m_AnimaWeapon5IdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeapon5ParamIdList()
{
   if( m_AnimaWeapon5ParamIdList.size() == 0 )
      loadIdList( m_AnimaWeapon5ParamDat, m_AnimaWeapon5ParamIdList );
   return m_AnimaWeapon5ParamIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeapon5PatternGroupIdList()
{
   if( m_AnimaWeapon5PatternGroupIdList.size() == 0 )
      loadIdList( m_AnimaWeapon5PatternGroupDat, m_AnimaWeapon5PatternGroupIdList );
   return m_AnimaWeapon5PatternGroupIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeapon5SpiritTalkIdList()
{
   if( m_AnimaWeapon5SpiritTalkIdList.size() == 0 )
      loadIdList( m_AnimaWeapon5SpiritTalkDat, m_AnimaWeapon5SpiritTalkIdList );
   return m_AnimaWeapon5SpiritTalkIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeapon5SpiritTalkParamIdList()
{
   if( m_AnimaWeapon5SpiritTalkParamIdList.size() == 0 )
      loadIdList( m_AnimaWeapon5SpiritTalkParamDat, m_AnimaWeapon5SpiritTalkParamIdList );
   return m_AnimaWeapon5SpiritTalkParamIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeapon5TradeItemIdList()
{
   if( m_AnimaWeapon5TradeItemIdList.size() == 0 )
      loadIdList( m_AnimaWeapon5TradeItemDat, m_AnimaWeapon5TradeItemIdList );
   return m_AnimaWeapon5TradeItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeaponFUITalkIdList()
{
   if( m_AnimaWeaponFUITalkIdList.size() == 0 )
      loadIdList( m_AnimaWeaponFUITalkDat, m_AnimaWeaponFUITalkIdList );
   return m_AnimaWeaponFUITalkIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeaponFUITalkParamIdList()
{
   if( m_AnimaWeaponFUITalkParamIdList.size() == 0 )
      loadIdList( m_AnimaWeaponFUITalkParamDat, m_AnimaWeaponFUITalkParamIdList );
   return m_AnimaWeaponFUITalkParamIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeaponIconIdList()
{
   if( m_AnimaWeaponIconIdList.size() == 0 )
      loadIdList( m_AnimaWeaponIconDat, m_AnimaWeaponIconIdList );
   return m_AnimaWeaponIconIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAnimaWeaponItemIdList()
{
   if( m_AnimaWeaponItemIdList.size() == 0 )
      loadIdList( m_AnimaWeaponItemDat, m_AnimaWeaponItemIdList );
   return m_AnimaWeaponItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAquariumFishIdList()
{
   if( m_AquariumFishIdList.size() == 0 )
      loadIdList( m_AquariumFishDat, m_AquariumFishIdList );
   return m_AquariumFishIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAquariumWaterIdList()
{
   if( m_AquariumWaterIdList.size() == 0 )
      loadIdList( m_AquariumWaterDat, m_AquariumWaterIdList );
   return m_AquariumWaterIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getAttackTypeIdList()
{
   if( m_AttackTypeIdList.size() == 0 )
      loadIdList( m_AttackTypeDat, m_AttackTypeIdList );
   return m_AttackTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBalloonIdList()
{
   if( m_BalloonIdList.size() == 0 )
      loadIdList( m_BalloonDat, m_BalloonIdList );
   return m_BalloonIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBaseParamIdList()
{
   if( m_BaseParamIdList.size() == 0 )
      loadIdList( m_BaseParamDat, m_BaseParamIdList );
   return m_BaseParamIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBattleLeveIdList()
{
   if( m_BattleLeveIdList.size() == 0 )
      loadIdList( m_BattleLeveDat, m_BattleLeveIdList );
   return m_BattleLeveIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBeastRankBonusIdList()
{
   if( m_BeastRankBonusIdList.size() == 0 )
      loadIdList( m_BeastRankBonusDat, m_BeastRankBonusIdList );
   return m_BeastRankBonusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBeastReputationRankIdList()
{
   if( m_BeastReputationRankIdList.size() == 0 )
      loadIdList( m_BeastReputationRankDat, m_BeastReputationRankIdList );
   return m_BeastReputationRankIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBeastTribeIdList()
{
   if( m_BeastTribeIdList.size() == 0 )
      loadIdList( m_BeastTribeDat, m_BeastTribeIdList );
   return m_BeastTribeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBehaviorIdList()
{
   if( m_BehaviorIdList.size() == 0 )
      loadIdList( m_BehaviorDat, m_BehaviorIdList );
   return m_BehaviorIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBGMIdList()
{
   if( m_BGMIdList.size() == 0 )
      loadIdList( m_BGMDat, m_BGMIdList );
   return m_BGMIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBNpcAnnounceIconIdList()
{
   if( m_BNpcAnnounceIconIdList.size() == 0 )
      loadIdList( m_BNpcAnnounceIconDat, m_BNpcAnnounceIconIdList );
   return m_BNpcAnnounceIconIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBNpcBaseIdList()
{
   if( m_BNpcBaseIdList.size() == 0 )
      loadIdList( m_BNpcBaseDat, m_BNpcBaseIdList );
   return m_BNpcBaseIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBNpcCustomizeIdList()
{
   if( m_BNpcCustomizeIdList.size() == 0 )
      loadIdList( m_BNpcCustomizeDat, m_BNpcCustomizeIdList );
   return m_BNpcCustomizeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBNpcNameIdList()
{
   if( m_BNpcNameIdList.size() == 0 )
      loadIdList( m_BNpcNameDat, m_BNpcNameIdList );
   return m_BNpcNameIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBuddyActionIdList()
{
   if( m_BuddyActionIdList.size() == 0 )
      loadIdList( m_BuddyActionDat, m_BuddyActionIdList );
   return m_BuddyActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBuddyEquipIdList()
{
   if( m_BuddyEquipIdList.size() == 0 )
      loadIdList( m_BuddyEquipDat, m_BuddyEquipIdList );
   return m_BuddyEquipIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBuddyItemIdList()
{
   if( m_BuddyItemIdList.size() == 0 )
      loadIdList( m_BuddyItemDat, m_BuddyItemIdList );
   return m_BuddyItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBuddyRankIdList()
{
   if( m_BuddyRankIdList.size() == 0 )
      loadIdList( m_BuddyRankDat, m_BuddyRankIdList );
   return m_BuddyRankIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getBuddySkillIdList()
{
   if( m_BuddySkillIdList.size() == 0 )
      loadIdList( m_BuddySkillDat, m_BuddySkillIdList );
   return m_BuddySkillIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCabinetIdList()
{
   if( m_CabinetIdList.size() == 0 )
      loadIdList( m_CabinetDat, m_CabinetIdList );
   return m_CabinetIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCabinetCategoryIdList()
{
   if( m_CabinetCategoryIdList.size() == 0 )
      loadIdList( m_CabinetCategoryDat, m_CabinetCategoryIdList );
   return m_CabinetCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCalendarIdList()
{
   if( m_CalendarIdList.size() == 0 )
      loadIdList( m_CalendarDat, m_CalendarIdList );
   return m_CalendarIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChainBonusIdList()
{
   if( m_ChainBonusIdList.size() == 0 )
      loadIdList( m_ChainBonusDat, m_ChainBonusIdList );
   return m_ChainBonusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCharaMakeCustomizeIdList()
{
   if( m_CharaMakeCustomizeIdList.size() == 0 )
      loadIdList( m_CharaMakeCustomizeDat, m_CharaMakeCustomizeIdList );
   return m_CharaMakeCustomizeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCharaMakeTypeIdList()
{
   if( m_CharaMakeTypeIdList.size() == 0 )
      loadIdList( m_CharaMakeTypeDat, m_CharaMakeTypeIdList );
   return m_CharaMakeTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboRaceIdList()
{
   if( m_ChocoboRaceIdList.size() == 0 )
      loadIdList( m_ChocoboRaceDat, m_ChocoboRaceIdList );
   return m_ChocoboRaceIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboRaceAbilityIdList()
{
   if( m_ChocoboRaceAbilityIdList.size() == 0 )
      loadIdList( m_ChocoboRaceAbilityDat, m_ChocoboRaceAbilityIdList );
   return m_ChocoboRaceAbilityIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboRaceAbilityTypeIdList()
{
   if( m_ChocoboRaceAbilityTypeIdList.size() == 0 )
      loadIdList( m_ChocoboRaceAbilityTypeDat, m_ChocoboRaceAbilityTypeIdList );
   return m_ChocoboRaceAbilityTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboRaceItemIdList()
{
   if( m_ChocoboRaceItemIdList.size() == 0 )
      loadIdList( m_ChocoboRaceItemDat, m_ChocoboRaceItemIdList );
   return m_ChocoboRaceItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboRaceRankIdList()
{
   if( m_ChocoboRaceRankIdList.size() == 0 )
      loadIdList( m_ChocoboRaceRankDat, m_ChocoboRaceRankIdList );
   return m_ChocoboRaceRankIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboRaceStatusIdList()
{
   if( m_ChocoboRaceStatusIdList.size() == 0 )
      loadIdList( m_ChocoboRaceStatusDat, m_ChocoboRaceStatusIdList );
   return m_ChocoboRaceStatusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboRaceTerritoryIdList()
{
   if( m_ChocoboRaceTerritoryIdList.size() == 0 )
      loadIdList( m_ChocoboRaceTerritoryDat, m_ChocoboRaceTerritoryIdList );
   return m_ChocoboRaceTerritoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getChocoboTaxiStandIdList()
{
   if( m_ChocoboTaxiStandIdList.size() == 0 )
      loadIdList( m_ChocoboTaxiStandDat, m_ChocoboTaxiStandIdList );
   return m_ChocoboTaxiStandIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getClassJobIdList()
{
   if( m_ClassJobIdList.size() == 0 )
      loadIdList( m_ClassJobDat, m_ClassJobIdList );
   return m_ClassJobIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getClassJobCategoryIdList()
{
   if( m_ClassJobCategoryIdList.size() == 0 )
      loadIdList( m_ClassJobCategoryDat, m_ClassJobCategoryIdList );
   return m_ClassJobCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanionIdList()
{
   if( m_CompanionIdList.size() == 0 )
      loadIdList( m_CompanionDat, m_CompanionIdList );
   return m_CompanionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanionMoveIdList()
{
   if( m_CompanionMoveIdList.size() == 0 )
      loadIdList( m_CompanionMoveDat, m_CompanionMoveIdList );
   return m_CompanionMoveIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanionTransientIdList()
{
   if( m_CompanionTransientIdList.size() == 0 )
      loadIdList( m_CompanionTransientDat, m_CompanionTransientIdList );
   return m_CompanionTransientIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyActionIdList()
{
   if( m_CompanyActionIdList.size() == 0 )
      loadIdList( m_CompanyActionDat, m_CompanyActionIdList );
   return m_CompanyActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftDraftIdList()
{
   if( m_CompanyCraftDraftIdList.size() == 0 )
      loadIdList( m_CompanyCraftDraftDat, m_CompanyCraftDraftIdList );
   return m_CompanyCraftDraftIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftDraftCategoryIdList()
{
   if( m_CompanyCraftDraftCategoryIdList.size() == 0 )
      loadIdList( m_CompanyCraftDraftCategoryDat, m_CompanyCraftDraftCategoryIdList );
   return m_CompanyCraftDraftCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftManufactoryStateIdList()
{
   if( m_CompanyCraftManufactoryStateIdList.size() == 0 )
      loadIdList( m_CompanyCraftManufactoryStateDat, m_CompanyCraftManufactoryStateIdList );
   return m_CompanyCraftManufactoryStateIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftPartIdList()
{
   if( m_CompanyCraftPartIdList.size() == 0 )
      loadIdList( m_CompanyCraftPartDat, m_CompanyCraftPartIdList );
   return m_CompanyCraftPartIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftProcessIdList()
{
   if( m_CompanyCraftProcessIdList.size() == 0 )
      loadIdList( m_CompanyCraftProcessDat, m_CompanyCraftProcessIdList );
   return m_CompanyCraftProcessIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftSequenceIdList()
{
   if( m_CompanyCraftSequenceIdList.size() == 0 )
      loadIdList( m_CompanyCraftSequenceDat, m_CompanyCraftSequenceIdList );
   return m_CompanyCraftSequenceIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftSupplyItemIdList()
{
   if( m_CompanyCraftSupplyItemIdList.size() == 0 )
      loadIdList( m_CompanyCraftSupplyItemDat, m_CompanyCraftSupplyItemIdList );
   return m_CompanyCraftSupplyItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompanyCraftTypeIdList()
{
   if( m_CompanyCraftTypeIdList.size() == 0 )
      loadIdList( m_CompanyCraftTypeDat, m_CompanyCraftTypeIdList );
   return m_CompanyCraftTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompleteJournalIdList()
{
   if( m_CompleteJournalIdList.size() == 0 )
      loadIdList( m_CompleteJournalDat, m_CompleteJournalIdList );
   return m_CompleteJournalIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCompleteJournalCategoryIdList()
{
   if( m_CompleteJournalCategoryIdList.size() == 0 )
      loadIdList( m_CompleteJournalCategoryDat, m_CompleteJournalCategoryIdList );
   return m_CompleteJournalCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getContentExActionIdList()
{
   if( m_ContentExActionIdList.size() == 0 )
      loadIdList( m_ContentExActionDat, m_ContentExActionIdList );
   return m_ContentExActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getContentFinderConditionIdList()
{
   if( m_ContentFinderConditionIdList.size() == 0 )
      loadIdList( m_ContentFinderConditionDat, m_ContentFinderConditionIdList );
   return m_ContentFinderConditionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getContentFinderConditionTransientIdList()
{
   if( m_ContentFinderConditionTransientIdList.size() == 0 )
      loadIdList( m_ContentFinderConditionTransientDat, m_ContentFinderConditionTransientIdList );
   return m_ContentFinderConditionTransientIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getContentMemberTypeIdList()
{
   if( m_ContentMemberTypeIdList.size() == 0 )
      loadIdList( m_ContentMemberTypeDat, m_ContentMemberTypeIdList );
   return m_ContentMemberTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getContentRouletteIdList()
{
   if( m_ContentRouletteIdList.size() == 0 )
      loadIdList( m_ContentRouletteDat, m_ContentRouletteIdList );
   return m_ContentRouletteIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getContentTypeIdList()
{
   if( m_ContentTypeIdList.size() == 0 )
      loadIdList( m_ContentTypeDat, m_ContentTypeIdList );
   return m_ContentTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCraftActionIdList()
{
   if( m_CraftActionIdList.size() == 0 )
      loadIdList( m_CraftActionDat, m_CraftActionIdList );
   return m_CraftActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCraftLeveIdList()
{
   if( m_CraftLeveIdList.size() == 0 )
      loadIdList( m_CraftLeveDat, m_CraftLeveIdList );
   return m_CraftLeveIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCraftTypeIdList()
{
   if( m_CraftTypeIdList.size() == 0 )
      loadIdList( m_CraftTypeDat, m_CraftTypeIdList );
   return m_CraftTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCurrencyIdList()
{
   if( m_CurrencyIdList.size() == 0 )
      loadIdList( m_CurrencyDat, m_CurrencyIdList );
   return m_CurrencyIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCustomTalkIdList()
{
   if( m_CustomTalkIdList.size() == 0 )
      loadIdList( m_CustomTalkDat, m_CustomTalkIdList );
   return m_CustomTalkIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCutsceneIdList()
{
   if( m_CutsceneIdList.size() == 0 )
      loadIdList( m_CutsceneDat, m_CutsceneIdList );
   return m_CutsceneIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getCutScreenImageIdList()
{
   if( m_CutScreenImageIdList.size() == 0 )
      loadIdList( m_CutScreenImageDat, m_CutScreenImageIdList );
   return m_CutScreenImageIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDailySupplyItemIdList()
{
   if( m_DailySupplyItemIdList.size() == 0 )
      loadIdList( m_DailySupplyItemDat, m_DailySupplyItemIdList );
   return m_DailySupplyItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDeepDungeonBanIdList()
{
   if( m_DeepDungeonBanIdList.size() == 0 )
      loadIdList( m_DeepDungeonBanDat, m_DeepDungeonBanIdList );
   return m_DeepDungeonBanIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDeepDungeonDangerIdList()
{
   if( m_DeepDungeonDangerIdList.size() == 0 )
      loadIdList( m_DeepDungeonDangerDat, m_DeepDungeonDangerIdList );
   return m_DeepDungeonDangerIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDeepDungeonEquipmentIdList()
{
   if( m_DeepDungeonEquipmentIdList.size() == 0 )
      loadIdList( m_DeepDungeonEquipmentDat, m_DeepDungeonEquipmentIdList );
   return m_DeepDungeonEquipmentIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDeepDungeonFloorEffectUIIdList()
{
   if( m_DeepDungeonFloorEffectUIIdList.size() == 0 )
      loadIdList( m_DeepDungeonFloorEffectUIDat, m_DeepDungeonFloorEffectUIIdList );
   return m_DeepDungeonFloorEffectUIIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDeepDungeonItemIdList()
{
   if( m_DeepDungeonItemIdList.size() == 0 )
      loadIdList( m_DeepDungeonItemDat, m_DeepDungeonItemIdList );
   return m_DeepDungeonItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDeepDungeonStatusIdList()
{
   if( m_DeepDungeonStatusIdList.size() == 0 )
      loadIdList( m_DeepDungeonStatusDat, m_DeepDungeonStatusIdList );
   return m_DeepDungeonStatusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDefaultTalkIdList()
{
   if( m_DefaultTalkIdList.size() == 0 )
      loadIdList( m_DefaultTalkDat, m_DefaultTalkIdList );
   return m_DefaultTalkIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDeliveryQuestIdList()
{
   if( m_DeliveryQuestIdList.size() == 0 )
      loadIdList( m_DeliveryQuestDat, m_DeliveryQuestIdList );
   return m_DeliveryQuestIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDisposalShopIdList()
{
   if( m_DisposalShopIdList.size() == 0 )
      loadIdList( m_DisposalShopDat, m_DisposalShopIdList );
   return m_DisposalShopIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDisposalShopFilterTypeIdList()
{
   if( m_DisposalShopFilterTypeIdList.size() == 0 )
      loadIdList( m_DisposalShopFilterTypeDat, m_DisposalShopFilterTypeIdList );
   return m_DisposalShopFilterTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDisposalShopItemIdList()
{
   if( m_DisposalShopItemIdList.size() == 0 )
      loadIdList( m_DisposalShopItemDat, m_DisposalShopItemIdList );
   return m_DisposalShopItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDpsChallengeIdList()
{
   if( m_DpsChallengeIdList.size() == 0 )
      loadIdList( m_DpsChallengeDat, m_DpsChallengeIdList );
   return m_DpsChallengeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDpsChallengeOfficerIdList()
{
   if( m_DpsChallengeOfficerIdList.size() == 0 )
      loadIdList( m_DpsChallengeOfficerDat, m_DpsChallengeOfficerIdList );
   return m_DpsChallengeOfficerIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getDpsChallengeTransientIdList()
{
   if( m_DpsChallengeTransientIdList.size() == 0 )
      loadIdList( m_DpsChallengeTransientDat, m_DpsChallengeTransientIdList );
   return m_DpsChallengeTransientIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEmoteIdList()
{
   if( m_EmoteIdList.size() == 0 )
      loadIdList( m_EmoteDat, m_EmoteIdList );
   return m_EmoteIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEmoteCategoryIdList()
{
   if( m_EmoteCategoryIdList.size() == 0 )
      loadIdList( m_EmoteCategoryDat, m_EmoteCategoryIdList );
   return m_EmoteCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getENpcBaseIdList()
{
   if( m_ENpcBaseIdList.size() == 0 )
      loadIdList( m_ENpcBaseDat, m_ENpcBaseIdList );
   return m_ENpcBaseIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getENpcResidentIdList()
{
   if( m_ENpcResidentIdList.size() == 0 )
      loadIdList( m_ENpcResidentDat, m_ENpcResidentIdList );
   return m_ENpcResidentIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEObjIdList()
{
   if( m_EObjIdList.size() == 0 )
      loadIdList( m_EObjDat, m_EObjIdList );
   return m_EObjIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEquipRaceCategoryIdList()
{
   if( m_EquipRaceCategoryIdList.size() == 0 )
      loadIdList( m_EquipRaceCategoryDat, m_EquipRaceCategoryIdList );
   return m_EquipRaceCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEquipSlotCategoryIdList()
{
   if( m_EquipSlotCategoryIdList.size() == 0 )
      loadIdList( m_EquipSlotCategoryDat, m_EquipSlotCategoryIdList );
   return m_EquipSlotCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEventActionIdList()
{
   if( m_EventActionIdList.size() == 0 )
      loadIdList( m_EventActionDat, m_EventActionIdList );
   return m_EventActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEventIconPriorityIdList()
{
   if( m_EventIconPriorityIdList.size() == 0 )
      loadIdList( m_EventIconPriorityDat, m_EventIconPriorityIdList );
   return m_EventIconPriorityIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEventIconTypeIdList()
{
   if( m_EventIconTypeIdList.size() == 0 )
      loadIdList( m_EventIconTypeDat, m_EventIconTypeIdList );
   return m_EventIconTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEventItemIdList()
{
   if( m_EventItemIdList.size() == 0 )
      loadIdList( m_EventItemDat, m_EventItemIdList );
   return m_EventItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getEventItemHelpIdList()
{
   if( m_EventItemHelpIdList.size() == 0 )
      loadIdList( m_EventItemHelpDat, m_EventItemHelpIdList );
   return m_EventItemHelpIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getExVersionIdList()
{
   if( m_ExVersionIdList.size() == 0 )
      loadIdList( m_ExVersionDat, m_ExVersionIdList );
   return m_ExVersionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFateIdList()
{
   if( m_FateIdList.size() == 0 )
      loadIdList( m_FateDat, m_FateIdList );
   return m_FateIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFCActivityIdList()
{
   if( m_FCActivityIdList.size() == 0 )
      loadIdList( m_FCActivityDat, m_FCActivityIdList );
   return m_FCActivityIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFCAuthorityIdList()
{
   if( m_FCAuthorityIdList.size() == 0 )
      loadIdList( m_FCAuthorityDat, m_FCAuthorityIdList );
   return m_FCAuthorityIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFCAuthorityCategoryIdList()
{
   if( m_FCAuthorityCategoryIdList.size() == 0 )
      loadIdList( m_FCAuthorityCategoryDat, m_FCAuthorityCategoryIdList );
   return m_FCAuthorityCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFCChestNameIdList()
{
   if( m_FCChestNameIdList.size() == 0 )
      loadIdList( m_FCChestNameDat, m_FCChestNameIdList );
   return m_FCChestNameIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFccShopIdList()
{
   if( m_FccShopIdList.size() == 0 )
      loadIdList( m_FccShopDat, m_FccShopIdList );
   return m_FccShopIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFCHierarchyIdList()
{
   if( m_FCHierarchyIdList.size() == 0 )
      loadIdList( m_FCHierarchyDat, m_FCHierarchyIdList );
   return m_FCHierarchyIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFCReputationIdList()
{
   if( m_FCReputationIdList.size() == 0 )
      loadIdList( m_FCReputationDat, m_FCReputationIdList );
   return m_FCReputationIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFCRightsIdList()
{
   if( m_FCRightsIdList.size() == 0 )
      loadIdList( m_FCRightsDat, m_FCRightsIdList );
   return m_FCRightsIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFishingSpotIdList()
{
   if( m_FishingSpotIdList.size() == 0 )
      loadIdList( m_FishingSpotDat, m_FishingSpotIdList );
   return m_FishingSpotIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getFishParameterIdList()
{
   if( m_FishParameterIdList.size() == 0 )
      loadIdList( m_FishParameterDat, m_FishParameterIdList );
   return m_FishParameterIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGardeningSeedIdList()
{
   if( m_GardeningSeedIdList.size() == 0 )
      loadIdList( m_GardeningSeedDat, m_GardeningSeedIdList );
   return m_GardeningSeedIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringConditionIdList()
{
   if( m_GatheringConditionIdList.size() == 0 )
      loadIdList( m_GatheringConditionDat, m_GatheringConditionIdList );
   return m_GatheringConditionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringExpIdList()
{
   if( m_GatheringExpIdList.size() == 0 )
      loadIdList( m_GatheringExpDat, m_GatheringExpIdList );
   return m_GatheringExpIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringItemIdList()
{
   if( m_GatheringItemIdList.size() == 0 )
      loadIdList( m_GatheringItemDat, m_GatheringItemIdList );
   return m_GatheringItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringItemLevelConvertTableIdList()
{
   if( m_GatheringItemLevelConvertTableIdList.size() == 0 )
      loadIdList( m_GatheringItemLevelConvertTableDat, m_GatheringItemLevelConvertTableIdList );
   return m_GatheringItemLevelConvertTableIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringItemPointIdList()
{
   if( m_GatheringItemPointIdList.size() == 0 )
      loadIdList( m_GatheringItemPointDat, m_GatheringItemPointIdList );
   return m_GatheringItemPointIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringNotebookListIdList()
{
   if( m_GatheringNotebookListIdList.size() == 0 )
      loadIdList( m_GatheringNotebookListDat, m_GatheringNotebookListIdList );
   return m_GatheringNotebookListIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringPointIdList()
{
   if( m_GatheringPointIdList.size() == 0 )
      loadIdList( m_GatheringPointDat, m_GatheringPointIdList );
   return m_GatheringPointIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringPointBaseIdList()
{
   if( m_GatheringPointBaseIdList.size() == 0 )
      loadIdList( m_GatheringPointBaseDat, m_GatheringPointBaseIdList );
   return m_GatheringPointBaseIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringPointBonusIdList()
{
   if( m_GatheringPointBonusIdList.size() == 0 )
      loadIdList( m_GatheringPointBonusDat, m_GatheringPointBonusIdList );
   return m_GatheringPointBonusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringPointBonusTypeIdList()
{
   if( m_GatheringPointBonusTypeIdList.size() == 0 )
      loadIdList( m_GatheringPointBonusTypeDat, m_GatheringPointBonusTypeIdList );
   return m_GatheringPointBonusTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringPointNameIdList()
{
   if( m_GatheringPointNameIdList.size() == 0 )
      loadIdList( m_GatheringPointNameDat, m_GatheringPointNameIdList );
   return m_GatheringPointNameIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringSubCategoryIdList()
{
   if( m_GatheringSubCategoryIdList.size() == 0 )
      loadIdList( m_GatheringSubCategoryDat, m_GatheringSubCategoryIdList );
   return m_GatheringSubCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGatheringTypeIdList()
{
   if( m_GatheringTypeIdList.size() == 0 )
      loadIdList( m_GatheringTypeDat, m_GatheringTypeIdList );
   return m_GatheringTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGcArmyExpeditionIdList()
{
   if( m_GcArmyExpeditionIdList.size() == 0 )
      loadIdList( m_GcArmyExpeditionDat, m_GcArmyExpeditionIdList );
   return m_GcArmyExpeditionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGcArmyExpeditionMemberBonusIdList()
{
   if( m_GcArmyExpeditionMemberBonusIdList.size() == 0 )
      loadIdList( m_GcArmyExpeditionMemberBonusDat, m_GcArmyExpeditionMemberBonusIdList );
   return m_GcArmyExpeditionMemberBonusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGcArmyExpeditionTypeIdList()
{
   if( m_GcArmyExpeditionTypeIdList.size() == 0 )
      loadIdList( m_GcArmyExpeditionTypeDat, m_GcArmyExpeditionTypeIdList );
   return m_GcArmyExpeditionTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGcArmyMemberGrowIdList()
{
   if( m_GcArmyMemberGrowIdList.size() == 0 )
      loadIdList( m_GcArmyMemberGrowDat, m_GcArmyMemberGrowIdList );
   return m_GcArmyMemberGrowIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGcArmyTrainingIdList()
{
   if( m_GcArmyTrainingIdList.size() == 0 )
      loadIdList( m_GcArmyTrainingDat, m_GcArmyTrainingIdList );
   return m_GcArmyTrainingIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGCScripShopCategoryIdList()
{
   if( m_GCScripShopCategoryIdList.size() == 0 )
      loadIdList( m_GCScripShopCategoryDat, m_GCScripShopCategoryIdList );
   return m_GCScripShopCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGCScripShopItemIdList()
{
   if( m_GCScripShopItemIdList.size() == 0 )
      loadIdList( m_GCScripShopItemDat, m_GCScripShopItemIdList );
   return m_GCScripShopItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGCShopIdList()
{
   if( m_GCShopIdList.size() == 0 )
      loadIdList( m_GCShopDat, m_GCShopIdList );
   return m_GCShopIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGCShopItemCategoryIdList()
{
   if( m_GCShopItemCategoryIdList.size() == 0 )
      loadIdList( m_GCShopItemCategoryDat, m_GCShopItemCategoryIdList );
   return m_GCShopItemCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGCSupplyDutyIdList()
{
   if( m_GCSupplyDutyIdList.size() == 0 )
      loadIdList( m_GCSupplyDutyDat, m_GCSupplyDutyIdList );
   return m_GCSupplyDutyIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGCSupplyDutyRewardIdList()
{
   if( m_GCSupplyDutyRewardIdList.size() == 0 )
      loadIdList( m_GCSupplyDutyRewardDat, m_GCSupplyDutyRewardIdList );
   return m_GCSupplyDutyRewardIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGeneralActionIdList()
{
   if( m_GeneralActionIdList.size() == 0 )
      loadIdList( m_GeneralActionDat, m_GeneralActionIdList );
   return m_GeneralActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGilShopIdList()
{
   if( m_GilShopIdList.size() == 0 )
      loadIdList( m_GilShopDat, m_GilShopIdList );
   return m_GilShopIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGilShopItemIdList()
{
   if( m_GilShopItemIdList.size() == 0 )
      loadIdList( m_GilShopItemDat, m_GilShopItemIdList );
   return m_GilShopItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGoldSaucerTextDataIdList()
{
   if( m_GoldSaucerTextDataIdList.size() == 0 )
      loadIdList( m_GoldSaucerTextDataDat, m_GoldSaucerTextDataIdList );
   return m_GoldSaucerTextDataIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGrandCompanyIdList()
{
   if( m_GrandCompanyIdList.size() == 0 )
      loadIdList( m_GrandCompanyDat, m_GrandCompanyIdList );
   return m_GrandCompanyIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGrandCompanyRankIdList()
{
   if( m_GrandCompanyRankIdList.size() == 0 )
      loadIdList( m_GrandCompanyRankDat, m_GrandCompanyRankIdList );
   return m_GrandCompanyRankIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGuardianDeityIdList()
{
   if( m_GuardianDeityIdList.size() == 0 )
      loadIdList( m_GuardianDeityDat, m_GuardianDeityIdList );
   return m_GuardianDeityIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGuildleveAssignmentIdList()
{
   if( m_GuildleveAssignmentIdList.size() == 0 )
      loadIdList( m_GuildleveAssignmentDat, m_GuildleveAssignmentIdList );
   return m_GuildleveAssignmentIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGuildOrderGuideIdList()
{
   if( m_GuildOrderGuideIdList.size() == 0 )
      loadIdList( m_GuildOrderGuideDat, m_GuildOrderGuideIdList );
   return m_GuildOrderGuideIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getGuildOrderOfficerIdList()
{
   if( m_GuildOrderOfficerIdList.size() == 0 )
      loadIdList( m_GuildOrderOfficerDat, m_GuildOrderOfficerIdList );
   return m_GuildOrderOfficerIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getHouseRetainerPoseIdList()
{
   if( m_HouseRetainerPoseIdList.size() == 0 )
      loadIdList( m_HouseRetainerPoseDat, m_HouseRetainerPoseIdList );
   return m_HouseRetainerPoseIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getHousingFurnitureIdList()
{
   if( m_HousingFurnitureIdList.size() == 0 )
      loadIdList( m_HousingFurnitureDat, m_HousingFurnitureIdList );
   return m_HousingFurnitureIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getHousingYardObjectIdList()
{
   if( m_HousingYardObjectIdList.size() == 0 )
      loadIdList( m_HousingYardObjectDat, m_HousingYardObjectIdList );
   return m_HousingYardObjectIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getInstanceContentIdList()
{
   if( m_InstanceContentIdList.size() == 0 )
      loadIdList( m_InstanceContentDat, m_InstanceContentIdList );
   return m_InstanceContentIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getInstanceContentBuffIdList()
{
   if( m_InstanceContentBuffIdList.size() == 0 )
      loadIdList( m_InstanceContentBuffDat, m_InstanceContentBuffIdList );
   return m_InstanceContentBuffIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getInstanceContentTextDataIdList()
{
   if( m_InstanceContentTextDataIdList.size() == 0 )
      loadIdList( m_InstanceContentTextDataDat, m_InstanceContentTextDataIdList );
   return m_InstanceContentTextDataIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getInstanceContentTypeIdList()
{
   if( m_InstanceContentTypeIdList.size() == 0 )
      loadIdList( m_InstanceContentTypeDat, m_InstanceContentTypeIdList );
   return m_InstanceContentTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getItemIdList()
{
   if( m_ItemIdList.size() == 0 )
      loadIdList( m_ItemDat, m_ItemIdList );
   return m_ItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getItemActionIdList()
{
   if( m_ItemActionIdList.size() == 0 )
      loadIdList( m_ItemActionDat, m_ItemActionIdList );
   return m_ItemActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getItemFoodIdList()
{
   if( m_ItemFoodIdList.size() == 0 )
      loadIdList( m_ItemFoodDat, m_ItemFoodIdList );
   return m_ItemFoodIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getItemSearchCategoryIdList()
{
   if( m_ItemSearchCategoryIdList.size() == 0 )
      loadIdList( m_ItemSearchCategoryDat, m_ItemSearchCategoryIdList );
   return m_ItemSearchCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getItemSeriesIdList()
{
   if( m_ItemSeriesIdList.size() == 0 )
      loadIdList( m_ItemSeriesDat, m_ItemSeriesIdList );
   return m_ItemSeriesIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getItemSpecialBonusIdList()
{
   if( m_ItemSpecialBonusIdList.size() == 0 )
      loadIdList( m_ItemSpecialBonusDat, m_ItemSpecialBonusIdList );
   return m_ItemSpecialBonusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getItemUICategoryIdList()
{
   if( m_ItemUICategoryIdList.size() == 0 )
      loadIdList( m_ItemUICategoryDat, m_ItemUICategoryIdList );
   return m_ItemUICategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getJournalCategoryIdList()
{
   if( m_JournalCategoryIdList.size() == 0 )
      loadIdList( m_JournalCategoryDat, m_JournalCategoryIdList );
   return m_JournalCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getJournalGenreIdList()
{
   if( m_JournalGenreIdList.size() == 0 )
      loadIdList( m_JournalGenreDat, m_JournalGenreIdList );
   return m_JournalGenreIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getJournalSectionIdList()
{
   if( m_JournalSectionIdList.size() == 0 )
      loadIdList( m_JournalSectionDat, m_JournalSectionIdList );
   return m_JournalSectionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLeveIdList()
{
   if( m_LeveIdList.size() == 0 )
      loadIdList( m_LeveDat, m_LeveIdList );
   return m_LeveIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLeveAssignmentTypeIdList()
{
   if( m_LeveAssignmentTypeIdList.size() == 0 )
      loadIdList( m_LeveAssignmentTypeDat, m_LeveAssignmentTypeIdList );
   return m_LeveAssignmentTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLeveClientIdList()
{
   if( m_LeveClientIdList.size() == 0 )
      loadIdList( m_LeveClientDat, m_LeveClientIdList );
   return m_LeveClientIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLevelIdList()
{
   if( m_LevelIdList.size() == 0 )
      loadIdList( m_LevelDat, m_LevelIdList );
   return m_LevelIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLeveRewardItemIdList()
{
   if( m_LeveRewardItemIdList.size() == 0 )
      loadIdList( m_LeveRewardItemDat, m_LeveRewardItemIdList );
   return m_LeveRewardItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLeveRewardItemGroupIdList()
{
   if( m_LeveRewardItemGroupIdList.size() == 0 )
      loadIdList( m_LeveRewardItemGroupDat, m_LeveRewardItemGroupIdList );
   return m_LeveRewardItemGroupIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLeveVfxIdList()
{
   if( m_LeveVfxIdList.size() == 0 )
      loadIdList( m_LeveVfxDat, m_LeveVfxIdList );
   return m_LeveVfxIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLogFilterIdList()
{
   if( m_LogFilterIdList.size() == 0 )
      loadIdList( m_LogFilterDat, m_LogFilterIdList );
   return m_LogFilterIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLogKindIdList()
{
   if( m_LogKindIdList.size() == 0 )
      loadIdList( m_LogKindDat, m_LogKindIdList );
   return m_LogKindIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLogKindCategoryTextIdList()
{
   if( m_LogKindCategoryTextIdList.size() == 0 )
      loadIdList( m_LogKindCategoryTextDat, m_LogKindCategoryTextIdList );
   return m_LogKindCategoryTextIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getLogMessageIdList()
{
   if( m_LogMessageIdList.size() == 0 )
      loadIdList( m_LogMessageDat, m_LogMessageIdList );
   return m_LogMessageIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMacroIconIdList()
{
   if( m_MacroIconIdList.size() == 0 )
      loadIdList( m_MacroIconDat, m_MacroIconIdList );
   return m_MacroIconIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMacroIconRedirectOldIdList()
{
   if( m_MacroIconRedirectOldIdList.size() == 0 )
      loadIdList( m_MacroIconRedirectOldDat, m_MacroIconRedirectOldIdList );
   return m_MacroIconRedirectOldIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMainCommandIdList()
{
   if( m_MainCommandIdList.size() == 0 )
      loadIdList( m_MainCommandDat, m_MainCommandIdList );
   return m_MainCommandIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMainCommandCategoryIdList()
{
   if( m_MainCommandCategoryIdList.size() == 0 )
      loadIdList( m_MainCommandCategoryDat, m_MainCommandCategoryIdList );
   return m_MainCommandCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMapIdList()
{
   if( m_MapIdList.size() == 0 )
      loadIdList( m_MapDat, m_MapIdList );
   return m_MapIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMapMarkerIdList()
{
   if( m_MapMarkerIdList.size() == 0 )
      loadIdList( m_MapMarkerDat, m_MapMarkerIdList );
   return m_MapMarkerIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMapSymbolIdList()
{
   if( m_MapSymbolIdList.size() == 0 )
      loadIdList( m_MapSymbolDat, m_MapSymbolIdList );
   return m_MapSymbolIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMasterpieceSupplyDutyIdList()
{
   if( m_MasterpieceSupplyDutyIdList.size() == 0 )
      loadIdList( m_MasterpieceSupplyDutyDat, m_MasterpieceSupplyDutyIdList );
   return m_MasterpieceSupplyDutyIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMasterpieceSupplyMultiplierIdList()
{
   if( m_MasterpieceSupplyMultiplierIdList.size() == 0 )
      loadIdList( m_MasterpieceSupplyMultiplierDat, m_MasterpieceSupplyMultiplierIdList );
   return m_MasterpieceSupplyMultiplierIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMateriaIdList()
{
   if( m_MateriaIdList.size() == 0 )
      loadIdList( m_MateriaDat, m_MateriaIdList );
   return m_MateriaIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMinionRaceIdList()
{
   if( m_MinionRaceIdList.size() == 0 )
      loadIdList( m_MinionRaceDat, m_MinionRaceIdList );
   return m_MinionRaceIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMinionRulesIdList()
{
   if( m_MinionRulesIdList.size() == 0 )
      loadIdList( m_MinionRulesDat, m_MinionRulesIdList );
   return m_MinionRulesIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMinionSkillTypeIdList()
{
   if( m_MinionSkillTypeIdList.size() == 0 )
      loadIdList( m_MinionSkillTypeDat, m_MinionSkillTypeIdList );
   return m_MinionSkillTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMobHuntTargetIdList()
{
   if( m_MobHuntTargetIdList.size() == 0 )
      loadIdList( m_MobHuntTargetDat, m_MobHuntTargetIdList );
   return m_MobHuntTargetIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getModelCharaIdList()
{
   if( m_ModelCharaIdList.size() == 0 )
      loadIdList( m_ModelCharaDat, m_ModelCharaIdList );
   return m_ModelCharaIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMonsterNoteIdList()
{
   if( m_MonsterNoteIdList.size() == 0 )
      loadIdList( m_MonsterNoteDat, m_MonsterNoteIdList );
   return m_MonsterNoteIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMonsterNoteTargetIdList()
{
   if( m_MonsterNoteTargetIdList.size() == 0 )
      loadIdList( m_MonsterNoteTargetDat, m_MonsterNoteTargetIdList );
   return m_MonsterNoteTargetIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMountIdList()
{
   if( m_MountIdList.size() == 0 )
      loadIdList( m_MountDat, m_MountIdList );
   return m_MountIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getMountActionIdList()
{
   if( m_MountActionIdList.size() == 0 )
      loadIdList( m_MountActionDat, m_MountActionIdList );
   return m_MountActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getNpcEquipIdList()
{
   if( m_NpcEquipIdList.size() == 0 )
      loadIdList( m_NpcEquipDat, m_NpcEquipIdList );
   return m_NpcEquipIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getOmenIdList()
{
   if( m_OmenIdList.size() == 0 )
      loadIdList( m_OmenDat, m_OmenIdList );
   return m_OmenIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getOnlineStatusIdList()
{
   if( m_OnlineStatusIdList.size() == 0 )
      loadIdList( m_OnlineStatusDat, m_OnlineStatusIdList );
   return m_OnlineStatusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getOrchestrionIdList()
{
   if( m_OrchestrionIdList.size() == 0 )
      loadIdList( m_OrchestrionDat, m_OrchestrionIdList );
   return m_OrchestrionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getOrchestrionPathIdList()
{
   if( m_OrchestrionPathIdList.size() == 0 )
      loadIdList( m_OrchestrionPathDat, m_OrchestrionPathIdList );
   return m_OrchestrionPathIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getParamGrowIdList()
{
   if( m_ParamGrowIdList.size() == 0 )
      loadIdList( m_ParamGrowDat, m_ParamGrowIdList );
   return m_ParamGrowIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getPetIdList()
{
   if( m_PetIdList.size() == 0 )
      loadIdList( m_PetDat, m_PetIdList );
   return m_PetIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getPetActionIdList()
{
   if( m_PetActionIdList.size() == 0 )
      loadIdList( m_PetActionDat, m_PetActionIdList );
   return m_PetActionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getPictureIdList()
{
   if( m_PictureIdList.size() == 0 )
      loadIdList( m_PictureDat, m_PictureIdList );
   return m_PictureIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getPlaceNameIdList()
{
   if( m_PlaceNameIdList.size() == 0 )
      loadIdList( m_PlaceNameDat, m_PlaceNameIdList );
   return m_PlaceNameIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getQuestIdList()
{
   if( m_QuestIdList.size() == 0 )
      loadIdList( m_QuestDat, m_QuestIdList );
   return m_QuestIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getQuestRewardOtherIdList()
{
   if( m_QuestRewardOtherIdList.size() == 0 )
      loadIdList( m_QuestRewardOtherDat, m_QuestRewardOtherIdList );
   return m_QuestRewardOtherIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRaceIdList()
{
   if( m_RaceIdList.size() == 0 )
      loadIdList( m_RaceDat, m_RaceIdList );
   return m_RaceIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRacingChocoboItemIdList()
{
   if( m_RacingChocoboItemIdList.size() == 0 )
      loadIdList( m_RacingChocoboItemDat, m_RacingChocoboItemIdList );
   return m_RacingChocoboItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRacingChocoboNameIdList()
{
   if( m_RacingChocoboNameIdList.size() == 0 )
      loadIdList( m_RacingChocoboNameDat, m_RacingChocoboNameIdList );
   return m_RacingChocoboNameIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRacingChocoboNameCategoryIdList()
{
   if( m_RacingChocoboNameCategoryIdList.size() == 0 )
      loadIdList( m_RacingChocoboNameCategoryDat, m_RacingChocoboNameCategoryIdList );
   return m_RacingChocoboNameCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRacingChocoboNameInfoIdList()
{
   if( m_RacingChocoboNameInfoIdList.size() == 0 )
      loadIdList( m_RacingChocoboNameInfoDat, m_RacingChocoboNameInfoIdList );
   return m_RacingChocoboNameInfoIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRacingChocoboParamIdList()
{
   if( m_RacingChocoboParamIdList.size() == 0 )
      loadIdList( m_RacingChocoboParamDat, m_RacingChocoboParamIdList );
   return m_RacingChocoboParamIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRecipeIdList()
{
   if( m_RecipeIdList.size() == 0 )
      loadIdList( m_RecipeDat, m_RecipeIdList );
   return m_RecipeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRecipeElementIdList()
{
   if( m_RecipeElementIdList.size() == 0 )
      loadIdList( m_RecipeElementDat, m_RecipeElementIdList );
   return m_RecipeElementIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRecipeLevelTableIdList()
{
   if( m_RecipeLevelTableIdList.size() == 0 )
      loadIdList( m_RecipeLevelTableDat, m_RecipeLevelTableIdList );
   return m_RecipeLevelTableIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRecipeNotebookListIdList()
{
   if( m_RecipeNotebookListIdList.size() == 0 )
      loadIdList( m_RecipeNotebookListDat, m_RecipeNotebookListIdList );
   return m_RecipeNotebookListIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRelicIdList()
{
   if( m_RelicIdList.size() == 0 )
      loadIdList( m_RelicDat, m_RelicIdList );
   return m_RelicIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRelic3IdList()
{
   if( m_Relic3IdList.size() == 0 )
      loadIdList( m_Relic3Dat, m_Relic3IdList );
   return m_Relic3IdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRelicItemIdList()
{
   if( m_RelicItemIdList.size() == 0 )
      loadIdList( m_RelicItemDat, m_RelicItemIdList );
   return m_RelicItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRelicNoteIdList()
{
   if( m_RelicNoteIdList.size() == 0 )
      loadIdList( m_RelicNoteDat, m_RelicNoteIdList );
   return m_RelicNoteIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRelicNoteCategoryIdList()
{
   if( m_RelicNoteCategoryIdList.size() == 0 )
      loadIdList( m_RelicNoteCategoryDat, m_RelicNoteCategoryIdList );
   return m_RelicNoteCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRetainerTaskIdList()
{
   if( m_RetainerTaskIdList.size() == 0 )
      loadIdList( m_RetainerTaskDat, m_RetainerTaskIdList );
   return m_RetainerTaskIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRetainerTaskNormalIdList()
{
   if( m_RetainerTaskNormalIdList.size() == 0 )
      loadIdList( m_RetainerTaskNormalDat, m_RetainerTaskNormalIdList );
   return m_RetainerTaskNormalIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRetainerTaskParameterIdList()
{
   if( m_RetainerTaskParameterIdList.size() == 0 )
      loadIdList( m_RetainerTaskParameterDat, m_RetainerTaskParameterIdList );
   return m_RetainerTaskParameterIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getRetainerTaskRandomIdList()
{
   if( m_RetainerTaskRandomIdList.size() == 0 )
      loadIdList( m_RetainerTaskRandomDat, m_RetainerTaskRandomIdList );
   return m_RetainerTaskRandomIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSalvageIdList()
{
   if( m_SalvageIdList.size() == 0 )
      loadIdList( m_SalvageDat, m_SalvageIdList );
   return m_SalvageIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSatisfactionNpcIdList()
{
   if( m_SatisfactionNpcIdList.size() == 0 )
      loadIdList( m_SatisfactionNpcDat, m_SatisfactionNpcIdList );
   return m_SatisfactionNpcIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSatisfactionSupplyIdList()
{
   if( m_SatisfactionSupplyIdList.size() == 0 )
      loadIdList( m_SatisfactionSupplyDat, m_SatisfactionSupplyIdList );
   return m_SatisfactionSupplyIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSatisfactionSupplyRewardIdList()
{
   if( m_SatisfactionSupplyRewardIdList.size() == 0 )
      loadIdList( m_SatisfactionSupplyRewardDat, m_SatisfactionSupplyRewardIdList );
   return m_SatisfactionSupplyRewardIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getScreenImageIdList()
{
   if( m_ScreenImageIdList.size() == 0 )
      loadIdList( m_ScreenImageDat, m_ScreenImageIdList );
   return m_ScreenImageIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSecretRecipeBookIdList()
{
   if( m_SecretRecipeBookIdList.size() == 0 )
      loadIdList( m_SecretRecipeBookDat, m_SecretRecipeBookIdList );
   return m_SecretRecipeBookIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSpearfishingItemIdList()
{
   if( m_SpearfishingItemIdList.size() == 0 )
      loadIdList( m_SpearfishingItemDat, m_SpearfishingItemIdList );
   return m_SpearfishingItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSpearfishingNotebookIdList()
{
   if( m_SpearfishingNotebookIdList.size() == 0 )
      loadIdList( m_SpearfishingNotebookDat, m_SpearfishingNotebookIdList );
   return m_SpearfishingNotebookIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSpecialShopIdList()
{
   if( m_SpecialShopIdList.size() == 0 )
      loadIdList( m_SpecialShopDat, m_SpecialShopIdList );
   return m_SpecialShopIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSpecialShopItemCategoryIdList()
{
   if( m_SpecialShopItemCategoryIdList.size() == 0 )
      loadIdList( m_SpecialShopItemCategoryDat, m_SpecialShopItemCategoryIdList );
   return m_SpecialShopItemCategoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getStainIdList()
{
   if( m_StainIdList.size() == 0 )
      loadIdList( m_StainDat, m_StainIdList );
   return m_StainIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getStatusIdList()
{
   if( m_StatusIdList.size() == 0 )
      loadIdList( m_StatusDat, m_StatusIdList );
   return m_StatusIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getStoryIdList()
{
   if( m_StoryIdList.size() == 0 )
      loadIdList( m_StoryDat, m_StoryIdList );
   return m_StoryIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getSwitchTalkIdList()
{
   if( m_SwitchTalkIdList.size() == 0 )
      loadIdList( m_SwitchTalkDat, m_SwitchTalkIdList );
   return m_SwitchTalkIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTerritoryTypeIdList()
{
   if( m_TerritoryTypeIdList.size() == 0 )
      loadIdList( m_TerritoryTypeDat, m_TerritoryTypeIdList );
   return m_TerritoryTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTextCommandIdList()
{
   if( m_TextCommandIdList.size() == 0 )
      loadIdList( m_TextCommandDat, m_TextCommandIdList );
   return m_TextCommandIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTitleIdList()
{
   if( m_TitleIdList.size() == 0 )
      loadIdList( m_TitleDat, m_TitleIdList );
   return m_TitleIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTomestonesIdList()
{
   if( m_TomestonesIdList.size() == 0 )
      loadIdList( m_TomestonesDat, m_TomestonesIdList );
   return m_TomestonesIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTomestonesItemIdList()
{
   if( m_TomestonesItemIdList.size() == 0 )
      loadIdList( m_TomestonesItemDat, m_TomestonesItemIdList );
   return m_TomestonesItemIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTopicSelectIdList()
{
   if( m_TopicSelectIdList.size() == 0 )
      loadIdList( m_TopicSelectDat, m_TopicSelectIdList );
   return m_TopicSelectIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTownIdList()
{
   if( m_TownIdList.size() == 0 )
      loadIdList( m_TownDat, m_TownIdList );
   return m_TownIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTraitIdList()
{
   if( m_TraitIdList.size() == 0 )
      loadIdList( m_TraitDat, m_TraitIdList );
   return m_TraitIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTraitRecastIdList()
{
   if( m_TraitRecastIdList.size() == 0 )
      loadIdList( m_TraitRecastDat, m_TraitRecastIdList );
   return m_TraitRecastIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTraitTransientIdList()
{
   if( m_TraitTransientIdList.size() == 0 )
      loadIdList( m_TraitTransientDat, m_TraitTransientIdList );
   return m_TraitTransientIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTribeIdList()
{
   if( m_TribeIdList.size() == 0 )
      loadIdList( m_TribeDat, m_TribeIdList );
   return m_TribeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTripleTriadIdList()
{
   if( m_TripleTriadIdList.size() == 0 )
      loadIdList( m_TripleTriadDat, m_TripleTriadIdList );
   return m_TripleTriadIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTripleTriadCardIdList()
{
   if( m_TripleTriadCardIdList.size() == 0 )
      loadIdList( m_TripleTriadCardDat, m_TripleTriadCardIdList );
   return m_TripleTriadCardIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTripleTriadCardRarityIdList()
{
   if( m_TripleTriadCardRarityIdList.size() == 0 )
      loadIdList( m_TripleTriadCardRarityDat, m_TripleTriadCardRarityIdList );
   return m_TripleTriadCardRarityIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTripleTriadCardResidentIdList()
{
   if( m_TripleTriadCardResidentIdList.size() == 0 )
      loadIdList( m_TripleTriadCardResidentDat, m_TripleTriadCardResidentIdList );
   return m_TripleTriadCardResidentIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTripleTriadCardTypeIdList()
{
   if( m_TripleTriadCardTypeIdList.size() == 0 )
      loadIdList( m_TripleTriadCardTypeDat, m_TripleTriadCardTypeIdList );
   return m_TripleTriadCardTypeIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTripleTriadCompetitionIdList()
{
   if( m_TripleTriadCompetitionIdList.size() == 0 )
      loadIdList( m_TripleTriadCompetitionDat, m_TripleTriadCompetitionIdList );
   return m_TripleTriadCompetitionIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTripleTriadRuleIdList()
{
   if( m_TripleTriadRuleIdList.size() == 0 )
      loadIdList( m_TripleTriadRuleDat, m_TripleTriadRuleIdList );
   return m_TripleTriadRuleIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTutorialIdList()
{
   if( m_TutorialIdList.size() == 0 )
      loadIdList( m_TutorialDat, m_TutorialIdList );
   return m_TutorialIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTutorialDPSIdList()
{
   if( m_TutorialDPSIdList.size() == 0 )
      loadIdList( m_TutorialDPSDat, m_TutorialDPSIdList );
   return m_TutorialDPSIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTutorialHealerIdList()
{
   if( m_TutorialHealerIdList.size() == 0 )
      loadIdList( m_TutorialHealerDat, m_TutorialHealerIdList );
   return m_TutorialHealerIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getTutorialTankIdList()
{
   if( m_TutorialTankIdList.size() == 0 )
      loadIdList( m_TutorialTankDat, m_TutorialTankIdList );
   return m_TutorialTankIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWarpIdList()
{
   if( m_WarpIdList.size() == 0 )
      loadIdList( m_WarpDat, m_WarpIdList );
   return m_WarpIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWeatherIdList()
{
   if( m_WeatherIdList.size() == 0 )
      loadIdList( m_WeatherDat, m_WeatherIdList );
   return m_WeatherIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWeatherGroupIdList()
{
   if( m_WeatherGroupIdList.size() == 0 )
      loadIdList( m_WeatherGroupDat, m_WeatherGroupIdList );
   return m_WeatherGroupIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWeatherRateIdList()
{
   if( m_WeatherRateIdList.size() == 0 )
      loadIdList( m_WeatherRateDat, m_WeatherRateIdList );
   return m_WeatherRateIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWeeklyBingoOrderDataIdList()
{
   if( m_WeeklyBingoOrderDataIdList.size() == 0 )
      loadIdList( m_WeeklyBingoOrderDataDat, m_WeeklyBingoOrderDataIdList );
   return m_WeeklyBingoOrderDataIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWeeklyBingoRewardDataIdList()
{
   if( m_WeeklyBingoRewardDataIdList.size() == 0 )
      loadIdList( m_WeeklyBingoRewardDataDat, m_WeeklyBingoRewardDataIdList );
   return m_WeeklyBingoRewardDataIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWeeklyBingoTextIdList()
{
   if( m_WeeklyBingoTextIdList.size() == 0 )
      loadIdList( m_WeeklyBingoTextDat, m_WeeklyBingoTextIdList );
   return m_WeeklyBingoTextIdList;
}
const std::set< uint32_t >& ExdDataGenerated::getWorldDCGroupTypeIdList()
{
   if( m_WorldDCGroupTypeIdList.size() == 0 )
      loadIdList( m_WorldDCGroupTypeDat, m_WorldDCGroupTypeIdList );
   return m_WorldDCGroupTypeIdList;
}


  };

}
}

#endif

