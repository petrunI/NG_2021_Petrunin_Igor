#include <iostream>

using namespace std;

int main()
{
    int sqrSize;
    cout << "Size: ";
    cin >> sqrSize;
    for(int i = 0; i < sqrSize; i++){
        if(i == 0 || i == sqrSize-1){
            for(int j = 0; j < sqrSize; j++) cout << "*";
            cout << endl;
        }
        else {
            cout << "*";
            for(int j = 0; j < sqrSize-2; j++) cout << " ";
            cout << "*" << endl;
        }
    }
}
