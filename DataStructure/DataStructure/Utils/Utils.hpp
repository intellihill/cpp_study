//
//  Utils.hpp
//  DataStructure
//
//  Created by 정대로 on 9/28/25.
//

#ifndef UTILS_FUNCTION_H
#define UTILS_FUNCTION_H

#include <iostream>
#include "../Swap/Swap.h"
using namespace std;

template<typename T>
class Utils : public Swap<T> {
public:
    void PrintArray(T arr[], int size);
    int Count(T arr[], int n, int target);
    int SequentialSearch(int (&arr)[], int n, int target);
};

#endif // !UTILS_FUNCTION_H
