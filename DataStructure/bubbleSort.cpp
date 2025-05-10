#include <iostream>

using namespace std;

void checkSort(int* arr, int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
}

void bubbleSort(int* arr, int size) {
    
    for (int i = 0; i < size; i++ ) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        checkSort(arr, size);
        cout << endl;
       } 
    }
    checkSort(arr, size);
    cout << endl;
}



int main() {

    int arr[] = { 5, 4, 3, 2, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort
    bubbleSort(arr, size);

    // checkSort(arr, size);

    return 0;
}