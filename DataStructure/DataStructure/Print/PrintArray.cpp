//
//  PrintArray.cpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#include "PrintArray.h"

void PrintArray::Print(int (&arr)[], int n) {
    for (int i=0; i<n; ++i) {
        cout << arr[i] << " " << flush;
    }
    cout << endl;
}

void PrintArray::Print(char (&arr)[], int n) {
    for (int i=0; i<n; ++i) {
        cout << arr[i] << " " << flush;
    }
    cout << endl;
}

