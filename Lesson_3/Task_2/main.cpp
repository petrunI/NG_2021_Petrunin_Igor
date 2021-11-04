#include <iostream>

using namespace std;

int main()
{
    const int arrLenght = 10; // numbers of accounts
    string pinCodes[arrLenght] = {"1234", "2232", "0228", "0322", "1337", "4852", "7717", "8188", "9090", "0110"}, PIN; // I used string to make possible PINs with 0 at the beginning
    int money[arrLenght] = {0}, bankAcc, act, sum;
    while(true){
        cout << "Bank account:";
        cin >> bankAcc;
        cout << "PIN for " << bankAcc << " account: ";
        cin >> PIN;
        if (pinCodes[bankAcc-1] != PIN){
            cout << "Invalid PIN" << endl;
            continue;
        }
        cout << "Your money: " << money[bankAcc-1] << "$" << endl
             << "What can I do?" << endl
             << "1 - add money" << endl
             << "2 - withdraw money" << endl;
        cin >> act;
        switch (act){
            case 1:
                cout << "How much do you want to add?: ";
                cin >> sum;
                money[bankAcc-1] += sum;
                break;
            case 2:
                cout << "How much do you want to withdraw?: ";
                cin >> sum;
                if (money[bankAcc-1] >= sum){
                    money[bankAcc-1] -= sum;
                    break;
                }
            default:
                cout << "please write correct value" << endl;
        }

    }



    return 0;
}
