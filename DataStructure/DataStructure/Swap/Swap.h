//
//  Swap.h
//  DataStructure
//
//  Created by 정대로 on 9/14/25.
//

#ifndef SWAP_H
#define SWAP_H
#include <iostream>
using namespace std;

class Swap {
private:
    int a;
    int b;
    
public:
    Swap(int num1, int num2) : a(num1), b(num2) {}
    
    void MySwap();
    void MySwapPtr(int* i, int* j);
    void MySwapRef(int& i, int& j);
    void MySorting();
    void exercise();
};

#endif
