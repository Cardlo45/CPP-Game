#ifndef PLAYER_H
#define PLAYER_H

#include "global.h"

class Player : public GameObject
{
public:
	Player();
	virtual void Update();
	virtual void Render();
	~Player();
private:
	Vector2 position;
	float speed;
	Texture plrTexture;
	Texture hitTexture;

	float lastShotTime;
	float timeBetweenShots;

	Sound shotSound;
};

#endif // !PLAYER_H
