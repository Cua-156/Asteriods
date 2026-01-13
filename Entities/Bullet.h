#pragma once
#include "Entity.h"

class Bullet : public Entity {
public:
	Bullet(int xBorder = 1600, int yBorder = 800, int x = 0, int y = 0, int type = 0);
	~Bullet();
	void update() override;
	void render() override;

private:
	int x;
	int y;
	int speed;
	int xBorder;
	int yBorder;
	int rotation;
	int timer = 0;
	bool alive;
	int type;

};