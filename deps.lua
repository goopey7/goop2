ob.use_repo("https://github.com/goopey7/omnibuild-packages.git")
ob.use_package("spdlog", "v1.15.3")
ob.use_package("entt", "v3.15.0")

if ob.target == "client" then
	ob.use_package("raylib", "5.5")
	ob.use_package("ImGui", "v1.92.0")
	ob.use_package("rlImGui", "main")
end
