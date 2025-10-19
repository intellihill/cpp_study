//
//  InsertSort.cpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#include "InsertSort.hpp"

// https://books.google.com/books?id=kse_7qbWbjsC&pg=PA116#v=onepage&q&f=false
template<typename T>
void InsertSort<T>::TeacherProcess() {
    int arr[]= { 4, 3, 2, 10, 12, 1, 5, 6 };
    int size= sizeof(arr) / sizeof(arr[0]);
    cout << "TeacherInsertSort: " << endl;
    int i, key, j;
    for (i=1; i<size; i++) {
        key= arr[i];
        
        for (j=i; j>0 && arr[j-1] > key; j--) {
            arr[j]= arr[j-1];
//            Print(arr, size);
        }
        arr[j]= key;
    }
    cout << endl;
}



template<typename T>
void InsertSort<T>::InsertionSort(T arr[], int size) {
    cout << "InsertionSort start: " << endl;
    T key;
    int i, j;
    for (i=0; i<size; i++) {
        key= arr[i];
        for (j=i; j>0 && arr[j-1] > key; j--) {
            arr[j]= arr[j-1];
        }
        arr[j]= key;
    }
    PrintArray(arr, size);
}


template class InsertSort<int>;
