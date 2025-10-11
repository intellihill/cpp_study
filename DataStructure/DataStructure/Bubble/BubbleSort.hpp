//
//  BubbleSort.hpp
//  DataStructure
//
//  Created by 정대로 on 9/20/25.
//
//  https://en.wikipedia.org/wiki/Bubble_sort


#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include <iostream>
#include "../Utils/Utils.hpp"

template<typename T>
class BubbleSort : public Utils<T> {
public:
    void MyProcess();
    void BbSort(T arr[], int size);
};

#endif // !BUBBLE_SORT_H
