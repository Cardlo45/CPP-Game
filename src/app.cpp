#include "app.h"

bool SortGameobjects(GameObject* a, GameObject* b)
{
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	InitWindow(1280, 720, "CPP-Game");
	SetTargetFPS(30);
#if _DEBUG
	TraceLog(LOG_WARNING, "Debug is An");
#else
	#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif // _DEBUG

	TraceLog(LOG_INFO, "Loading Objects...");
	Background background;
	Object1 obj1;
	Object2 obj2;
	Object3 obj3;
	Object4 obj4;
	Object5 obj5;
	TraceLog(LOG_INFO, "All Objects Loaded.");

	// Sort Gameobject by Layer
	gameObjects.sort([](GameObject* a, GameObject* b) -> bool { return a->layer < b->layer; });

	while (!WindowShouldClose())
	{
		for (GameObject* go : gameObjects)
		{
			go->Update();
		}
		BeginDrawing();
		ClearBackground(Color{ 0,0,0,255 });
		for (GameObject* go : gameObjects)
		{
			go->Render();
		}
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
