#include <iostream>
#include "flagman.h"

Flagman::Flagman()
{

}

int Flagman::checkAvaibleSeat()
{
    int i = 0;
    while(fleetCruisers[i].getHp() > 0)
        i++;
    return i;
}
void Flagman::addCruiser(cruiser newCruiser)
{
    fleetCruisers[checkAvaibleSeat()] = newCruiser;
}


void Flagman::setFlMs(int newFlMs)
{
    if(newFlMs > 0)
       flMs = newFlMs;
    else
        std::cout << "ERROR: PARAMETER CANT BE LESS OR EQUAL TO 0" << std::endl;
}

int Flagman::calculateFlMs()
{
    int flMs = this->getMs();
    for(int i = 0; i < checkAvaibleSeat(); i++){
        if(flMs > fleetCruisers[i].getFsMs())
            flMs = fleetCruisers[i].getFsMs();
    }
    return flMs;
}

void Flagman::showInfo()
{
    std::cout << "Flagman armor: " << getArmor() << std::endl
              << "Flagman hp: " << getHp() << std::endl
              << "Flagman ms: " << getMs() << std::endl
              << "Flagman`s cruisers: " << checkAvaibleSeat() << std::endl
              << "Fleet speed: " << calculateFlMs() << std::endl;
}

