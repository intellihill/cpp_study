#include <iostream>
#include <cmath> //sin, cos

using namespace std;

void getSinCos(const double degrees, double &sin_out, double &cos_out) {
    static const double pi= 3.141592;

    const double radians = degrees * pi / 180.0;

    sin_out= std::sin(radians);
    cos_out= std::cos(radians);
}

void addOne(int &y) {
    y= y + 1;
}

void foo(const int &x) {
    cout << x << endl;
}

typedef int* pint
// void foo_ptr(int *&ptr) {
void foo_ptr(pint &ptr) {
    cout << ptr << " " << &ptr << endl;
}


int main() {
    int x= 5;
    int *ptr = &x;

    cout << x << " " << &x << endl;
    addOne(x);
    cout << x << " " << &x << endl;

    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);

    cout << sin << " " << cos << endl;

    foo(6);
    foo_ptr(ptr);

    return 0;
}