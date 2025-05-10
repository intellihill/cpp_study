#include "range_loop.h"
#include <iostream>

void rangeLoop() {
    int prime[] = { 2, 3, 5, 7, 11, 13, 16, 19};
    for (int i : prime) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
