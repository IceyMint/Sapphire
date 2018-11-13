#ifndef SAPPHIRE_HOUSINGMGR_H
#define SAPPHIRE_HOUSINGMGR_H

#include "Forwards.h"
#include "HousingZone.h"
#include <set>
#include <unordered_map>

namespace Core
{
  namespace Data
  {
    using HousingZonePtr = std::shared_ptr< HousingZone >;
  }

  class HousingMgr
  {

  public:
    HousingMgr();
    virtual ~HousingMgr();

    bool init();

    uint16_t getNexLandId();
    void insertHousingZone( Core::Data::HousingZonePtr hZone );
    Core::Data::HousingZonePtr getHousingZone( uint16_t id );
    Core::Data::HousingZonePtr getHousingZoneByLandSetId( uint32_t id );
    Core::LandPtr getLandByOwnerId( uint32_t id );

    void sendLandSignOwned( Entity::Player& player, uint8_t ward, uint8_t plot );
    void sendLandSignFree( Entity::Player& player, uint8_t ward, uint8_t plot );

  private:
    using HousingZonePtrMap = std::unordered_map< uint16_t, Core::Data::HousingZonePtr >;
    uint16_t m_lastLandId;
    HousingZonePtrMap m_housingZonePtrMap;
  };

}

#endif // SAPPHIRE_HOUSINGMGR_H
