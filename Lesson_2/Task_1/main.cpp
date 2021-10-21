#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter your number: ";
    cin >> num;
    while (num >= 1){ //Could be 0 instead of 1 because of int
        sum = num % 10 + sum;
        num /= 10;
    }
    cout << "Sum of digits in a number: " << sum;
    return 0;
}
