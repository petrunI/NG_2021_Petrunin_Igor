#include <iostream>
#include "flagman.h"

using namespace std;

int main()
{
    //cruiser 1
    cout << "=============fighter1============" << endl;
    fighter T65B;
    T65B.setDmg(33);
    T65B.setHp(11);
    T65B.setMs(13);
    T65B.showInfo();

    cout << "=============fighter2============" << endl;
    fighter S_12;
    S_12.setDmg(66);
    S_12.setHp(22);
    S_12.setMs(9);
    S_12.showInfo();

    cout << "=============cruiser1============" << endl;
    cruiser testCruiser1;
    testCruiser1.setHp(100);
    testCruiser1.setMs(21);
    testCruiser1.setArmor(30);
    testCruiser1.setSeatsAmount(4);
    testCruiser1.addFighter(T65B);
    testCruiser1.addFighter(S_12);
    testCruiser1.showInfo();

    //cruiser 2
    cout << "=============fighter3============" << endl;
    fighter testFighter1;
    testFighter1.setDmg(44);
    testFighter1.setHp(5);
    testFighter1.setMs(20);
    testFighter1.showInfo();

    cout << "=============fighter4============" << endl;
    fighter testFighter2;
    testFighter2.setDmg(11);
    testFighter2.setHp(9);
    testFighter2.setMs(33);
    testFighter2.showInfo();

    cout << "=============cruiser2============" << endl;
    cruiser testCruiser2;
    testCruiser2.setHp(200);
    testCruiser2.setMs(44);
    testCruiser2.setArmor(55);
    testCruiser2.setSeatsAmount(3);
    testCruiser2.addFighter(testFighter1);
    testCruiser2.addFighter(testFighter2);
    testCruiser2.showInfo();

    //flagman
    cout << "=============flagman============" << endl;
    Flagman testFlagman;
    testFlagman.setHp(1000);
    testFlagman.setArmor(100);
    testFlagman.setMs(99);
    testFlagman.addCruiser(testCruiser1);
    testFlagman.showInfo();
    cout << "================================" << endl;
}
