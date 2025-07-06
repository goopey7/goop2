local client_target = {
	name = "client",
	module_directories = {
		"src/runtime",
		"src/client",
	},
	output_dir = "bin/client",
}
ob.add_target(client_target)
