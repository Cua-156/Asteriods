#include "Entity.h"
#include <iostream>

using namespace std;

Entity::Entity() {
	cout << "Entity created" << endl;
}

Entity::~Entity() {
	cout << "Entity destroyed" << endl;
}