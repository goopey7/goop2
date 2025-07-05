#include <Core.h>
#include <Window.h>

int main()
{
	goop::Window::CreateWindow( 800, 450, "raylib!" );
	goop::Core::Startup();
	goop::Core::Shutdown();
	goop::Window::DestroyWindow();
}
