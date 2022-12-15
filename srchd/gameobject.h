#include "raylib.h"

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
public:
	Vector2 position;
	Vector2 scale;
	float rotation;

	virtual void Update() = 0;
	virtual void Render() = 0;

	GameObject() = default;
	~GameObject() = default;
};

#endif // !GAMEOBJECT_H
