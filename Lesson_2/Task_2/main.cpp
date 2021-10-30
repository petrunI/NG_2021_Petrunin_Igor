#include <iostream>

using namespace std;

int main()
{
    int num, input, next = 0, prev = 0, hesh = 0;
    cout << "Enter your number: ";
    cin >> input;
    num = input;
    int numFir = num % 10;
    while(num >= 1){
        next = num % 10;
        num /= 10;
        if(next == prev) hesh += prev;
        prev = next;
    }
    if(numFir == prev) hesh += prev;
    cout << "Hashcode: " << hesh;
    return 0;
}
