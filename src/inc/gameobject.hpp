#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <raylib-cpp.hpp>

class Gameobject // mostly the same for child object
{
public:
	std::string name; // name of the Gameobject, can be used for logic
	Vector2 position; // position on screen, top-left corner of texture (with normal render)
	Vector2 scale; // not-implemented
	float rotation; // not-implemented
	int layer; // layer (z-position), higher number means higher render priority

	virtual void Update() = 0; // logic
	virtual void Render() = 0; // graphic

	Gameobject() = default;
	~Gameobject() = default;
};

#endif // !GAMEOBJECT_H