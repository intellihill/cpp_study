//
//  BubbleSort.cpp
//  DataStructure
//
//  Created by 정대로 on 9/20/25.
//

#include "BubbleSort.hpp"

template<typename T>
void BubbleSort<T>::MyProcess() {
    int arr[]= { 8, 3, 2, 5, 1, 1, 2};
    int n= sizeof(arr) / sizeof(arr[0]);
    
    // Bubble Sort
    std::cout << "BubbleSort: " << std::endl;
    for (int i=0; i<n-1; ++i) {
        for (int j=0; j<n-i-1; ++j) {
            int temp;
            if (arr[j] > arr[j+1]) {
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    
    for (int i=0; i<n; ++i) {
        std::cout << arr[i] << " " << std::flush;
    }
    std::cout << std::endl;
    
    // Best case
    // Stability: 버블소트는 key값이 같으면 바꾸지 않기때문에 stable함
    int arrS[]= { 1, 2, 3, 4, 5 };
    int nS= sizeof(arrS) / sizeof(arr[0]);
    
    std::cout << "BubbleSort Stability: " << std::endl;
    for (int i=0; i<nS-1; ++i) {
        bool swapped= false;
        for (int j=0; j<nS-i-1; ++j) {
            int temp;
            if (arr[j] > arr[j+1]) {
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
                swapped= true;
            }
        }
        if (swapped== false) {
            break;
        }
    }
    for (int i=0; i<n; ++i) {
        std::cout << arr[i] << " " << std::flush;
    }
    std::cout << std::endl;
}

template<typename T>
void BubbleSort<T>::BbSort(T arr[], int size) {
    cout << "Bubble Sort start: " << endl;
    this -> PrintArray(arr, size);
    int i, j;
    for (i=0; i<size-1; i++) {
        for (j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                T tmp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= tmp;
            }
        }
    }
    this -> PrintArray(arr, size);
}

// explicit instantiation
template class BubbleSort<int>;
template class BubbleSort<char>;
