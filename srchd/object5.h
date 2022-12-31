#include "globals.h"
#include "gameobject.h"

#ifndef OBJECT5_H
#define OBJECT5_H

class Object5 : GameObject
{
public:
	virtual void Update();
	virtual void Render();

	Object5(void);
	~Object5(void);
private:
	Texture texture;
};

#endif // !OBJECT!_H
