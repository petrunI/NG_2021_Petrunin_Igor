#include <iostream>

using namespace std;

int main()
{
    int sqrSize;
    cout << "Size: ";
    cin >> sqrSize;
    for(int i = 0; i < sqrSize; i++){
        for(int j = 0; j < sqrSize; j++){
            if(i == 0 || i == sqrSize-1 || j == 0 || j == sqrSize-1) cout << "*";
            else cout << " ";

        }
        cout << endl;
    }
}
