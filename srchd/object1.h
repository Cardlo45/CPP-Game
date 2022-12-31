#include "globals.h"
#include "gameobject.h"

#ifndef OBJECT1_H
#define OBJECT1_H

class Object1 : GameObject
{
public:
	virtual void Update();
	virtual void Render();

	Object1(void);
	~Object1(void);
private:
	Texture texture;
};

#endif // !OBJECT!_H
