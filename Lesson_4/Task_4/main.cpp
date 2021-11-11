#include <iostream>

using namespace std;

int main()
{
    int hesh = 0;
    char input[100];
    cout << "Enter something: ";
    cin.getline(input, 100);
    for(int i = 0; input[i] != 0; i++){
        if(input[i] == 'a' ||
           input[i] == 'e' ||
           input[i] == 'i' ||
           input[i] == 'o' ||
           input[i] == 'u' ||
           input[i] == 'y' ) hesh++;
        else if(input[i] == ' ') hesh *= 10;
    }
    cout << "Hashcode: " << hesh;
    return 0;
}
