#include <iostream>
#include "fighter.h"

fighter::fighter()
{

}

void fighter::setDmg(int newDmg)
{
    if(newDmg > 0)
        dmg = newDmg;
    else
        std::cout << "ERROR: PARAMETER CANT BE LESS OR EQUAL TO 0" << std::endl;
}

void fighter::setHp(int newHp)
{
    if(newHp > 0)
        hp = newHp;
    else
        std::cout << "ERROR: PARAMETER CANT BE LESS OR EQUAL TO 0" << std::endl;
}

void fighter::setMs(int newMs)
{
    if(newMs > 0)
       ms = newMs;
    else
        std::cout << "ERROR: PARAMETER CANT BE LESS OR EQUAL TO 0" << std::endl;
}

void fighter::showInfo()
{
    std::cout << "fighter dmg: " << getDmg() << std::endl
              << "fighter hp: " << getHp() << std::endl
              << "fighter ms: " << getMs() << std::endl;
}
