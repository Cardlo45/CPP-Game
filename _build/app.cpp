#include "global.h"

int main(void)
{
	InitWindow(1280, 720, "CPP-Game Alpha 0.1.x");

	// Background
	// CollisionHandler
	Player player;
	// EnemySpawner
	// MusicPlayer
	// ScoreDisplay

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
			go->Update();
		}
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
