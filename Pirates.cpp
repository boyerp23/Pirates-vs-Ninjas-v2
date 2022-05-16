#include "Pirates.h"
#include <iostream>

using namespace std;


Pirates::Pirates(string name) :character(name) {
	this->hp = 25;
};

std::string Pirates::getAttackType() {
	return this->at;
}
void Pirates::setAttackType(string in_at) {
	this->at = in_at;
}


void Pirates::useSword() {
	std:: cout << "I am swooshing my sword!\n";
}
void Pirates::Talk()
{
	std:: cout << "Ahoy matey, me name be Cap'n Jack an I be the Cap'n of the toughest fastest ship to er sail \n"
		"the seas. Ye be a fool to not have me as yer ally \n";
};
