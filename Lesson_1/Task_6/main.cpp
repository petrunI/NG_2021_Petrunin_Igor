#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int mask;
    cout << "Complete the mask: 255.255.255.";
    cin >> mask;
    cout << "Number of available ip-addresses: ";
    switch(mask){
        case 0:
            cout << 256;
            break;
        case 128:
            cout << 128;
            break;
        case 192:
            cout << 64;
            break;
        case 224:
            cout << 32;
            break;
        case 240:
            cout << 16;
            break;
        case 248:
            cout << 8;
            break;
        case 252:
            cout << 4;
            break;
        case 254:
            cout << 2;
            break;
        case 255:
            cout << 1;
            break;
        default:
            cout << "invalid input";
    }
    return 0;
}
