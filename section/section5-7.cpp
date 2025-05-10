#include <iostream>


int pow(int base, int exponent) {
    int result = 1;

    for (int count = 0; count < exponent; ++count) {
        result *= base;
    }
    return result;
}

int main() {

    std::cout << pow(2, 4) << std::endl;


    return 0;
}