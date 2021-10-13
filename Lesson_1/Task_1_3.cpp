#include <iostream>

using namespace std;

int main()
{
    int a = 50, b = 20;

    a += b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl
         << "b = " << b << endl;
    return 0;
}
