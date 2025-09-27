//
//  SequentialSearch.cpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#include "SequentialSearch.hpp"

void sequenceSearch::processEx() {
    // 정렬되지 않은 데이터를 가정
    int arr[]= { 8, 1, 1, 3, 2, 5, 1, 2, 1, 1 };
    int size= sizeof(arr) / sizeof(arr[0]);
    
    // 복잡한 알고리즘이나 자료구조를 개발할 때는
    // 실수할 가능성이 적은 단순한 방법을 기준으로 삼는다.
    
    cout << "Count 9= " << Count(arr, n, 9) << endl;
}
