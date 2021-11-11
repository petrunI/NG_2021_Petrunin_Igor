#include <iostream>

using namespace std;

int main()
{
    bool a = 0;
    char smt1[100] = {0}, smt2[100] = {0};
    cout << "Enter something: ";
    cin.getline(smt1, 100);
    cout << "Enter something again: ";
    cin.getline(smt2, 100);

    for(int i = 0; smt1[i] || smt2[i]; i++){
        if(smt1[i] != smt2[i]) a = 1;
    }

    if(!a) cout << "The first and second strings are the same!";
    else cout << "Error! The first and second strings aren`t the same!";

    return 0;
}
