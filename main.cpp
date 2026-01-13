#include "raylib.h"
#include <iostream>
#include <vector>;

#include "Entities/Player.h"
#include "Entities/Bullet.h"

using namespace std;

void drawBackground(Color color) {
	ClearBackground(color);
	DrawCircle(10, 10, 100, WHITE);
}

int main() {
	vector<Entity> entities;
	int width = 800;
	int height = 600;
	InitWindow(width, height, "Raylib Window Example");
	SetTargetFPS(60);

	Player Player(width, height);
	entities.push_back(Player);


	while (WindowShouldClose() == false) {
		BeginDrawing();
		drawBackground(BLACK);
		DrawText("This is text!", 350, 280, 20, DARKGRAY);
		for (Entity& entity : entities) {
			entity.update();
			entity.render();
		}

		if (Player.getSpawnBullet() == true) {
			cout << "Spawning bullet" << endl;
			Bullet bullet(width, height, Player.getX(), Player.getY());
			entities.push_back(bullet);
			Player.setSpawnBullet(false);
		}
		EndDrawing();
	}

	CloseWindow();


	return 0;
}