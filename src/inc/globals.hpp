#ifndef GLOBALS_H
#define GLOBALS_H

#include <list>
#include "gameobject.hpp"

extern std::list<Gameobject *> gameobjects; // List of all Gameobject
extern int score;

void GInsert(Gameobject* go); // Insert Gameobjects into the List

#endif // !GLOBALS_H