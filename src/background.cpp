#include "background.h"
#include "globals.h"

void Background::Update() { return; }
void Background::Render()
{
	DrawTexture(texture, 0, 0, Color{ 255,255,255,255 });
}

Background::Background()
{
	gameObjects.push_back(this);

	Image background = LoadImage("./assets/img.png");
	texture = LoadTextureFromImage(background);
	SetTextureFilter(texture, TEXTURE_FILTER_POINT);
}
Background::~Background()
{
	UnloadTexture(texture);
}
