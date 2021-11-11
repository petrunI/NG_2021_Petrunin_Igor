#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    char input[100];
    cout << "Enter something: ";
    cin.getline(input, 100);
    for(int i = 0; input[i] != 0; i++){
        if(input[i] == ',' || input[i] == '.' || input[i] == ':' || input[i] == ';') num++;
    }
    cout << "Number of punctuation marks in string: " << num;
    return 0;
}
