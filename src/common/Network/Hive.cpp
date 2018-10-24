#include <boost/bind.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/interprocess/detail/atomic.hpp>
#include "Hive.h"

namespace Core {
namespace Network {

//-----------------------------------------------------------------------------

Hive::Hive()
  :
  m_work_ptr( new boost::asio::io_service::work( m_io_service ) ),
  m_shutdown( 0 )
{
}

Hive::~Hive()
{
}

boost::asio::io_service& Hive::GetService()
{
  return m_io_service;
}

bool Hive::HasStopped()
{
  uint32_t v1 = 1;
  uint32_t v2 = 1;
  return m_shutdown.compare_exchange_strong( v1, v2 );
}

void Hive::Poll()
{
  m_io_service.poll();
}

void Hive::Run()
{
  m_io_service.run();
}

void Hive::Stop()
{
  uint32_t v1 = 1;
  uint32_t v2 = 0;
  if( !m_shutdown.compare_exchange_strong( v1, v2 ) )
  {
    m_work_ptr.reset();
    m_io_service.run();
    m_io_service.stop();
  }
}

void Hive::Reset()
{
  uint32_t v1 = 0;
  uint32_t v2 = 1;
  if( m_shutdown.compare_exchange_strong( v1, v2 ) )
  {
    m_io_service.reset();
    m_work_ptr.reset( new boost::asio::io_service::work( m_io_service ) );
  }
}

}
}
