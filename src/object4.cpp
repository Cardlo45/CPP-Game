#include "object4.h"

void Object4::Update()
{
	if (IsKeyDown(KEY_FOUR)) {
		position = GetMousePosition();
	}
}
void Object4::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{ 255,255,255,255 });
}

Object4::Object4()
{
	TraceLog(LOG_INFO, "Loading Object4...");
	gameObjects.push_back(this);

	position = Vector2{ 60.0f, 60.0f };
	scale = Vector2{ 1.0f, 1.0f };
	rotation = 0.0f;
	layer = 0;

	Image textureImg = LoadImage("./assets/obj4.png");
	texture = LoadTextureFromImage(textureImg);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object4 Loaded.");
}
Object4::~Object4()
{
	TraceLog(LOG_INFO, "Unloading Object4...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object4 Unloaded.");
}