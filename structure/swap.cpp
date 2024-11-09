#include <iostream>

using namespace std;

// Reference
void MySwap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

// Pointer
void MySwapPtr(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp; 
}

int main() {
  // Swap
  {
    int a = 3;
    int b = 2;

    cout << a << " " << b << endl;

    // TODO: a와 b의 순서를 바꾸기
    MySwap(a, b);
    MySwapPtr(&a, &b);

    cout << a << " " << b << endl;
  }


  return 0;
}

