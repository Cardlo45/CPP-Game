#include "background.h"
#include "globals.h"

void Background::Update()
{
	if (IsKeyDown(KEY_S))
	{
		up = true;
		down = false;
	}
	else if (IsKeyDown(KEY_W))
	{
		up = false;
		down = true;
	}
	else if (IsKeyDown(KEY_E))
	{
		up = false;
		down = false;
	}

	if (height < 0 && down)
	{
		height += 2;
	}
	else if (height > -720 && up)
	{
		height -= 2;
	}
}
void Background::Render()
{
	DrawTexture(texture, 0, height, Color{ 255,255,255,255 });
}

Background::Background()
{
	TraceLog(LOG_INFO, "Loading Background...");
	height = -720;
	gameObjects.push_back(this);

	Image background = LoadImage("./assets/img.png");
	texture = LoadTextureFromImage(background);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Background Loaded.");
}
Background::~Background()
{
	TraceLog(LOG_INFO, "Unloading Background...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Background Unloaded.");
}
