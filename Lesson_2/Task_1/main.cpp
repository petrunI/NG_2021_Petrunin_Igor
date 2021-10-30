#include <iostream>

using namespace std;

int main()
{
    int num, input, sum = 0;
    cout << "Enter your number: ";
    cin >> input;
    num = input;
    while (num >= 1){
        sum = num % 10 + sum;
        num /= 10;
    }
    cout << "Sum of digits in a number: " << sum;
    return 0;
}
