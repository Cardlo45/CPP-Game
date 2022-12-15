#include "background.h"
#include "globals.h"

void Background::Update() { return; }
void Background::Render()
{
	DrawTexture(texture, 0, 0, Color{ 0,0,0,255 });
}

Background::Background()
{
	gameObjects.push_back(this);

	Image background = LoadImage("./assets/img.png");
	texture = LoadTextureFromImage(background);
	SetTextureFilter(texture, 0);
}
Background::~Background()
{
	UnloadTexture(texture);
}
