#ifndef SAPPHIRE_NAVIMGR_H
#define SAPPHIRE_NAVIMGR_H

#include "ForwardsZone.h"
#include "BaseManager.h"

#include <array>

namespace Sapphire::World::Manager
{
  class NaviMgr : public BaseManager
  {

  public:

    NaviMgr( FrameworkPtr pFw );
    virtual ~NaviMgr() = default;

    bool setupTerritory( const std::string& internalName );
    Navi::NaviProviderPtr getNaviProvider( const std::string& internalName );

  private:
    FrameworkPtr m_pFw;

    std::unordered_map< std::string, Navi::NaviProviderPtr > m_naviProviderTerritoryMap;
  };

}

#endif // SAPPHIRE_NAVIMGR_H
