#include <cassert>
#include <iostream>
#include <vector>

// class vector {
// private:
//     int my_size;
//     double* data;

// public:
//     vector(int size) : my_size(size), data(new double[size]) {}

//     vector() : my_size(0), data(0) {}

//     ~vector() {
//         std::cout << "Deconstructor" << std::endl;
//         delete[] data;
//     }

//     vector(const vector& that) : my_size(that.my_size), data(new double[my_size]) {
//         for (int i= 0; i< my_size; ++i) {
//             data[i] = that.data[i];
//         }
//     }

//     void operator=(const vector& that) {
//         assert(that.my_size == my_size);
//         for (int i= 0; i< my_size; ++i) {
//             data[i] = that.data[i];
//         }
//     }

//     int size() const {
//         return my_size;
//     }
//     int size() {
//         return my_size;
//     }

//     double& operator[](int i) const {
//         assert(i>=0 && i<my_size);
//         return data[i];
//     }

//     double& operator[](int i) {
//         assert(i>=0 && i<my_size);
//         return data[i];
//     }
// };

// std::ostream& operator<< (std::ostream& os, const vector& v) {
//     os << '[';
//     if (v.size() > 0) {
//         os << v[0];
//     }
//     for (int i= 1; i< v.size(); ++i) {
//         os << ", " << v[i];
//     }
//     return os << ']';
}


int main() {
    vector v1(4);
    // v1[0] = v1[1] = 1.0;
    // v1[2] = 2.0;
    // v1[3] = -3.0;

    // std::cout << v1 << std::endl;

    // vector v2(v1);

    return 0;
}