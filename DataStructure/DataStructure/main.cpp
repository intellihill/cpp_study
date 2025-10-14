//
//  main.cpp
//  DataStructure
//
//  Created by 정대로 on 9/14/25.
//

#include <iostream>
#include "Swap/Swap.h"
//#include "Selection/SelectionSort.hpp"
#include "Bubble/BubbleSort.hpp"
//#include "Insert/InsertSort.hpp"
//#include "SequentialSearch/SequentialSearch.hpp"
//#include "StringCompression/StringCompression.hpp"

int main(int argc, const char * argv[]) {
    int arr[]= {5, 4, 3, 2, 1};
    int size= sizeof(arr)/sizeof(arr[0]);
//    Swap sw{1 ,2};
//    sw.MySwap();
//    sw.MySwapPtr(&i, &j);
//    sw.MySwapRef(i, j);
//    sw.MySorting();
//    sw.exercise();
//    sw.checkSorted(3, 2);
    
//    SelectionSort ss;
//    
//    int arr[] = {5,4,3,2,1};
//    
//    ss.processThree();
//    int min= ss.minNumber(arr);
//    int minIndex= ss.minNumIndex(arr);
//    ss.selectionSort(arr);
//    
//    cout << min << " " << minIndex << endl;
//    
//    cout << "Bubble Sort: " << endl;
    Swap<int> swap;
    swap.MySwap(3, 4);

    BubbleSort<int> bbSort;
    
    bbSort.BbSort(arr, size);
    
//    InsertSort<int> is{5};
//    is.MyProcess();
//    is.TeacherProcess();
//    is.MyProcess1();
//    
//    cout << "SequenceSearch start: " << endl;
//    SequenceSearch seqS;
//    
//    seqS.processEx();
    
//    cout << "StringCompression start: " << endl;
//    StringCompression stringC;
//    
//    stringC.processEx();

}
