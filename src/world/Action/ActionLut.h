#pragma once

#include <cstdint>
#include <unordered_map>
#include <vector>

namespace Sapphire::World::Action
{
  struct ActionEntry
  {
    uint16_t potency;
    uint16_t comboPotency;
    uint16_t flankPotency;
    uint16_t frontPotency;
    uint16_t rearPotency;
    uint16_t curePotency;
    uint16_t restoreMPPercentage;
    std::vector< uint32_t > nextCombo;
  };

  class ActionLut
  {
  public:
    using Lut = std::unordered_map< uint16_t, ActionEntry >;

    static bool validEntryExists( uint16_t actionId );
    static const ActionEntry& getEntry( uint16_t actionId );

    static Lut m_actionLut;
  };
}
