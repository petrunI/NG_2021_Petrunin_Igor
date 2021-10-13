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

    //I have no idea why I did this xd
    cout << "Quadratic equation: ";

    if (a == 1) cout << "x^2 ";
    else if (a == 0) cout << "";
    else if (a == -1) cout << "-x^2 ";
    else cout << a << "x^2 ";

    if (b == 1) cout << "+ x";
    else if (b == 0) cout << "";
    else if (b == -1) cout << "- x";
    else if (b < 0) cout << "- " << abs(b) << "x";
    else cout << "+ " << b << "x";

    if (c < 0) cout << " - " << abs(c) << " = 0" << endl;
    else cout << " + " << c << " = 0" << endl;

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
