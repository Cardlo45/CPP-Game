#include "../inc/gameobjects/obj2.hpp"
#include "../assets/obj2.png.h"

void Object2::Update()
{
	if (IsKeyDown(key))
	{
		position = GetMousePosition();
	}
}
void Object2::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{255, 255, 255, 255});
}
Object2::Object2()
{
	TraceLog(LOG_INFO, "Loading Object2...");
	GInsert(this);

	name = "obj2";

	position = Vector2{0, 0};
	scale = Vector2{1, 1};
	rotation = 0;
	layer = 0;

	key = KEY_TWO;

	Image img = {
		.data = OBJ2_DATA,
		.width = OBJ2_WIDTH,
		.height = OBJ2_HEIGHT,
		.mipmaps = 1,
		.format = OBJ2_FORMAT};
	texture = LoadTextureFromImage(img);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object2 Loaded.");
}
Object2::~Object2()
{
	TraceLog(LOG_INFO, "Unloading Object2...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object1 Unloaded.");
}
