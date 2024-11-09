#include <iostream>

int main() {
  using namespace std;

  float pi = 3.14f;
  unsigned int n = 5u;
  long n2 = 5L;
  double d = 6.0e-10;

  // octal: 0을 붙이면 8진수
  int x = 012;
  cout << x << endl;

  // hexa
  int y = 0xF;
  cout << y << endl;

  // binary
  int z = 0b1010;
  cout << z << endl;

  return 0;
}