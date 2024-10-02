#include "maze.h"
#include <windows.h>
#include <iostream>
#include <string>
#include "utility.h"
#include <random>
#include <fstream>



Maze::Maze() {
	


}


void Maze::loadMaze(std::string fileName)
{
	std::ifstream file;
	file.open(fileName);
	if (file.fail()) {
		perror(fileName.c_str());
		system("PAUSE");
		exit(1);
	}

	std::string line;
	while (getline(file, line)) {
		_mazeData.push_back(line);
	}
	file.close();

}

void Maze::print() {
	for (int i = 0; i < _mazeData.size(); i++) {
		printf("%s", _mazeData[i].c_str());
	}
	printf("\n");

}
