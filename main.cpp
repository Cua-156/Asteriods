#include "raylib.h"
#include <iostream>

using namespace std;

int main() {

	InitWindow(800, 600, "Raylib Window Example");
	SetTargetFPS(60);

	while (WindowShouldClose() == false) {
		BeginDrawing();
		//ClearBackground(RAYWHITE);
		DrawText("This is text!", 350, 280, 20, DARKGRAY);
		EndDrawing();
	}

	CloseWindow();


	return 0;
}