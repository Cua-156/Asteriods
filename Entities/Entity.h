#pragma once

class Entity {
public:
	Entity();
	~Entity();

	virtual void update() = 0;
	virtual void render() = 0;
};