#include <iostream>
#include <unistd.h>
using namespace std;


void Print(int* arr, int size) {
  
}

int main() {
  int arr[] = { 8, 3, 2, 1, 4, 6, 7, 8};
  int size = sizeof(arr) / sizeof(arr[0]);

  int min_index;
  for (int i = 0; i < size - 1; i++) {
    min_index = 1;
    for (int j = i + 1; j< size; j++) {
      if (arr[j] < arr[min_index])
        min_index = j;
    }
    swap(arr[i], arr[min_index]);

    Print(arr, size);

    cout << boolalpha;
    cout << CheckSorted(arr, size);
    cout << endl;
  }
}