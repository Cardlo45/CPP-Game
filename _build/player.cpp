#include "player.h"

Player::Player()
{
	gameObjects.push_back(this);

	Image playerImage = LoadImage("./texture/player.png");
	Image playerHitbox = LoadImage("./texture/plr_hitbox.png");
	plrTexture = LoadTextureFromImage(playerImage);
	hitTexture = LoadTextureFromImage(playerHitbox);

	plrTexture.height *= 10;
	plrTexture.width *= 10;
	hitTexture.height *= 10;
	hitTexture.width *= 10;

	position = {
		(float)GetScreenWidth() / 2,
		(float)GetScreenHeight() / 5
	};
	speed = 100;

	timeBetweenShots = 0.25f;
	lastShotTime = (float)GetTime() - timeBetweenShots;

	score = 0;

	shotSound = LoadSound("");
}
