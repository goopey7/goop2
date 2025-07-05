local module = {
	name = "Core",
	type = "dylib",
	dependencies = { "spdlog" },
	include_dirs = { "public" },
}

ob.add_module(module)
