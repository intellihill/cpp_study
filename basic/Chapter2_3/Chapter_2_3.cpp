#include <iostream>
// #include <cstdint>

// Fixed-width Integer: 고정 너비 정수

int main() {
  using namespace std;

  std::int16_t i(5);
  std:int8_t myint = 65;

  cout << myint << endl;

  std::int_fast8_t fi(5);
  std::int_least64_t fl(5);

  return 0;
}