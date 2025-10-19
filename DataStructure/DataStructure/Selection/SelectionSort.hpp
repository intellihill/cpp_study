//
//  SelectionSort.hpp
//  DataStructure
//
//  Created by 정대로 on 9/15/25.
//

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include "../Utils/Utils.hpp"

template<typename T>
class SelectionSort : public Utils<int>{
public:
    void SelectSort(T arr[], int size);
};

//class SelectionSort : public Swap {
//private:
//public:
//    SelectionSort() : Swap() {}
//    
//    void process();
//    void processThree();
//    bool CheckSorted(int* arr, int size);
//    int minNumber(int (&arr)[5]);
//    int minNumIndex(int (&arr)[5]);
//    void selectionSort(int (&arr)[5]);
//    
//    void sortExample();
//    void StableSort();
//};

#endif
