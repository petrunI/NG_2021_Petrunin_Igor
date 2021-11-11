#include <iostream>

using namespace std;

int main()
{

    int key = 0;
    char input[100];
    cout << "Enter what you want to encrypt/decrypt: ";
    cin.getline(input, 100);
    cout << "Enter key: ";
    cin >> key;

    for(int i = 0; input[i] != 0; i++){
        if(input[i] != ' '){
            input[i] += key;
            if(input[i] > 'z') input[i] -= 26;
            else if(input[i] < 'a') input[i] += 26;
        }
    }
    cout << "string: " << input << endl;

    return 0;
}
