#ifndef OBJ3_H
#define OBJ3_H

#include "../gameobject.hpp"
#include "../globals.hpp"

class Object3 : Gameobject {
public:
	virtual void Update();
	virtual void Render();

	Object3(void);
	~Object3(void);

private:
	Texture texture;
	int key;
};

#endif // !OBJ3_H