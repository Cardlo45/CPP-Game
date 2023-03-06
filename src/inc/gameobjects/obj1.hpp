#ifndef OBJ1_H
#define OBJ1_H

#include "../gameobject.hpp"
#include "../globals.hpp"

class Object1 : Gameobject
{
public:
	virtual void Update();
	virtual void Render();

	Object1(void);
	~Object1(void);

private:
	Texture texture;
	int key; // what key should be held to move the Object
};

#endif // !OBJ1_H