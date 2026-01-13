#include "Player.h"
#include <iostream>
#include "raylib.h"
#include "Bullet.h"

using namespace std;

Player::Player(int xBorder, int yBorder) {
	health = 100;
	score = 0;
	x = xBorder / 2;
	y = yBorder / 2;
	rotation = 0;
	speed = 5;
	this->xBorder = xBorder;
	this->yBorder = yBorder;

	cout << "Player created" << endl;
}

Player::~Player() {
	cout << "Player destroyed" << endl;
}

void Player::update() {
	cout << "Player updated" << endl;
	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) {
		x += speed;
	}
	if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) {
		x -= speed;
	}
	if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) {
		y -= speed;
	}
	if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) {
		y += speed;
	}
	if (IsKeyDown(KEY_SPACE)) {
		setSpawnBullet(true);
		cout << "Shoot!" << endl;
		
	}
}

void Player::render() {
	//cout << "Player rendered" << endl;
	DrawTriangle(
		{ (float)x, (float)(y - 20) },
		{ (float)(x - 15), (float)(y + 10) },
		{ (float)(x + 15), (float)(y + 10) },
		BLUE
	);
}