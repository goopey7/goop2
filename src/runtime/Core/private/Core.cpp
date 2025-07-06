#include <spdlog/spdlog.h>
#include <unistd.h>

#include <cstdint>
#include <entt/entity/registry.hpp>

namespace goop::Core
{
void Startup()
{
	entt::registry reg;
	entt::entity e = reg.create();
	spdlog::info("Created entity with id: {}", static_cast<uint32_t>(e));
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
