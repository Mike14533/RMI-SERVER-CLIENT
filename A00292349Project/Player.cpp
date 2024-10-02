#include <windows.h>
#include <iostream>
#include <string>
#include "utility.h"
#include "player.h"

Player::Player(int playerMaxHP) {
	playerPositionX = 5;
	playerPositionY = 5;
	newPlayerPositionX = playerPositionX;
	newPlayerPositionY = playerPositionY;


	health = 0;
	playerRightString = "(>00)>";
	playerLeftString = "<(00<)";
	playerUpString = "^(00)^";
	playerDownString = "v(00)v";
	playerString = "";

}







void Player:: handleInput()
{
	newPlayerPositionX = playerPositionX;
	newPlayerPositionY = playerPositionY;

	if (GetKeyState(VK_UP) & 0x8000)
	{
		newPlayerPositionY = playerPositionY - 1;
		playerString = playerUpString;
	}

	if (GetKeyState(VK_DOWN) & 0x8000)
	{
		newPlayerPositionY = playerPositionY + 1;
		playerString = playerDownString;
	}

	if (GetKeyState(VK_RIGHT) & 0x8000)
	{
		newPlayerPositionX = playerPositionX + 1;
		playerString = playerRightString;
	}

	if (GetKeyState(VK_LEFT) & 0x8000)
	{
		newPlayerPositionX = playerPositionX - 1;
		playerString = playerLeftString;
	}
}



void Player::renderPlayer()
{
    // Draw new player position
	utility::gotoScreenPosition(playerPositionX, playerPositionY);
	std::cout << "      ";

	// Draw new player position
	utility::gotoScreenPosition(newPlayerPositionX, newPlayerPositionY);
	std::cout << playerString;

	playerPositionX = newPlayerPositionX;
	playerPositionY = newPlayerPositionY;

	Sleep(120);
}



