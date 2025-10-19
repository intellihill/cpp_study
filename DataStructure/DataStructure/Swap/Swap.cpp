//
//  Swap.cpp
//  DataStructure
//
//  Created by 정대로 on 9/14/25.
//
#include "Swap.h"

// TODO: a와 b의 변수를 바꿔주기.
template<typename T>
void Swap<T>::MySwap(T a, T b) {
    T temp= a;
    a= b;
    b= temp;
}

// TODO: Point를 활용해서 받은 파라미터로 바꿔주기
template<typename T>
void Swap<T>::MySwapPtr(T* i, T* j) {
    T* temp= i;
    i= j;
    j= temp;
}

// TODO: Reference를 활용해서 받은 파라미터로 바꿔주기
template<typename T>
void Swap<T>::MySwapRef(T& i, T& j) {
    T temp= i;
    i= j;
    j= temp;
}

template class Swap<int>;
template class Swap<char>;
