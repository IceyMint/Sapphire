#include <string>

namespace Sapphire::Util
{
  std::string base64Encode( uint8_t const*, uint32_t len );

  std::string base64Decode( const std::string& s );
}


