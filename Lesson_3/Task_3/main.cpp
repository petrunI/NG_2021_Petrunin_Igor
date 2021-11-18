#include <iostream>
#include <ctime>
#include <cmath>
#include <random>

using namespace std;

int main()
{
    srand(time(0));

    int array1[4] = {0}, array2[4] = {0},
        num1 = 0, num2 = 0;

    for(int i = 0; i < 4; i++){
       array1[i] = rand() % 10;
       cout << array1[i] << " ";
       array2[i] = rand() % 10;
       cout << array2[i] << endl;
       num1 *= 10;
       num2 *= 10;
       num1 += array1[i];
       num2 += array2[i];

    }
    cout << "Got: " << num1 << " + " << num2 << endl
         << "Result: " << (num1 + num2);
    return 0;
}
