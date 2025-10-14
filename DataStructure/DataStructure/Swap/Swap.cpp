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
    cout << "before MySwap: " << a << " " << b << endl;
    
    T temp= a;
    a= b;
    b= temp;
    
    cout << "after MySwap: " << a << " " << b << endl;
}

// TODO: Point를 활용해서 받은 파라미터로 바꿔주기
template<typename T>
void Swap<T>::MySwapPtr(T* i, T* j) {
    cout << "MySwapPtr before: " << *i << " " << *j << endl;
    
    T* temp= i;
    i= j;
    j= temp;
    
    cout << "MySwapPtr after: " << *i << " " << *j << endl;
}

// TODO: Reference를 활용해서 받은 파라미터로 바꿔주기
//void Swap::MySwapRef(int& i, int& j) {
//    cout << "MySwapRef before: " << i << " " << j << endl;
//    
//    int temp= i;
//    i= j;
//    j= temp;
//    
//    cout << "MySwapRef after: " << i << " " << j << endl;
//}

// TODO: 정렬(sorting)
//void Swap::MySorting() {
//    int arr[] = {3, 2};
//    cout << "MySorting before: " << arr[0] << " " << arr[1] << endl;
//    
//    if (arr[0] > arr[1]) {
//        int temp= arr[0];
//        arr[0]= arr[1];
//        arr[1]= temp;
//    }
//    
//    cout << "MySorting after: " << arr[0] << " " << arr[1] << endl;
//}

// TODO: 5x5 2차원배열에서 오름차순인경우 true, false로 구분하여 console찍어보기
//void Swap::exercise() {
//    for (int i=0; i<5; ++i) {
//        for (int j=0; j<5; ++j) {
//            cout << boolalpha;
//            cout << j << " " << i << " " << bool(j <= i) << endl;
//        }
//    }
//}

// TODO: checkSorted function 만들기. (정렬이 되어있으면 true, 안되어 있으면 false)
//void Swap::checkSorted(int a, int b) {
//    cout << boolalpha;
//    if (a < b) {
//        cout << a << " " << b << " " << bool(a < b) << endl;
//    } else {
//        cout << a << " " << b << " " << bool(a >= b) << endl;
//    }
//}

template class Swap<int>;
template class Swap<char>;
