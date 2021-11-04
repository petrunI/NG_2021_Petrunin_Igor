#include <iostream>

using namespace std;

int main()
{
    int input, next = 0, prev = 0, hesh = 0;
    cout << "Enter your number: ";
    cin >> input;
    int numFir = input % 10;
    for (int i = input; i > 0; i /= 10){
        next = i % 10;
        if(next == prev) hesh += prev;
        prev = next;
    }
    if(numFir == prev) hesh += prev;
    cout << "Hashcode: " << hesh;
    return 0;
}
