#ifndef CRUISER_H
#define CRUISER_H

#include "fighter.h"

class cruiser : public fighter
{
public:
    cruiser();
    int getArmor(){return armor;};
    void setArmor(int newArmor);
    int getSeatsAmount(){return seatsAmount;}
    void setSeatsAmount(int newSeatsAmount);
    int checkAvaibleSeat();
    void addFighter(fighter newFighter);
    int getDmg();
    int getFsMs();
    void showInfo();
private:
    int armor = 0;
    int seatsAmount = 0;
    fighter seats[64];
};

#endif // CRUISER_H
