#ifndef OBJ2_H
#define OBJ2_H

#include "../gameobject.hpp"
#include "../globals.hpp"

class Object2 : Gameobject {
public:
	virtual void Update();
	virtual void Render();

	Object2(void);
	~Object2(void);

private:
	Texture texture;
	int key;
};

#endif // !OBJ2_H