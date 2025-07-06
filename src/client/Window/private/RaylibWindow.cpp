#include "Window.h"

#include <imgui.h>
#include <raylib.h>
#include <rlImGui.h>

namespace goop::Window
{
void CreateWindow( int width, int height, const char* title )
{
	SetTraceLogLevel(LOG_ERROR);
	InitWindow( width, height, title );
	SetWindowState(FLAG_WINDOW_RESIZABLE);
	rlImGuiSetup( true );
}
void Draw()
{
	SetExitKey( KEY_NULL );
	BeginDrawing();
	ClearBackground(BLACK);
	rlImGuiBegin();
	ImGui::ShowDemoWindow();
	rlImGuiEnd();
	EndDrawing();
}
bool ShouldClose()
{
	return WindowShouldClose();
}
void DestroyWindow()
{
	rlImGuiShutdown();
	CloseWindow();
}
} // namespace goop::Window
