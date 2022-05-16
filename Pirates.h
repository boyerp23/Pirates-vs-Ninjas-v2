#pragma once
#include "character.h"
#include <string>

using namespace std;

class Pirates :
    public character
{
public:
   Pirates(string name) {
        this->name = name;
        this->weapon = "sword";
    }

    void useSword();
    void Talk();

    string getAttackType();
    void setAttackType(string in_at);
};