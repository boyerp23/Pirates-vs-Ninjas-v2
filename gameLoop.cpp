#include "gameLoop.h"
#include <iostream>

using namespace std;
void gameLoop()

{
	//This is the game 
	bool playAgain = false;
	//this is the start of the game loop 
	do
	{
		//Ask player if the wish to play again. 
		cout << "\n\nPlay Again? ";
		//store players answer to memory 
		string userPlayAgainChoice;
		//answer stored to memory to play again or not. 
		cin >> userPlayAgainChoice;
		//evaluate the answer (is the ==) 
		if (userPlayAgainChoice == "Y" or userPlayAgainChoice == "y" or userPlayAgainChoice == "yes")
		{
			//assignment single equal sign 
			playAgain = true;
		}
		else
		{
			playAgain = false;
		}
		//this is the end of the game loop. 
	} while (playAgain == true);
}
