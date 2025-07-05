local module = {
	name = "Window",
	type = "dylib",
	dependencies = { "spdlog", "raylib" },
	include_dirs = { "public" },
}

ob.add_module(module)
