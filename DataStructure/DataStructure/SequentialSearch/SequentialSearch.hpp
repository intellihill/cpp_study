//
//  SequentialSearch.hpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#ifndef SEQUENCTIAL_SEARCH_H
#define SEQUENCTIAL_SEARCH_H
#include <iostream>
using namespace std;

class SequenceSearch {
public:
    void processEx();
    int MySequentialSearch(int (&arr)[], int n, int target);
    int SequentialSearch(int (&arr)[], int n, int target);
    int SortedCount(int (&arr)[], int n, int target);
    int SortedCountHelper(int* arr, int n, int x, int start);
};


#endif
