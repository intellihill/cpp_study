//
//  collatz.h
//  modern_cpp
//
//  Created by 정대로 on 8/4/25.
//

#ifndef COLLATZ_FUNC_H
#define COLLATZ_FUNC_H

#include <vector>

class Collatz {
public:
    // 주어진 숫자 n에 대해 콜라츠 수열을 생성하고 단계 수를 반환한다.
    int calculateSteps (long long n);
    
    // 콜라츠 수열을 반환
    std::vector<long long> getSequence(long long n);
    
private:
    // 콜라츠 수열 계산 헬퍼 함수
    long long nextNumber(long long n);
};

#endif
