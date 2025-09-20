//
//  InsertSort.cpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#include "InsertSort.hpp"

void InsertSort::MyProcess() {
    int arr[]= { 4, 3, 2, 10, 12, 1, 5, 6 };
//    int arr[]= { 9, 4, 6, 5, 8};
    int size= sizeof(arr) / sizeof(arr[0]);
    cout << "InsertSort: " << endl;
    
    
    for (int i=0; i<size; ++i) {
        for (int j=0; j<i; ++j) {
            if (arr[i-j] < arr[i-j-1]) {
                int temp= arr[i-j];
                arr[i-j]= arr[i-j-1];
                arr[i-j-1]= temp;
                Print(arr, size);
            }
        }
        cout << endl;
    }
}
