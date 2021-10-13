#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double mass;
    cout << "Enter mass of the ship: ";
    cin >> mass;
    double fuel = round(mass / 3) - 2;
    cout << fuel;
    return 0;
}
