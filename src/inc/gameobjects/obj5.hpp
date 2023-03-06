#ifndef OBJ5_H
#define OBJ5_H

#include "../gameobject.hpp"
#include "../globals.hpp"

class Object5 : Gameobject {
public:
	virtual void Update();
	virtual void Render();

	Object5(void);
	~Object5(void);

private:
	Texture texture;
	int key;
};

#endif // !OBJ5_H