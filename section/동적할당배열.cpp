#include <iostream>

using namespace std;

int main() {
    int length;

    cin >> length;

    // int array[length];
    int *array = new int[length];

    array[0] = 1;
    array[1] = 2;

    for (int i=0; i<length; i++) {
        cout << array[i] << endl;
        cout << (uintptr_t)&array[i] << endl;
    }

    delete [] array;

    return 0;
}