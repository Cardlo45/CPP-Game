#include "globals.h"
#include "gameobject.h"

#ifndef OBJECT2_H
#define OBJECT2_H

class Object2 : GameObject
{
public:
	virtual void Update();
	virtual void Render();

	Object2(void);
	~Object2(void);
private:
	Texture texture;
};

#endif // !OBJECT!_H
