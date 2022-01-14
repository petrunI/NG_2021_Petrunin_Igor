#ifndef FLAGMAN_H
#define FLAGMAN_H

#include "cruiser.h"

class Flagman : public cruiser
{
public:
    Flagman();
    int checkAvaibleSeat();
    void addCruiser(cruiser newCruiser);
    int getFlMs(){return flMs;}
    void setFlMs(int newFlMs);
    int calculateFlMs();
    void showInfo();
private:
    int flMs = 0;
    cruiser fleetCruisers[];
};

#endif // FLAGMAN_H
