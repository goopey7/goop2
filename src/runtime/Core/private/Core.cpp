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
	entt::entity e1 = reg.create();
	spdlog::info( "Created entity with id: {}", static_cast<uint32_t>( e ) );
	spdlog::info( "Created entity with id: {}", static_cast<uint32_t>( e1 ) );
	spdlog::set_pattern( "[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v" );
	spdlog::set_pattern( "[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] %v" );
	spdlog::info( "Core starting up" );
}

void Shutdown()
{
	spdlog::info( "Core shutting down" );
}
} // namespace goop::Core
