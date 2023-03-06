#include "../inc/gameobjects/background.hpp"
#include "../assets/img.png.h"

void Background::Update()
{
	if (IsKeyDown(KEY_S))
	{
		vert = 2; // scroll background down
	}
	else if (IsKeyDown(KEY_W))
	{
		vert = 1; // scroll background up
	}
	else if (IsKeyDown(KEY_E))
	{
		vert = 0; // halt background
	}

	// movement logic
	if (position.y < 0 && vert == 2)
	{
		position.y += 2;
	}
	else if (position.y > -720 && vert == 1)
	{
		position.y -= 2;
	}
}
void Background::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{255, 255, 255, 255});
}
Background::Background()
{
	TraceLog(LOG_INFO, "Loading Background...");
	GInsert(this);

	name = "bg";

	position = Vector2{0, -720};
	scale = Vector2{1, 1};
	rotation = 0;
	layer = -1; // Background Layer

	Image img = {
		.data = IMG_DATA,
		.width = IMG_WIDTH,
		.height = IMG_HEIGHT,
		.mipmaps = 1,
		.format = IMG_FORMAT};
	texture = LoadTextureFromImage(img);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Background Loaded.");
}
Background::~Background()
{
	TraceLog(LOG_INFO, "Unloading Background...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Background Unloaded.");
}
