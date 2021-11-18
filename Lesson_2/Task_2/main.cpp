#include <iostream>

using namespace std;

int main()
{
    int input, hesh = 0;
    cout << "Enter your number: ";
    cin >> input;
    for (int i = input; i > 0; i /= 10){
        if(i % 10 == i/ 10 % 10 || input % 10 == i) hesh += i % 10;
    }
    cout << "Hashcode: " << hesh;
    return 0;
}
