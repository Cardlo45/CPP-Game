#include "raylib.h"

#include "gameobject.h"

#ifndef BACKGROUND_H
#define BACKGROUND_H

class Background : GameObject
{
public:
	virtual void Update();
	virtual void Render();

	Background(void);
	~Background(void);
private:
	Texture texture;
	Rectangle source;
	Rectangle destination;
};

#endif // !BACKGROUND_H
