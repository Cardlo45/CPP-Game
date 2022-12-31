#include "background.h"

#pragma warning disable C4244

void Background::Update()
{
	if (IsKeyDown(KEY_S))
	{
		move = 2;
	}
	else if (IsKeyDown(KEY_W))
	{
		move = 1;
	}
	else if (IsKeyDown(KEY_E))
	{
		move = 0;
	}

	if (position.y < 0 && move == 2)
	{
		position.y += 2;
	}
	else if (position.y > -720 && move == 1)
	{
		position.y -= 2;
	}
}
void Background::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{255,255,255,255});
}

Background::Background()
{
	TraceLog(LOG_INFO, "Loading Background...");
	gameObjects.push_back(this);

	move = 0;

	position = Vector2{ 0.0f, -720.0f };
	scale = Vector2{ 1.0f, 1.0f };
	rotation = 0.0f;
	layer = -1;

	Image textureImg = LoadImage("./assets/img.png");
	texture = LoadTextureFromImage(textureImg);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Background Loaded.");
}
Background::~Background()
{
	TraceLog(LOG_INFO, "Unloading Background...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Background Unloaded.");
}
