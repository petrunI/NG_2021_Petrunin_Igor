#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, D;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    D = pow(b, 2) - 4 * a * c;

    if(D > 0){
        D = pow(D, 1.0/2);
        double x1 = (b * -1 + D)/(a * 2);
        double x2 = (b * -1 - D)/(a * 2);
        cout << "First root: " << x1 << endl
             << "Second root: " << x2 << endl;
    }
    else if(D == 0){
        D = pow(D, 1.0/2);
        int x = (b * -1 + D)/(a * 2);
        cout << "The only root is " << x << endl;
    }
    else cout << "The discriminant is lower than 0 or another error" << endl;

    return 0;
}
