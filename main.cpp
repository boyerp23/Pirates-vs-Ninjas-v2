// Pirates vs. Ninjas v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*File Creator: Paul Boyer
contact: pauboyer@uat.edu
CSC275 wk 1*/

#include <iostream>
#include <string>
#include <ctime>
#include <map>
#include "gameLoop.h"
#include "Ninja.h"
#include "Pirates.h"
#include "gameStructure.h"

using namespace std;
void introduction();
void pause();
int randomRoll(int min, int max);
int characterSelect();

int main()
{	
	// cannot get die roll game to function properly from gameStructure..
	gameStructure();
	//gameLoop();
	system("pause");

	character c ("Ted");
	Pirates pc ("Jack");
	Ninja nc ("Snake");
	bool gameRunning = true;

	//int waitTime = 1500;

	int attackRoll;

	int damage;

	std::string name;

	std::map<std::string, character*>characters;

	srand(time(0));
	introduction();
	int choice = characterSelect();
	cout << "Enter player name: ";
	cin >> name;
	if (choice == 1) {
		characters["player"] = new Pirates(name);
		characters["enemy"] = new Ninja("enemy");
	}
	else {
		characters["player"] = new Ninja(name);
		characters["enemy"] = new Pirates("enemy");
	}
	while (gameRunning)
	{
		cout << "\n\n\n\t Round Begin!\n\n\n\t";
		cout << "Player health: " << characters["player"]->healthRegen() << " Enemy health: " << characters["enemy"]->healthRegen() << std::endl;
		cout << "Player it's your move.\n\n";
		pause();

		std::cout << "\nRolling die to attack\n";
		attackRoll = randomRoll(1, 15);
		std::cout << "\n You rolled: " << attackRoll << "\n";
		if (attackRoll > characters["enemy"]->at)
		{
			std::cout << "Hit!\n";
			damage = randomRoll(1, 6);
			characters["enemy"]->loseHealth(damage);
			std::cout << "You did " << damage << " points of damage!\n";
			if (characters["enemy"]->healthRegen() <= 0) 
			{
				std::cout << "Enemy has been defeated!";
				break;
			}
			else 
			{
				std::cout << "Enemy has " << characters["enemy"]->healthRegen() << " left!\n";
			}
		}
		else
		{
			std::cout << "Oh no! Your attack missed!\n";
		}
		std:: cout << "\t\t\t Enemy turn!\n";
		attackRoll = randomRoll(1, 15);
		std::cout << "Enemy rolled: " << attackRoll << "\n";
		if (attackRoll > characters["player"]->at) 
		{
			std::cout << "Hit!\n";
			damage = randomRoll(1, 6);
			characters["player"]->loseHealth(damage);
			std::cout << "The enemy did " << damage << " points of damage!\n";
			if (characters["player"]->healthRegen() <= 0) 
			{
				std::cout << "You have been defeated!\n";
				break;
			}
			else
			{
				std::cout << "You have " << characters["player"]->healthRegen() << " health left!\n";
			}
		}
		else
		{
			std::cout << "The enemies attack missed!\n";
		}
		gameLoop();
	}
	return 0;

	



	return 0;
 
}

void pause(std::map<std::string, character*>& character, std::string name)
{
	std::string cmd;
	while (1)
	{
		std::cout << "\nType '/stats' to see player stats or press 'enter' to continue..\n";
		std::getline(std::cin, cmd);
		if (cmd == "/stats")
		{
			character[name]->showStats();
		}
		else
		{
			break;
		}
	}
}

void introduction()
{
	cout << "\t\t\t Welcome to Pirates VS. Ninjas \n\n";
	cout << "In this epic battle will stealth or brute force win? Which side will you choose the pirates or the ninjas?\n";
	cout << "Only one side can be victorious and you must choose.\n\n";
	cout << "But first, lets play a game of chance.. \n";
	cout << "The object is to roll the die until you win. I will not tell you what is winning, but you can exit at any time.\n";
}

int characterSelect()
{
	int option = 0;
	std::cout << "Select your character : \n 1. Pirate \n 2. Ninja ";
	while (option != 1 && option != 2)
	{
		std::cout << "Enter 1 for Pirate or 2 for Ninja:\n";
		std::cin >> option;
	}
	return option;
}

int randomRoll(int min, int max)
{
	int random = (std::rand() % (max - min)) + min;
	return random;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
