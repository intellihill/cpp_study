//
//  SequentialSearch.cpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#include "SequentialSearch.hpp"
#include "../Utils/Utils.hpp"

void SequenceSearch::processEx() {
    Utils util;
    
    // 정렬되지 않은 데이터를 가정
    int arr[]= { 8, 1, 1, 3, 2, 5, 1, 2, 1, 1 };
    int size= sizeof(arr) / sizeof(arr[0]);
    
    // 복잡한 알고리즘이나 자료구조를 개발할 때는
    // 실수할 가능성이 적은 단순한 방법을 기준으로 삼는다.
    
    cout << "Count 9= " << util.Count(arr, size, 9) << endl;
    cout << "Count 2= " << util.Count(arr, size, 2) << endl;
    cout << "Count 8= " << util.Count(arr, size, 8) << endl;
    cout << "Count 1= " << util.Count(arr, size, 1) << endl;
}
