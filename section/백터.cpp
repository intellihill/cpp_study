#include <cassert>
#include <iostream>
using namespace std;

class Vector {
public:
    Vector(int size) : my_size(size), data(new double[size])  {
        cout << "constructor " << my_size << endl;
    }

    Vector() : my_size(0), data(0) {
        cout << "not param constructor " << my_size << endl;
    }


    ~Vector() {
        delete [] data;
        cout << "destructor " << my_size << endl;
    }

    void operator=(const Vector& that) {
        cout << "operator=" << endl;
        assert(that.my_size== my_size);
        for (int i=0; i<my_size; ++i) {
            data[i] = that.data[i];
        }
    }

    int getSize() {
        return my_size;
    }

private:
    int my_size;
    double* data;
};


int main() {
    Vector v1;

    Vector v2(3);

    Vector v3(v2.getSize());
    v3= v2;

    return 0;
}