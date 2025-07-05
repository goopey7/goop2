ob.use_repo("https://github.com/goopey7/omnibuild-packages.git")
ob.use_package("spdlog", "v1.15.3")

if ob.target == "client" then
	ob.use_package("raylib", "5.5")
end
