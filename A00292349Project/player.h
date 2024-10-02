#pragma once

#pragma once
#include <iostream>

// Class to represent a game player
class Player {
private:
	std::string playerRightString;
	std::string playerLeftString;
	std::string playerUpString;
	std::string playerDownString;
	std::string playerString;

	unsigned int playerPositionX;
	unsigned int playerPositionY;
	unsigned int newPlayerPositionX;
	unsigned int newPlayerPositionY;


	unsigned int health = 0;




public:
	Player();

	void handleInput();

	void renderPlayer();

};

