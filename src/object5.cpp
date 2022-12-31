#include "object5.h"

void Object5::Update()
{
	if (IsKeyDown(KEY_FIVE)) {
		position = GetMousePosition();
	}
}
void Object5::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{ 255,255,255,255 });
}

Object5::Object5()
{
	TraceLog(LOG_INFO, "Loading Object5...");
	gameObjects.push_back(this);

	position = Vector2{ 80.0f, 80.0f };
	scale = Vector2{ 1.0f, 1.0f };
	rotation = 0.0f;
	layer = 2;

	Image textureImg = LoadImage("./assets/obj5.png");
	texture = LoadTextureFromImage(textureImg);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object5 Loaded.");
}
Object5::~Object5()
{
	TraceLog(LOG_INFO, "Unloading Object5...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object5 Unloaded.");
}