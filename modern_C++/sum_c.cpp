#include <iostream>

using namespace std;


template <typename T>
T sum(const T* array, int n) {
    T sum(0);
    for (int i= 0; i < n; ++i) {
        sum+= array[i];
        return sum;
    }
}

int main() {

    int ai[]= {2, 4, 7};
    double ad[]= {2., 4.5, 7.};

    cout << "Sum ai is " << sum(ai, 3) << endl;


    return 0;
}