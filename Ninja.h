#pragma once
#include "character.h"
#include <string>


class Ninja :
    public character
{
public:
    Ninja(std::string name)
    {
        this->name = name;
        this->weapon = "throwing star";
    }
    std::string getAttackType();
    void setAttackType(string in_at);
    void throwStar();
    void Talk();
};

