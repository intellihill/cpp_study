//
//  SelectionSort.hpp
//  DataStructure
//
//  Created by 정대로 on 9/15/25.
//

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include <iostream>
#include "../Swap/Swap.h"
using namespace std;

class SelectionSort : public Swap {
private:
public:
    SelectionSort() : Swap() {}
    
    void process();
    void processThree();
    bool CheckSorted(int* arr, int size);
    int minNumber(int (&arr)[5]);
    int minNumIndex(int (&arr)[5]);
};

#endif
