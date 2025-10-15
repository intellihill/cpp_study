//
//  InsertSort.cpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#include "InsertSort.hpp"

template<typename T>
void InsertSort<T>::MyProcess() {
    int arr[]= { 4, 3, 2, 10, 12, 1, 5, 6 };
    int size= sizeof(arr) / sizeof(arr[0]);
    cout << "MyInsertSort: " << endl;
    for (int i=1; i<size-1; ++i) {
        for (int j=i; j>0; --j) {
            if (arr[j] < arr[j-1]) {
                int tmp= arr[j];
                arr[j]= arr[j-1];
                arr[j-1]= tmp;
            }
        }
    }
    PrintArray(arr, size);
}


//template<typename T>
//void InsertSort<T>::MyProcess() {
//    int arr[]= { 4, 3, 2, 10, 12, 1, 5, 6 };
//    int size= sizeof(arr) / sizeof(arr[0]);
//    cout << "MyInsertSort: " << endl;
//    
//    
//    for (int i=0; i<size; ++i) {
//        for (int j=0; j<i; ++j) {
//            if (arr[i-j] < arr[i-j-1]) {
//                int temp= arr[i-j];
//                arr[i-j]= arr[i-j-1];
//                arr[i-j-1]= temp;
//                Print(arr, size);
//            }
//        }
//        cout << endl;
//    }
//}

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
void InsertSort<T>::InsertionSort(T arr[], int n) {
    cout << "InsertionSort start: " << endl;
    T key;
    int i, j;
    for (i=0; i<n; i++) {
        key= arr[i];
        for (j=i; j>0 && arr[j-1] > key; j--) {
            arr[j]= arr[j-1];
        }
        arr[j]= key;
    }
}

//void InsertSort::InsertionSort(char (&arr)[], int n) {
//    cout << "InsertionSort char[] start: " << endl;
//    int i, key, j;
//    for (i=0; i<n; ++i) {
//        key= arr[i];
//        for (j=i; j>0 && arr[j-1] > key; j--) {
//            arr[j]= arr[j-1];
//        }
//        arr[j]= key;
//    }
//}

template<typename T>
void InsertSort<T>::MyProcess1() {
    int arr[]= { 1, 2, 4, 5, 3, 6 };
    int size= sizeof(arr) / sizeof(arr[0]);
    
    cout << "MyProcess1 start" << endl;
    
    for (int i=1; i<size; i++) {
        int key= arr[i];
        int j= i;
        
        for (; j>0 && arr[j-1] > key; j--) {
            arr[j]= arr[j-1];
        }
        
        arr[j]= key;
    }
}

template class InsertSort<int>;
