#ifndef NATIVE_SCRIPT_API
#define NATIVE_SCRIPT_API

#include <string>
#include "ForwardsZone.h"

#ifdef _MSC_VER
#define EXPORT __declspec( dllexport )
#else
#define EXPORT __attribute__((visibility("default")))
#endif

// todo: this is shit
// constant script ids for certain events
#define EVENTSCRIPT_AETHERYTE_ID 0x50000
#define EVENTSCRIPT_AETHERNET_ID 0x50001

namespace Core
{
  class Framework;
}

namespace Sapphire::ScriptAPI
{
  /*!
  * @brief The base class that any script should inherit from and set the type param accordingly
  */
  class ScriptObject
  {
  protected:
    uint32_t m_id;
    std::size_t m_type;

    Core::Framework* m_framework;

  public:
    /*!
    * @param id an ID which uniquely identifies this script in relation to it's type
    * @param type The RTTI hash code of the implementing type to uniquely identify it
    */
    ScriptObject( uint32_t id, std::size_t type );

    /*!
    * @brief Gets the ID set for this script
    *
    * @return The allocated ID of the script set during object construction
    */
    virtual uint32_t getId() const;

    /*!
    * @brief Gets the unique identifier (hash_code) of the script
    *
    * @return The hash_code of the script
    */
    virtual std::size_t getType() const;

    /*!
    * @brief Sets the ptr to the framework for use inside scripts
    * 
    * @param fw The ptr to g_fw (Core::Framework)
    */
    virtual void setFramework( Core::Framework* fw );

    /*!
    * @brief Returns the current ptr to framework set for the current script
    * 
    * @return A pointer to Core::Framework
    */
    virtual Core::Framework* getFramework() const;
  };


  /*!
  * @brief The base class for any scripts that implement behaviour related to status effects.
  */
  class StatusEffectScript : public ScriptObject
  {
  public:
    explicit StatusEffectScript( uint32_t effectId );

    /*!
    * @brief Called on each tick that a status effect is active on an actor
    *
    * @param actor the actor the status effect is ticking on
    */
    virtual void onTick( Core::Entity::Chara& actor );

    /*!
    * @brief Called when the status effect is applied to an actor
    *
    * @param actor the actor on which the status effect was applied to
    */
    virtual void onApply( Core::Entity::Chara& actor );

    /*!
    * @brief Called when the actor (usually a player) removes the status effect by right clicking it
    *
    * @param actor The actor on which the effect was removed from
    */
    virtual void onRemove( Core::Entity::Chara& actor );

    /*!
    * @brief Called when the status effect expires
    *
    * @param actor The actor on which the efect expired on
    */
    virtual void onExpire( Core::Entity::Chara& actor );

    /*!
    * @brief Called when the player with the status effect collides with another player, eg. hot potato
    *
    * @param actor The actor which has status effect
    * @param actorHit The actor who collided with the status effect owner
    */
    virtual void onPlayerCollision( Core::Entity::Chara& actor, Core::Entity::Chara& actorHit );

    /*!
    * @brief Called when the owner finishes a cast
    *
    * @param actor The actor who finished a cast
    */
    virtual void onPlayerFinishCast( Core::Entity::Chara& actor );

    /*!
    * @brief Called when the status effect owner was damaged
    *
    * @param actor The actor that was damaged
    */
    virtual void onPlayerDamaged( Core::Entity::Chara& actor );

    /*!
    * @brief Called when the status effect owner dies
    *
    * @param actor The actor that died
    */
    virtual void onPlayerDeath( Core::Entity::Chara& actor );
  };


  /*!
  * @brief The base class for any scripts that implement behaviour related to actions
  */
  class ActionScript :  public ScriptObject
  {
  public:
    explicit ActionScript( uint32_t abilityId );

    virtual void onStart( Core::Entity::Chara& sourceActor, Core::Entity::Chara& targetActor );

    virtual void onCastFinish( Core::Entity::Player& player, Core::Entity::Chara& targetActor );

    virtual void onInterrupt( Core::Entity::Chara& sourceActor/*, Core::Entity::Chara targetActor*/ );
  };

  /*!
  * @brief The base class for any scripts that implement behaviour related to the event system.
  * This includes but is not limited to: NPCs, shops, some world objects
  */
  class EventScript : public ScriptObject
  {
  protected:
    template< typename Ret, class Obj >
    inline std::function< void( Core::Entity::Player& ) > bindScene( Ret ( Obj::*f )( Core::Entity::Player& ) )
    {
      return std::bind( f, static_cast< Obj* >( this ), std::placeholders::_1 );
    }

  public:
    explicit EventScript( uint32_t questId );

    virtual void onTalk( uint32_t eventId, Core::Entity::Player& player, uint64_t actorId );

    virtual void onNpcKill( uint32_t npcId, Core::Entity::Player& player );

    virtual void onEmote( uint64_t actorId, uint32_t eventId, uint32_t emoteId, Core::Entity::Player& player );

    virtual void onEnterTerritory( Core::Entity::Player& player, uint32_t eventId, uint16_t param1, uint16_t param2 );

    virtual void onWithinRange( Core::Entity::Player& player, uint32_t eventId, uint32_t param1, float x, float y, float z );

    virtual void onOutsideRange( Core::Entity::Player& player, uint32_t eventId, uint32_t param1, float x, float y, float z );

    virtual void
      onEventItem( Core::Entity::Player& player, uint32_t eventItemId, uint32_t eventId, uint32_t castTime, uint64_t targetId );

    virtual void onEventHandlerTradeReturn( Core::Entity::Player& player, uint32_t eventId, uint16_t subEvent, uint16_t param,
                                            uint32_t catalogId );
  };


  /*!
  * @brief The base class for any scripts that implement behaviour related to BattleNPCs
  */
  class BattleNpcScript : public ScriptObject
  {
  public:
    explicit BattleNpcScript( uint32_t npcId );
  };

  /*!
  * @brief The base class for any scripts that implement behaviour related to zones
  */
  class ZoneScript : public ScriptObject
  {
  public:
    explicit ZoneScript( uint32_t zoneId );

    virtual void onZoneInit();
  };

  /*!
  * @brief The base class for any scripts that implement behaviour related to instance content zones
  */
  class InstanceContentScript : public ScriptObject
  {
  public:
    explicit InstanceContentScript( uint32_t instanceContentId );

    virtual void onInit( Core::InstanceContentPtr instance );

    virtual void onUpdate( Core::InstanceContentPtr instance, uint32_t currTime );

    virtual void onEnterTerritory( Core::InstanceContentPtr instance, Core::Entity::Player& player, uint32_t eventId,
                                  uint16_t param1, uint16_t param2 );
  };

}

#endif
