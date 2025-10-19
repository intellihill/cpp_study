//
//  main.cpp
//  DataStructure
//
//  Created by 정대로 on 9/14/25.
//

#include <iostream>
#include "Swap/Swap.h"
#include "Selection/SelectionSort.hpp"
#include "Bubble/BubbleSort.hpp"
#include "Insert/InsertSort.hpp"
//#include "SequentialSearch/SequentialSearch.hpp"
//#include "StringCompression/StringCompression.hpp"

int main(int argc, const char * argv[]) {
    int arr[]= {5, 4, 3, 2, 1};
    int size= sizeof(arr)/sizeof(arr[0]);

    BubbleSort<int> bbSort;
    bbSort.BbSort(arr, size);
    
    InsertSort<int> isSort;
    isSort.InsertionSort(arr, size);
    
    SelectionSort<int> slSort;
    slSort.SelectSort(arr, size);

}
