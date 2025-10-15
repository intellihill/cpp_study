//
//  InsertSort.hpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#ifndef INSERT_SORT_H
#define INSERT_SORT_H
#include <iostream>
#include "../Utils/Utils.hpp"
using namespace std;

template<typename T>
class InsertSort : public Utils<int> {
public:
    InsertSort() {}
    
    void InsertionSort(T arr[], int n);
    
    void MyProcess ();
    void TeacherProcess ();
    void MyProcess1 ();
};

#endif
