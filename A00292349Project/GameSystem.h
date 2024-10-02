#pragma once
#include "Player.h"
#include "maze.h"
#include <string>

class GameSystem {
public:
	GameSystem(std::string levelFileName);

	void playGame();
private:
	Maze _maze;
	Player _player;

};