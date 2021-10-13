#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m, ch = 0, n;
    do{
        cout << "Complete the mask: 255.255.255.";
        cin >> m;
        if(m >= 0 && m < 255) ch = 1;
        else cout << "Invalid mask. Try again" << endl;
    }
    while(ch != 1);
    n = pow(2, 8) - 2 - m;
    cout << "Number of available ip-addresses: " << n;
    return 0;
}
