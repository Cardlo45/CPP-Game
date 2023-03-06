#ifndef OBJ4_H
#define OBJ4_H

#include "../gameobject.hpp"
#include "../globals.hpp"

class Object4 : Gameobject {
public:
	virtual void Update();
	virtual void Render();

	Object4(void);
	~Object4(void);

private:
	Texture texture;
	int key;
};

#endif // !OBJ4_H