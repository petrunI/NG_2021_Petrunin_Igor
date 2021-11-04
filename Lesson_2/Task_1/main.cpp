#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int input, sum = 0;
    cout << "Enter your number: ";
    cin >> input;
    for (int i = input; i > 0; i /= 10){
        sum += i % 10;
    }
    cout << "Sum of digits in a number: " << sum;
    return 0;
}
