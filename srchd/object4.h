#include "globals.h"
#include "gameobject.h"

#ifndef OBJECT4_H
#define OBJECT4_H

class Object4 : GameObject
{
public:
	virtual void Update();
	virtual void Render();

	Object4(void);
	~Object4(void);
private:
	Texture texture;
};

#endif // !OBJECT!_H
