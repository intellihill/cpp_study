#include <iostream>

template <typename T> T max (T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
} 

int main() {

    std::cout << max<float>(1, 2) << std::endl;




    return 0;
}