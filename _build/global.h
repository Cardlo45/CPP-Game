#ifndef GLOBAL_H
#define GLOBAL_H

#include <list>
#include "raylib.h"
#include "gameobject.h"

#include "player.h"

extern std::list<GameObject*> gameObjects;
extern int score;

#endif // !GLOBAL_H
