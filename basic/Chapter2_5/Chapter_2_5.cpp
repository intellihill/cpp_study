#include <iostream>
#include <iomanip>
#include <limits>

int main() {
  using namespace std;

  float f;
  double d;
  long double ld;

  cout << sizeof(f) << endl;
  cout << sizeof(d) << endl;
  cout << sizeof(ld) << endl;

  cout << numeric_limits<double>::max() << endl;
  cout << numeric_limits<double>::min() << endl;
  cout << numeric_limits<double>::lowest() << endl;
  cout << numeric_limits<float>::max() << endl;
  cout << numeric_limits<float>::min() << endl;
  cout << numeric_limits<float>::lowest() << endl;
  cout << numeric_limits<long double>::max() << endl;
  cout << numeric_limits<long double>::min() << endl;
  cout << numeric_limits<long double>::lowest() << endl;

  float ff(3.14);

  cout << 3.14 << endl;
  cout << 31.4e-1 << endl;
  cout << 31.4e1 << endl;
  cout << 31.4e2 << endl;

  return 0;
}