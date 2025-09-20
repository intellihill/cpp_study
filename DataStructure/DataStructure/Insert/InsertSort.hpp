//
//  InsertSort.hpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#ifndef INSERT_SORT_H
#define INSERT_SORT_H
#include <iostream>
#include "../Print/PrintArray.h"
using namespace std;

class InsertSort : public PrintArray {
public:
    InsertSort(int n) : PrintArray(n) {}
    void MyProcess ();
};

#endif
