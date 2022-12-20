#include "raylib.h"

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
protected:
	Vector2 position;
	Vector2 scale;
	float rotation;
public:
	virtual void Update() = 0;
	virtual void Render() = 0;

	GameObject() = default;
	~GameObject() = default;
};

#endif // !GAMEOBJECT_H
