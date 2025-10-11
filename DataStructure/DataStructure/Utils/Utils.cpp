//
//  Utils.cpp
//  DataStructure
//
//  Created by 정대로 on 9/28/25.
//

#include "Utils.hpp"

template<typename T>
void Utils<T>::PrintArray(T arr[], int size) {
    int i;
    for (i=0; i<size; i++) {
        cout << arr[i];
    }
    cout << endl;
}

template<typename T>
int Utils<T>::Count(T arr[], int n, int target) {
    int count= 0;
    for (int i=0; i<n; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    return count;
}

template<typename T>
int Utils<T>::SequentialSearch(int (&arr)[], int n, int target) {
    int index= -1;
    for (int i=0; i<n; ++i) {
        if (arr[i] == target) {
            index= i;
            break;
        }
    }
    return index;
}
    
// explicit instantiation
template class Utils<int>;
template class Utils<char>;
