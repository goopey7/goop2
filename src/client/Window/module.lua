local module = {
	name = "Window",
	type = "dylib",
	dependencies = { "spdlog", "raylib", "ImGui", "rlImGui" },
	include_dirs = { "public" },
}

ob.add_module(module)
