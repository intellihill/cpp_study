//
//  PrintArray.h
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H
#include <iostream>
using namespace std;

class PrintArray {
private:
    int size;
public:
    PrintArray(int n) : size(n){}
    
    void Print(int (&arr)[], int n);
    
};

#endif
