#include "GameSystem.h"

GameSystem::GameSystem(std::string levelFileName) {
	_maze.loadMaze(levelFileName);
	_maze.print();
	system("PAUSE");
}

void GameSystem::playGame() {

}