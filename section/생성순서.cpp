#include <iostream>
using namespace std;

class Mother {
public:
    int m_i;

    Mother(): m_i(1) {
        cout << "Mother construction" << endl;
    }
};

class Child: public Mother {
public:
    double m_d;

public:
    Child(): m_d(1.0) {
        cout << "Cild construction" << endl;
    }
};

int main() {
    Child c1;

    return 0;
}