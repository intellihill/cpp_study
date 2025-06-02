#include <iostream>
#include <cassert>

class vector {
public:
    vector(int size) : my_size(size), data(new double[size]) {}
    
    vector(const vector& that): my_size(that.size), data(new double[my_size]) {
        for (int i= 0; i < my_size; ++ i) {
            data[i] = that.data[i];
        }
    }

    ~vector() {delete[] data;}

    // void operator=(const vector& that) {
    //     assert(that.my_size == my_size);
    //     for (int i= 0; i < my_size; ++i) {
    //         data[i]= that.data[i];
    //     }
    // }


    // 읽기 전용 배열 인덱스 접근
    double& operator[](int i) const {
        assert(i >= 0 && i < my_size);
        return data[i];
    }
    
    double& operator[](int i) {
        assert(i >= 0 && i < my_size);
        return data[i];
    }

private:
    int my_size;
    double* data;
};

std::ostream& operator<<(std::ostream& os, const vector& v) {
    os << '[';
    if (v.size() > 0)
        os << v[0];
    for (int i= 1; i < v.size(); ++i)
        os << ", " << v[i];
    return os << ']';
}

int main() {
    vector v1(4);
    v1[0]= v1[1]= 1.0;
    v1[2]= 2.0;


    std::cout << v1 << std::endl;

    return 0;
}