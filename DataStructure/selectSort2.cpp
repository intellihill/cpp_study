#include <iostream>

using namespace std;

void findMinIndex(int* arr, int size) {
    int min_num = arr[0];
    int min_index = 0;

    for (int i = 0; i < size; i++) {
        if (min_num > arr[i]) {
            min_num = arr[i];
            min_index = i;
        } 
    }

    cout << "Minimum index is " << min_index << endl;
}

void findMinNum(int* arr, int size) {

    int min_num = arr[0];

    for (int i = 0; i < size; i++) {
        min_num = min_num > arr[i] ? arr[i] : min_num;
    }

    cout << "Minimum number is " << min_num << endl;


}

void selectSort(int* arr, int size) {

    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " << endl;
    }
}

int main() {

    int arr[] = { 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // assert(size > 0);

    findMinNum(arr, size);
    findMinIndex(arr, size);
    selectSort(arr, size);


    // TODO:

    return 0;
}