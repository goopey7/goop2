local module = {
	name = "Core",
	type = "dylib",
	dependencies = { "spdlog", "entt" },
	include_dirs = { "public" },
}

ob.add_module(module)
