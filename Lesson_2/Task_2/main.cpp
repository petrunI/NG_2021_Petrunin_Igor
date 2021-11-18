#include <iostream>

using namespace std;

int main()
{
    int input, prev = 0, hesh = 0;
    cout << "Enter your number: ";
    cin >> input;
    int numFir = input % 10;
    for (int i = input; i > 0; i /= 10){
        if(i % 10 == prev || numFir == i) hesh += i % 10;
        prev = i % 10;
    }
    cout << "Hashcode: " << hesh;
    return 0;
}
