#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "../gameobject.hpp"
#include "../globals.hpp"

class Background : Gameobject
{
public:
	virtual void Update();
	virtual void Render();

	Background(void);
	~Background(void);

private:
	Texture texture;
	int vert; // should the background move up, down or halt
};

#endif // !BACKGROUND_H