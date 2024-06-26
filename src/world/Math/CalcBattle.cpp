#include <cmath>

#include <Exd/ExdData.h>
#include <Common.h>
#include <Service.h>

#include "Actor/Chara.h"

#include "Actor/Player.h"

#include "CalcBattle.h"

using namespace Sapphire::Math;
using namespace Sapphire::Entity;

/*
   Class used for battle-related formulas and calculations.
   Big thanks to the Theoryjerks group!

   NOTE:
   Formulas here shouldn't be considered final. It's possible that the formula it was based on is correct but 
   wasn't implemented correctly here, or approximated things due to limited knowledge of how things work in retail.
   It's also possible that we're using formulas that were correct for previous patches, but not the current version.

   TODO:

   Damage outgoing calculations. This includes auto-attacks, etc.
   More formulas in general. Most of it was moved to another class, but work can be done in this area as well already.

*/

uint32_t CalcBattle::calculateHealValue( PlayerPtr pPlayer, uint32_t potency, Sapphire::FrameworkPtr pFw )
{
  auto& exdData = Common::Service< Data::ExdData >::ref();
  auto classInfo = exdData.getRow< Excel::ClassJob >( static_cast< uint8_t >( pPlayer->getClass() ) );
  auto paramGrowthInfo = exdData.getRow< Excel::ParamGrow >( pPlayer->getLevel() );

  if( !classInfo || !paramGrowthInfo )
    return 0;

  //auto jobModVal = classInfoIt->second;

  // consider 3% variation
  return potency / 10;
}
