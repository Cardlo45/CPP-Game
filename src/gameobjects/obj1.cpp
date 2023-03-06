#include "../inc/gameobjects/obj1.hpp"
#include "../assets/obj1.png.h"

void Object1::Update()
{
	if (IsKeyDown(key)) // Move Object to Cursor
	{
		position = GetMousePosition();
	}
}
void Object1::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{255, 255, 255, 255});
}
Object1::Object1()
{
	TraceLog(LOG_INFO, "Loading Object1...");
	GInsert(this);

	name = "obj1";

	position = Vector2{0, 0};
	scale = Vector2{1, 1};
	rotation = 0;
	layer = 0;

	key = KEY_ONE;
	Image img = {
		.data = OBJ1_DATA,
		.width = OBJ1_WIDTH,
		.height = OBJ1_HEIGHT,
		.mipmaps = 1,
		.format = OBJ1_FORMAT};
	texture = LoadTextureFromImage(img);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object1 Loaded.");
}
Object1::~Object1()
{
	TraceLog(LOG_INFO, "Unloading Object1...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object1 Unloaded.");
}
