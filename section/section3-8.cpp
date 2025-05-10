#include <iostream>
#include <bitset>

int main() {
    using namespace std;

    // << left shift
    // >> right shift
    // ~, &, |, ^

    // shift operator
    unsigned int a = 3;
    cout << std::bitset<4>(a) << " " << a << endl;

    unsigned int b = a << 2;
    cout << std::bitset<4>(b) << " " << b << endl;

    cout << std::bitset<4>(~b) << " " << ~b << endl;

    unsigned int c = 0b1100;
    unsigned int d = 0b0110;

    cout << c << " " << d << endl;

    cout << std::bitset<4>(c & d) << endl; // bitwise AND
    cout << std::bitset<4>(c | d) << endl; // bitwise OR
    cout << std::bitset<4>(c ^ d) << endl; // 

    unsigned int e = 0b0110;
    cout << std::bitset<4>(e >> 2) << endl;



    return 0;
}