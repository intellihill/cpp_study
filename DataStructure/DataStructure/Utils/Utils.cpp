//
//  Utils.cpp
//  DataStructure
//
//  Created by 정대로 on 9/28/25.
//

#include "Utils.hpp"

int Utils::Count(int (&arr)[], int n, int target) {
    int count= 0;
    for (int i=0; i<n; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    return count;
}

int Utils::SequentialSearch(int (&arr)[], int n, int target) {
    int index= -1;
    for (int i=0; i<n; ++i) {
        if (arr[i] == target) {
            index= i;
            break;
        }
    }
    
    return index;
}
    
