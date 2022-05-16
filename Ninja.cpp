#include "Ninja.h"
#include <iostream>

Ninja::Ninja(std::string name) :character(name) {
	this->hp = 25;
}
std::string Ninja::getAttackType() {
	return this->at;
}
void Ninja::setAttackType(string in_at) {
	this->at = in_at;
}

void Ninja::throwStar()
{
	cout << "I am throwing stars!\n";
}
void Ninja:: Talk() 
{
	cout << "Ahh welcome, my name Snake an I am Ninja from an ancient culture known only to a few. \n";
	cout << "You have not yet proven yourself worthy therefore I cannot reveal myself, but if you need my assistance \n";
	cout << "consider my skills to be at your disposal.\n";
};