#include "object3.h"

void Object3::Update()
{
	if (IsKeyDown(KEY_THREE)) {
		position = GetMousePosition();
	}
}
void Object3::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{ 255,255,255,255 });
}

Object3::Object3()
{
	TraceLog(LOG_INFO, "Loading Object3...");
	gameObjects.push_back(this);

	position = Vector2{ 40.0f, 40.0f };
	scale = Vector2{ 1.0f, 1.0f };
	rotation = 0.0f;
	layer = 1;

	Image textureImg = LoadImage("./assets/obj3.png");
	texture = LoadTextureFromImage(textureImg);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object3 Loaded.");
}
Object3::~Object3()
{
	TraceLog(LOG_INFO, "Unloading Object3...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object3 Unloaded.");
}