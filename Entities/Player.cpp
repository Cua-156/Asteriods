#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
	cout << "Player created" << endl;
}

Player::~Player() {
	cout << "Player destroyed" << endl;
}

void Player::update() {
	cout << "Player updated" << endl;
}

void Player::render() {
	cout << "Player rendered" << endl;
}