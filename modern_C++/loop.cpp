#include <iostream>

using namespace std;

int main() {
    // 1.4.4.2
    double v[3], w[] = {2., 4., 6.}, x[] = {6., 5., 4};
    for (int i= 0; i < 3; ++i) {
        v[i] = w[i] + x[i];
    }
    for (int i= 0; i < 3; ++i) {
        cout << "v[" << i << "]=" << v[i] << '\n';
    }

    for (int i= 0, j= 0, p= 1; i< 3; ++i, j+= 4, p*= 2) {
        cout << "i: " << i << "j: "<< j << "p: " << p << '\n';
    }

    // range-based for-loop
    int primes[]= {2, 3, 5, 7, 11, 13, 17, 19};
    for (int i : primes) {
        cout << i << " ";
    }

    return 0;
}