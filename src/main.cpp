#include <string>
#include <list>
#include <raylib-cpp.hpp>
#include "inc/globals.hpp"
#include "inc/gameobject.hpp"
#include "inc/gameobjects/background.hpp"
#include "inc/gameobjects/obj1.hpp"
#include "inc/gameobjects/obj2.hpp"
#include "inc/gameobjects/obj3.hpp"
#include "inc/gameobjects/obj4.hpp"
#include "inc/gameobjects/obj5.hpp"

#include "inc/export_img.hpp"

int main()
{
	int wHeight = 720;
	int wWidth = 1280;
	std::string wTitle = "CPP-Game";
	raylib::Window w(wWidth, wHeight, wTitle);
	SetTargetFPS(60);
	SetExitKey(KEY_NULL); // Esc will not stop the programm

	ExportImg(); // Create Image Headers

	TraceLog(LOG_INFO, "Loading Objects...");
	Background background;
	Object1 obj1;
	Object2 obj2;
	Object3 obj3;
	Object4 obj4;
	Object5 obj5;
	TraceLog(LOG_INFO, "All Objects Loaded.");
	
	// Main Loop
	while (!w.ShouldClose())
	{
		// Update Gameobjects (move them, do logic, delete them)
		for (Gameobject *go : gameobjects)
		{
			go->Update();
		}
		// Draw the Screen
		BeginDrawing();
		ClearBackground(Color{0, 0, 0, 255});
		for (Gameobject *go : gameobjects)
		{
			go->Render();
		}
		EndDrawing();
	}
	CloseWindow();
	return 0;
}