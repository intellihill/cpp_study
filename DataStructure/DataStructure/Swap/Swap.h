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

template<typename T>
class Swap {
public:
    Swap(){}
    
    void MySwap(T a, T b);
    void MySwapPtr(T* i, T* j);
    void MySwapRef(T& i, T& j);
//    void MySorting();
//    void exercise();
//    
//    void checkSorted(int a, int b);
};

#endif // !SWAP_H
