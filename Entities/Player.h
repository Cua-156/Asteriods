#pragma once
#include "Entity.h"

class Player : public Entity {
public:
	Player();
	~Player();
	void update() override;
	void render() override;

private:
	int health;
	int score;
	int x;
	int y;
	int speed;

};