#include <iostream>
#include "ceaserencrypt.h"

using namespace std;

int main()
{
    char line[10];
    cout << "Enter line:";
    cin.getline(line, 10);
    CeaserEncrypt test(line, 2);
    test.Encrypt();
    test.getResult();
}
