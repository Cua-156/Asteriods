#include "Bullet.h"
#include <iostream>
#include "raylib.h"

using namespace std;

Bullet::Bullet(int xBorder, int yBorder, int x, int y) {
	rotation = 0;
	speed = 5;
	alive = true;
	this->xBorder = xBorder;
	this->yBorder = yBorder;
	this->x = x;
	this->y = y;

	//cout << "Bullet created" << endl;
}

Bullet::~Bullet() {
	cout << "Bullet destroyed" << endl;
}

void Bullet::update() {
	if (alive) {
		y -= speed;
	}
	timer++;
	if (timer >= 10000) { alive = false; }

}

void Bullet::render() {
	//cout << "Player rendered" << endl;
	DrawRectangle(x - 5, y - 20, 10, 20, RED);
	
}