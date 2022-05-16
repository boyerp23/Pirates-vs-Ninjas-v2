#include "character.h"
#include <iostream>
#include <string>

using namespace std;

void character::showStats() {
	cout << "Standby a moment... ...\n";
	cout << "Current Character STATS:\n";
	cout << "Name " << this->name << std::endl;
	cout << "Current Health " << this->health << std::endl;
	cout << "AT " << this->at << std::endl;
	cout << "Weapon " << this->weapon << std::endl;
	cout << "STATS Compiled \n";
}

void character::Talk(std::string message) {
	cout << message << std::endl;
}

void character::loseHealth(int hit) {
	this->health -= hit;
}

int character::healthRegen() {
	return this->health;
}
/*character::character(std::string name) {
	this->name = name;
	this->health = 100;
	this->hp = 10;
}
void character::loseHealth(int hit) {
	this->health -= hit;
	if(this->health < 0)
	{
		this->health = 0;
	}
}

int character::attack() {
	return this->hp;
}*/