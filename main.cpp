#include "raylib.h"
#include <iostream>
#include <vector>
#include <memory>

#include "Entities/Player.h"
#include "Entities/Bullet.h"

using namespace std;

void drawBackground(Color color) {
	ClearBackground(color);
	DrawCircle(10, 10, 100, WHITE);
}

int main() {
	vector<unique_ptr<Entity>> entities;
	int width = 800;
	int height = 600;
	InitWindow(width, height, "Raylib Window Example");
	SetTargetFPS(60);

	auto player = make_unique<Player>(width, height);
	Player& playerRef = *player; // Keep a reference to the player
	entities.push_back(std::move(player));


	while (WindowShouldClose() == false) {
		BeginDrawing();
		drawBackground(BLACK);
		DrawText("This is text!", 350, 280, 20, DARKGRAY);
		for (auto& entity : entities) {
			cout << "Entity updated and rendered1" << endl;
			entity->update();
			entity->render();
			cout << "Entity updated and rendered2" << endl;
		}

		cout << "bullet Check: " << (playerRef.getSpawnBullet() == true) << endl;
		if (playerRef.getSpawnBullet() == true) {
			cout << "Spawning bullet" << endl;
			entities.push_back(make_unique<Bullet>(width, height, playerRef.getX(), playerRef.getY()));
			playerRef.setSpawnBullet(false);
		}
		EndDrawing();
	}

	CloseWindow();


	return 0;
}