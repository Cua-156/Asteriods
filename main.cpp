#include "raylib.h"
#include <iostream>

using namespace std;

void drawBackground(Color color) {
	ClearBackground(color);
	DrawCircle(10, 10, 100, WHITE);
}

int main() {
	InitWindow(800, 600, "Raylib Window Example");
	SetTargetFPS(60);

	while (WindowShouldClose() == false) {
		BeginDrawing();
		drawBackground(BLACK);
		DrawText("This is text!", 350, 280, 20, DARKGRAY);
		EndDrawing();
	}

	CloseWindow();


	return 0;
}