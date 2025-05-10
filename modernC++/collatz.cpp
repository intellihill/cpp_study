#include "collatz.h" // 자신의 헤더 파일 포함
#include <iostream>

void collatz(int number) {
    std::cout << number << " ";
    while (number != 1) {
        if (number % 2 == 0) {
            number = number / 2;
        } else {
            number = 3 * number + 1;
        }
        std::cout << number << " ";
    }
    std::cout << std::endl;
}