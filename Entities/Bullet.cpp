#include "Bullet.h"
#include <iostream>
#include "raylib.h"

using namespace std;

Bullet::Bullet(int xBorder, int yBorader, int x, int y) {
	rotation = 0;
	speed = 5;
	this->xBorder = xBorder;
	this->yBorder = yBorder;
	this->x = x;
	this->y = y;

	cout << "Bullet created" << endl;
}

Bullet::~Bullet() {
	cout << "Bullet destroyed" << endl;
}

void Bullet::update() {
	alive = (timer == 10000)
	if (alive) {
		x += speed;
	}
	timer++;

}

void Bullet::render() {
	//cout << "Player rendered" << endl;
	DrawRectangle(x - 5, y - 20, 10, 20, RED);
	
}