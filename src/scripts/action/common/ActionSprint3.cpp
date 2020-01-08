#include <ScriptObject.h>
#include <Actor/Player.h>
#include <Action/Action.h>

class ActionSprint3 :
  public Sapphire::ScriptAPI::ActionScript
{
public:
  ActionSprint3() :
    Sapphire::ScriptAPI::ActionScript( 3 )
  {
  }

  void onExecute( Sapphire::World::Action::Action& action ) override
  {
    /*
    auto sourceChara = action.getSourceChara();

    if( !sourceChara->isPlayer() )
      return;

    action.getEffectbuilder()->applyStatusEffect( sourceChara, sourceChara, 50, 20000, 30 );
    */
  }
};

EXPOSE_SCRIPT( ActionSprint3 );