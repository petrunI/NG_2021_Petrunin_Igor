#include <iostream>

using namespace std;

int main()
{
    int array1[10], input;
    cout << "Enter 10 numbers:"<< endl;
    for(int i = 0; i < 10; i++){
        cout << "array number no." << i+1 << " = " ;
        cin >> array1[i];
    }
    cout << "Enter digit which you want to add to array: ";
    cin >> input;
    cout << "Array1: ";
    for(int i = 0; i < 10; i++){
        cout << (array1[i] += input) << " ";
    }
    return 0;
}
