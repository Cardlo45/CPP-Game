#include "../inc/gameobjects/obj3.hpp"
#include "../assets/obj3.png.h"

void Object3::Update()
{
	if (IsKeyDown(key))
	{
		position = GetMousePosition();
	}
}
void Object3::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{255, 255, 255, 255});
}
Object3::Object3()
{
	TraceLog(LOG_INFO, "Loading Object3...");
	GInsert(this);

	name = "obj3";

	position = Vector2{0, 0};
	scale = Vector2{1, 1};
	rotation = 0;
	layer = 1;

	key = KEY_THREE;

	Image img = {
		.data = OBJ3_DATA,
		.width = OBJ3_WIDTH,
		.height = OBJ3_HEIGHT,
		.mipmaps = 1,
		.format = OBJ3_FORMAT};
	texture = LoadTextureFromImage(img);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object3 Loaded.");
}
Object3::~Object3()
{
	TraceLog(LOG_INFO, "Unloading Object3...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object1 Unloaded.");
}
