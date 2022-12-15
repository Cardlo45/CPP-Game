#include "app.h"

int main()
{
	InitWindow(1280, 720, "CPP-Game");
	Background background;

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(Color{ 0,0,0,255 });
		//DrawText("Hello World!", 1280 / 2, 720 / 2, 80, Color{ 255,255,255,255 });
		EndDrawing();
	}
	CloseWindow();
	return 0;
}