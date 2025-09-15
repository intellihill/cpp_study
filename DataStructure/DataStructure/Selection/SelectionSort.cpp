//
//  SelectionSort.cpp
//  DataStructure
//
//  Created by 정대로 on 9/15/25.
//

#include "SelectionSort.hpp"

// 3개 정렬
void SelectionSort::process() {
    for (int k=0; k<3; ++k) {
        for (int j=0; j<3; ++j) {
            for (int i=0; i<3; ++i) {
                int arr[3] = { i, j, k };
                int size= sizeof(arr) / sizeof(arr[0]);
                
                for (int e=0; e<size; e++) {
                    cout << arr[e] << " " << flush;
                }
                
                cout << " -> " << flush;
                
                //TODO: 정렬 하기
                
                for (int e=0; e<size; ++e) {
                    cout << arr[e] << " " << flush;
                }
                
                cout << boolalpha;
                CheckSorted(); // 정렬 되었나 확인
                cout << endl;
                
            }
        }
    }
}

void SelectionSort::CheckSorted() {
    cout << "test" << endl;
}
