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

int main(int argc, const char * argv[]) {
    
//    Swap sw{1 ,2};
//    sw.MySwap();
//    sw.MySwapPtr(&i, &j);
//    sw.MySwapRef(i, j);
//    sw.MySorting();
//    sw.exercise();
//    sw.checkSorted(3, 2);
    
    SelectionSort ss;
    
    int arr[] = {5,4,3,2,1};
    
    ss.processThree();
    int min= ss.minNumber(arr);
    int minIndex= ss.minNumIndex(arr);
    ss.selectionSort(arr);
    
    cout << min << " " << minIndex << endl;
    
    cout << "Bubble Sort: " << endl;
    
    BubbleSort bs;
    
    bs.MyProcess();
    
}
