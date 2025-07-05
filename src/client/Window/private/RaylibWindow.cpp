#include "Window.h"

#include <raylib.h>

namespace goop::Window
{
void CreateWindow( int width, int height, const char* title )
{
	InitWindow( width, height, title );
}
void DestroyWindow()
{
	CloseWindow();
}
} // namespace goop::Window
