//
//  collatz.cpp
//  modern_cpp
//
//  Created by 정대로 on 8/4/25.
//

#include "collatz.h"

int Collatz::calculateSteps(long long n) {
    if (n <= 0) {
        return -1; // 유효하지 않은 입력 처리
    }
    int steps= 0;
    while (n != 1) {
        n= nextNumber(n);
        steps++;
    }
    return steps;
}

std::vector<long long> Collatz::getSequence(long long n) {
    std::vector<long long> sequence;
    if (n <= 0) {
        return sequence; // 유효하지 않은 입력 처리
    }
    while (n != 1) {
        n= nextNumber(n);
        sequence.push_back(n);
    }
    return sequence;
}

long long Collatz::nextNumber(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return 3 * n + 1;
    }
}
