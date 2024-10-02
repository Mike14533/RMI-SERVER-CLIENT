
#pragma once
#include <iostream>
#include <vector>
#include <string>


// Class to represent a game player
class Maze {
private:
	std::vector <std::string> _mazeData;







public:
	Maze();
	void loadMaze(std::string fileName);
	void print();



};

