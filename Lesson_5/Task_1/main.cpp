#include <iostream>

using namespace std;

int consInput(){
    int sqrSize;
    cout << "Size: ";
    cin >> sqrSize;
    return sqrSize;
}
int writeStar(int Size, int i){
    if (Size > 0){
        cout << "*";
        writeStar(Size-1, i);
    }
}
int writeBlank(int Size, int i){
    if (Size > 0){
        cout << " ";
        writeBlank(Size-1, i);
    }
}
int writeSqr(int Size, int i){
    if (i < Size){
        writeSqr(Size, i+1);
        if(i == 0 || i == Size-1)
            writeStar(Size, i);
        else{
            cout << "*";
            writeBlank(Size-2, i);
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    writeSqr(consInput(), 0);
    return 0;
}
