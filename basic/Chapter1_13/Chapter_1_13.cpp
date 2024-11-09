#include <iostream>

namespace MySpace1 {
  int doSomething(int a, int b) {
    return a + b;
  }
}

int doSomething(int a, int b) {
  return a * b;
}

using namespace std;

int main() {
  cout << doSomething(3, 4) << endl;
  cout << MySpace1::doSomething(1, 2) << endl;

  return 0; 
}