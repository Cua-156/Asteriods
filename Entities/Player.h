#pragma once
#include "Entity.h"

class Player : public Entity {
public:
	Player(int xBorder = 1600, int yBorder = 800);
	~Player();
	void update() override;
	void render() override;
	bool getSpawnBullet() { return spawnBullet; }
	void setSpawnBullet(bool val) { spawnBullet = val; }
	int getX() { return x; }
	int getY() { return y; }

private:
	int health;
	int score;
	int x;
	int y;
	int speed;
	int xBorder;
	int yBorder;
	int rotation;
	bool spawnBullet = false;

};