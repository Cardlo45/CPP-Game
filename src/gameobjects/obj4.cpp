#include "../inc/gameobjects/obj4.hpp"
#include "../assets/obj4.png.h"

void Object4::Update()
{
	if (IsKeyDown(key))
	{
		position = GetMousePosition();
	}
}
void Object4::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{255, 255, 255, 255});
}
Object4::Object4()
{
	TraceLog(LOG_INFO, "Loading Object4...");
	GInsert(this);

	name = "obj4";

	position = Vector2{0, 0};
	scale = Vector2{1, 1};
	rotation = 0;
	layer = 0;

	key = KEY_FOUR;

	Image img = {
		.data = OBJ4_DATA,
		.width = OBJ4_WIDTH,
		.height = OBJ4_HEIGHT,
		.mipmaps = 1,
		.format = OBJ4_FORMAT};
	texture = LoadTextureFromImage(img);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object4 Loaded.");
}
Object4::~Object4()
{
	TraceLog(LOG_INFO, "Unloading Object4...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object1 Unloaded.");
}
