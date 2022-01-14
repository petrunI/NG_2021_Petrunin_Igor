#include <iostream>
#include <cstring>

using namespace std;

char input(string Text){
    char Value[256];
    cout << Text << endl;
    cin.getline(Value, 256);
    return Value;
}
double getNum(char sym){
    return sym - '0';
}
double checkNum(char line[256], int j){
    if(line[j] >= '0' && line[j] <= '9'){
        int dig = checkNum(line, j+1);
        if(dig != -1){

        }
    }
    else
        return -1;
}
double bkt(char line[256], int *p_i){
    for( ; line[*p_i] != ")"; *p_i++){
        checkNum(line, *p_i);
    }
}
double lookFor(char line[256]){
    for(int i = 0, int *p_i = &i; line[*p_i];*p_i++){
        if(line[*p_i] == "(") bkt(line);
    }
}

void readLine(char line[256]){
    double num;
    lookFor(line);
    /*for(int i = 0; line[i];i++){
        if(line[i] >= 0 && line[i] <= 9){
            if(line[i-1] >= '0' && line[i-1] <= 9){
                line[i] = getNum(line[i]) + line[i-1]*10;
            }
            else
                line[i] = getNum(line[i]);
        }
        switch(line[i]){
            case '+':
                    break;
            case '-':
                    break;
        }
    }*/
    cout << num;
}
int calc(){
    readLine(input("Enter line: "));
    calc();
}

int main()
{
    calc();
}
