#include <iostream>

using namespace std;


void mySwap(int a, int b) {
    int temp = b;
    b = a;
    a = temp;
}

void mySwapPtr(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void mySwapRef(int& a, int& b) {
    int temp = b;
    b = a;
    a = temp;
}

bool checkFalse(int a, int b) {
    return (a <= b) ? true : false;
}



int main() {
    int a = 3;
    int b = 2;

    cout << a << " " << b << endl;


    // TODO
    // int temp = b;
    // b = a;
    // a = temp;
    
    // mySwapPtr(&a, &b);
    // mySwapRef(a, b);
    // cout << a << " " << b << endl;


    // 정렬 (sorting)
{
    int arr[2];
    cout << arr[0] << " " << arr[1] << endl;

    // TODO:

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            arr[0] = i;
            arr[1] = j;

            if (arr[0] > arr[1])
                std::swap(arr[0], arr[1]);

            cout << boolalpha;
            cout << arr[0] << " " << arr[1] << " " << checkFalse(arr[0], arr[1]) << endl;
        }
    }


}

    return 0;
}