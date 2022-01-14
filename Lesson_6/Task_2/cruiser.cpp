#include <iostream>
#include "cruiser.h"

cruiser::cruiser()
{

}

void cruiser::setArmor(int newArmor)
{
    armor = newArmor;
}

void cruiser::setSeatsAmount(int newSeatsAmount)
{
    seatsAmount = newSeatsAmount;
}

int cruiser::checkAvaibleSeat()
{
    for(int i = 0; i < seatsAmount; i++){
        if(seats[i].getHp() == 0 & seats[i].getHp() == 0 & seats[i].getHp() == 0) return i;
    }
    return -1;
}

void cruiser::addFighter(fighter newFighter)
{
    int avaibleSeat = checkAvaibleSeat();
    if(avaibleSeat == -1)
        std::cout << "ERROR: NO AVAIBLE SEAT" << std::endl;
    else{
        seats[avaibleSeat] = newFighter;
    }

}

int cruiser::getDmg()
{
    int fsDmg = 0;
    for(int i = 0; i < seatsAmount; i++){
        fsDmg += seats[i].getDmg();
    }
    return fsDmg;
}

int cruiser::getFsMs()
{
    int fsMs = this->getMs();
    for(int i = 0; i < checkAvaibleSeat(); i++){
        if(fsMs > seats[i].getMs())
            fsMs = seats[i].getMs();
    }
    return fsMs;
}

void cruiser::showInfo()
{
    std::cout << "cruiser dmg: " << getDmg() << std::endl
              << "cruiser armor: " << getArmor() << std::endl
              << "cruiser hp: " << getHp() << std::endl
              << "cruiser ms: " << getMs() << std::endl
              << "cruiser seats: " << getSeatsAmount() << std::endl
              << "min fighter speed: " << getFsMs() << std::endl;
}
