#include "app.h"

int main()
{
	InitWindow(1280, 720, "CPP-Game");
	SetTargetFPS(30);
#if _DEBUG
	TraceLog(LOG_WARNING, "Debug is An");
#else
	// Disable Console?
#endif // _DEBUG

	TraceLog(LOG_INFO, "Loading Objects...");
	Background background;
	TraceLog(LOG_INFO, "All Objects Loaded.");

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

		//DrawText("Hello World!", 1280 / 2, 720 / 2, 80, Color{ 255,255,255,255 });
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
