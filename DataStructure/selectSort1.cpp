#include <iostream>

using namespace std;

void sortedArray(int* arr, int size) {

    if (arr[0] > arr[1]) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    if (arr[0] > arr[2]) {
        int temp = arr[0];
        arr[0] = arr[2];
        arr[2] = temp;
    }
    if (arr[1] > arr[2]) {
        int temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;
    }
}

void checkBool(int* arr) {
    if (arr[0] <= arr[1] && arr[1] <= arr[2]) {
        cout << " true" << flush;
    }
}


int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int arr[3] = {i, j, k};
                int size = sizeof(arr) / sizeof(arr[0]);

                for (int e = 0; e < size; e++) {
                    cout << arr[e] << " " << flush;
                }

                cout << "->" << flush;

                // TODO: 정렬 해보기

                sortedArray(arr, size);

                for (int e = 0; e < size; e++) {
                    cout << " " << arr[e] << flush;
                }

                checkBool(arr);

                cout << boolalpha;
                cout << endl;
            }
        }
    }
}