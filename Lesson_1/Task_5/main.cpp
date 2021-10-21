#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double mass, dist = 300;
    cout << "Enter mass of the ship: ";
    cin >> mass;
    double fuel = (round(mass / 3) - 2) * dist;
    if(fuel < 0){
        cout << "Error: invalid input";
    }else cout << "Required fuel: " << fuel;
    return 0;
}
