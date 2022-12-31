#include "object2.h"

void Object2::Update()
{
	if (IsKeyDown(KEY_TWO)) {
		position = GetMousePosition();
	}
}
void Object2::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{ 255,255,255,255 });
}

Object2::Object2()
{
	TraceLog(LOG_INFO, "Loading Object2...");
	gameObjects.push_back(this);

	position = Vector2{ 20.0f, 20.0f };
	scale = Vector2{ 1.0f, 1.0f };
	rotation = 0.0f;
	layer = 0;

	Image textureImg = LoadImage("./assets/obj2.png");
	texture = LoadTextureFromImage(textureImg);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object2 Loaded.");
}
Object2::~Object2()
{
	TraceLog(LOG_INFO, "Unloading Object2...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object2 Unloaded.");
}