#include <iostream>

using namespace std;

void printArr(const int array[], const int length) {
    for (int index = 0; index < length; ++index) {
        cout << array[index] << " ";
    }
    cout << endl;
}

int main() {
    const int length = 5;

    int array[length] = { 3, 5, 2, 1, 4 };

    printArr(array, length);

    return 0;
}