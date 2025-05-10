#include <iostream>

using namespace std;

int main() {
    // const int value = 5;
    // const int *ptr = &value;
    // // *ptr = 6; 

    // cout << *ptr << endl;

    int value = 5;
    const int *ptr1 = &value;
    int *const ptr2 = &value;
    const int *const ptr3 = &value;

    return 0;
}