#include <iostream>
#include <cassert>

class vector {
public:
    vector(int size) : my_size(size), data(new double[size]) {
        std::cout << "Constructor: " << my_size << std::endl;
    }
    
    ~vector() {
        std::cout << "DeConstructor: " << std::endl;
        delete [] data;
    }
    
    void operator=(const vector& that) {
        assert(that.my_size == my_size);
        
        for (int i=0; i<my_size; ++i) {
            data[i] = that.data[i];
        }
    }
    
    double& operator[](int i) const {
        assert(i>=0 && i<my_size);
        return data[i];
    }
    
private:
    int my_size;
    double* data;
};

int main(int argc, const char * argv[]) {
    vector v1(4);
    v1[0] = v1[1] = 1.0;
    
    std::cout << "test" << std::endl;
    
    return 0;
}
