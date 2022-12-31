#include "object1.h"

void Object1::Update()
{
	if (IsKeyDown(KEY_ONE)) {
		position = GetMousePosition();
	}
}
void Object1::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{ 255,255,255,255 });
}

Object1::Object1()
{
	TraceLog(LOG_INFO, "Loading Object1...");
	gameObjects.push_back(this);

	position = Vector2{ 0.0f, 0.0f };
	scale = Vector2{ 1.0f, 1.0f };
	rotation = 0.0f;
	layer = 0;

	Image textureImg = LoadImage("./assets/obj1.png");
	texture = LoadTextureFromImage(textureImg);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object1 Loaded.");
}
Object1::~Object1()
{
	TraceLog(LOG_INFO, "Unloading Object1...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object1 Unloaded.");
}
