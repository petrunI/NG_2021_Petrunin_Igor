#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int mask, ip = 0;
    cout << "Complete the mask: 255.255.255.";
    cin >> mask;
    switch(mask){
        case 0:
            ip = 256;
            break;
        case 128:
             ip = 128;
            break;
        case 192:
            ip = 64;
            break;
        case 224:
            ip = 32;
            break;
        case 240:
            ip = 16;
            break;
        case 248:
            ip = 8;
            break;
        case 252:
            ip = 4;
            break;
        case 254:
            ip = 2;
            break;
        case 255:
            ip = 1;
            break;
        default:
            cout << "invalid input";
    }
    if(ip != 0) cout << "Number of available ip-addresses: " << ip;
    return 0;
}
