#include <iostream>

using namespace std;

struct {
    string pinCodes[10] = {"1234", "2232", "0228", "0322", "1337", "4852", "7717", "8188", "9090", "0110"};
    int money[10] = {0};
} acc;
int input(string Text){
    int Value;
    cout << Text << endl;
    cin >> Value;
    return Value;
}
string inputS(string Text){
    string Value;
    cout << Text << endl;
    cin >> Value;
    return Value;
}
// chosing action to do with money
int chooseAction(int accNum){
    int act;
    cout << "Your money: " << acc.money[accNum] << "$" << endl
         << "What can I do?" << endl
         << "1 - add money" << endl
         << "2 - withdraw money" << endl;
    cin >> act;
    return act;
}
// add or withdraw money
int moneyAction(int accNum, int action){
    int sum = input("Enter sum: ");
    if(action == 1 && sum > 0)
        acc.money[accNum] += sum;
    else if(action == 2 && acc.money[accNum] >= sum){
        acc.money[accNum] -= sum;
    }
    else
        cout << "Error: incorrect action or sum" << endl;
}
int bankomat(){
    // choosing acc number
    int accNum = input("Enter account number: ") - 1;
    // if PIN correct
    if(acc.pinCodes[accNum] == inputS("Enter PIN: ")){
        moneyAction(accNum, chooseAction(accNum));
        if(inputS("Do you want to exit? ") == "Yes")
            return 0;
    }
    else{
        cout << "Invalid PIN" << endl;
        if(inputS("Do you want to exit? ") == "Yes")
            return 0;
    }
    bankomat();
}
int main()
{
    bankomat();
}
