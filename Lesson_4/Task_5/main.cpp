#include <iostream>

using namespace std;

int main()
{
    char input[100];
    cout << "Enter something: ";
    cin.getline(input, 100);
    for(int i = 0; input[i] != 0; i++){
        if(input[i] == 'f' && input[i+1] == 'u' && input[i+2] == 'c' && input[i+3] == 'k')
            for(int j = 0; j < 4; j++) input[i+j] = '*';
    }
    cout << "New string: " << input;
    return 0;
}
