#pragma once
#include <string>
#include "gameStructure.h"

using namespace std;

class character :
    public gameStructure
{
public:
    std::string name = "";
    int at = 10;
    std::string weapon = "";
    void showStats();
    virtual std:: string getAttackType() = 0;
    //virtual void setAttackType() = 0;
    void loseHealth(int hit);
    int healthRegen();
    int attack();
    void Talk(string stuffToSay);
    void Talk(string name, string stuffToSay);

private:
    
    int health = 100;

protected:
   // std::string at;
    int hp;
};

