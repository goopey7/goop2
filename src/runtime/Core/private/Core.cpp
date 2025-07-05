#include <spdlog/spdlog.h>
#include <unistd.h>

namespace goop::Core
{
void Startup()
{
	spdlog::set_pattern( "[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v" );
	spdlog::set_pattern( "[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] %v" );
	spdlog::info( "Core starting up" );
	sleep( 10 );
}

void Shutdown()
{
	spdlog::info( "Core shutting down" );
}
} // namespace goop::Core
