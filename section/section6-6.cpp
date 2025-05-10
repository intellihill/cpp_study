#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char myString[] = "string";

    cout << sizeof(myString) << endl;
    for (int i = 0; i < 7; i++) {
        // cout << myString[i] << endl;
        cout << (int)myString[i] << endl;
    }

    char myCin[255];
    cin >> myCin;

    myCin[0] ='A';
    myCin[4] ='\0'; // 여기까지만 cout됨

    cout << myCin << endl;

    char myCin0[255]; // 중간에 공백 입력
    cin.getline(myCin0, 255);

    cout << myCin0 << endl;


    char source[] = "Copy this!";
    char dest[50];
    strcpy(dest, source);

    cout << source << endl;
    cout << dest << endl;
    // cout << strcmp(dest, source) << endl;
    // cout << strcat(dest, source) << endl;

    return 0;
}