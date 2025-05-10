#include <iostream>
#include <typeinfo>

int main() {
    using namespace std;

    float a = 1.0f;
    double b = a; // numeric promotion

    // numeric conversion
    double i = 30000;
    char c  = i;

    cout << static_cast<int>(c) << endl;


    double d = 0.123456789;
    float f = d;

    cout << std::setprecision(12) << f << endl;

    return 0;
}