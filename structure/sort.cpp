#include <iostream>

using namespace std;

bool checkBoolean(int a, int b) {
  return (a <= b);
}

int main() {
  // 정렬(sorting)
  {
    int arr[] = { 3, 2 };

    cout << arr[0] << " " << arr[1] << endl;

    // TODO: 오름차순으로 정렬하기

    cout << arr[0] << " " << arr[1] << endl;
  }

  {
    int arr[2];

    for (int i = 0; i < 5; i++)
      for (int j = 0; j < 5; j++) {

        arr[0] = i;
        arr[1] = j;

        // std::swap
        if (arr[0] > arr[1])
          swap(arr[0], arr[1]);

        cout << boolalpha;
        cout << arr[0] << " " << arr[1] << " " << checkBoolean(arr[0], arr[1]) << endl;
      }
  }

  return 0;
}