#include <iostream>

using namespace std;


struct Element {
  int key;
  char value;
};

bool CheckSortedTest(int* arr, int size) {
  // TODO: 정렬 확인 함수 구현
  if (arr[0] <= arr[1] <= arr[2]) {
    return true;
  }

  return false;
}

bool CheckSorted(int* arr, int size) {
  for (int i = 0; i < size -1; i++) {
    if (arr[i] > arr[i+1])
      return false;
  }
  return true;
}

void MySwap(int* arr) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i] < arr[j]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

}

// void Print(int* arr, int size) {
//   for (int i = 0; i < size; i++) 
//     cout << arr[i] << " ";
//   cout << endl;
// }

int main() {
  // 3개 정렬
  {
    for (int k = 0; k < 3; k++) {
      for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {

          int arr[3] = { i, j, k};
          int size = sizeof(arr) / sizeof(arr[0]);

          for (int e = 0; e < size; e++) {
            cout << arr[e] << " " << flush;
          }

          cout << " -> " << flush;

          //TODO : 정렬 해보기
          MySwap(arr);

          for (int e = 0; e < size; e++) {
            cout << arr[e] << " " << flush;
          }

          cout << boolalpha;
          cout << CheckSorted(arr, size); // 정렬 되었나 확인
          cout << endl;

        }
      }
    }
  }
  return 0;
}