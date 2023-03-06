#include "../inc/gameobjects/obj5.hpp"
#include "../assets/obj5.png.h"

void Object5::Update()
{
	if (IsKeyDown(key))
	{
		position = GetMousePosition();
	}
}
void Object5::Render()
{
	DrawTexture(texture, (int)position.x, (int)position.y, Color{255, 255, 255, 255});
}
Object5::Object5()
{
	TraceLog(LOG_INFO, "Loading Object5...");
	GInsert(this);

	name = "obj5";

	position = Vector2{0, 0};
	scale = Vector2{1, 1};
	rotation = 0;
	layer = 2;

	key = KEY_FIVE;

	Image img = {
		.data = OBJ5_DATA,
		.width = OBJ5_WIDTH,
		.height = OBJ5_HEIGHT,
		.mipmaps = 1,
		.format = OBJ5_FORMAT};
	texture = LoadTextureFromImage(img);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
	TraceLog(LOG_INFO, "Object5 Loaded.");
}
Object5::~Object5()
{
	TraceLog(LOG_INFO, "Unloading Object5...");
	UnloadTexture(texture);
	TraceLog(LOG_INFO, "Object1 Unloaded.");
}
