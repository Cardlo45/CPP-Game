#include "inc/globals.hpp"

#include <string>
#include <iostream>
#include <fstream>

std::list<Gameobject *> gameobjects = {};
int score = 0;

void GInsert(Gameobject *go)
{
	// ToDo: Insert into List at correct possition for Ordering
	gameobjects.push_back(go);
	gameobjects.sort([](Gameobject* a, Gameobject* b) {
		return a->layer < b->layer; // Sort List by Layer
	});
}