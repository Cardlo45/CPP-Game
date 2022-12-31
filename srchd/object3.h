#include "globals.h"
#include "gameobject.h"

#ifndef OBJECT3_H
#define OBJECT3_H

class Object3 : GameObject
{
public:
	virtual void Update();
	virtual void Render();

	Object3(void);
	~Object3(void);
private:
	Texture texture;
};

#endif // !OBJECT!_H
