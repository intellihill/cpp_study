//
//  SequentialSearch.cpp
//  DataStructure
//
//  Created by 정대로 on 9/21/25.
//

#include "SequentialSearch.hpp"
#include "../Utils/Utils.hpp"
#include "../Insert/InsertSort.hpp"

//void SequenceSearch::processEx() {
//    Utils util;
//    PrintArray print{0};
//    
//    // 정렬되지 않은 데이터를 가정
//    int arr[]= { 8, 1, 1, 3, 2, 5, 1, 2, 1, 1 };
//    int size= sizeof(arr) / sizeof(arr[0]);
//    
//    // 복잡한 알고리즘이나 자료구조를 개발할 때는
//    // 실수할 가능성이 적은 단순한 방법을 기준으로 삼는다.
//    
//    cout << "Count 9= " << util.Count(arr, size, 9) << endl;
//    cout << "Count 2= " << util.Count(arr, size, 2) << endl;
//    cout << "Count 8= " << util.Count(arr, size, 8) << endl;
//    cout << "Count 1= " << util.Count(arr, size, 1) << endl;
//    cout << endl;
//    
//    cout << "Search 2= " << util.SequentialSearch(arr, size, 2) << endl;
//    cout << "Search 5= " << util.SequentialSearch(arr, size, 5) << endl;
//    cout << "Search 9= " << util.SequentialSearch(arr, size, 9) << endl;
//    
//    InsertSort<int> is{0};
//    is.InsertionSort(arr, size);
//    print.Print(arr, size);
//    
//    cout << "Count 9= " << SortedCount(arr, size, 9) << endl;
//    cout << "Count 2= " << SortedCount(arr, size, 2) << endl;
//    cout << "Count 8= " << SortedCount(arr, size, 8) << endl;
//    cout << "Count 1= " << SortedCount(arr, size, 1) << endl;
//    
//}

// 내가 구현한 SequenctialSearch
int SequenceSearch::MySequentialSearch(int (&arr)[], int n, int target) {
    int index= -1;
    for (int i=0; i<n; ++i) {
        if (arr[i] == target) {
            index= i;
            break;
        }
    }
    return index;
}
// 선생님이 구현한 SequentialSearch
// 배열 arr에 x가 있으면 Index 반환, 없으면 -1 반환
int SequenceSearch::SequentialSearch(int (&arr)[], int n, int target) {
    // Horowitz 교재
    int i;
    for (i=0; i<n && arr[i] != target; i++);
    if (i==n) return -1;
    else return i;
}

int SequenceSearch::SortedCount(int (&arr)[], int size, int target) {
    int i= MySequentialSearch(arr, size, target);
    
    if (i >= 0) {
        return 0;
    } else {
        return 0;
    }
    
    return 0;
}

int SequenceSearch::SortedCountHelper(int *arr, int n, int x, int start) {
    int count= 0;
    for (int i=start; i<n; i++) {
        if (arr[i] == x) {
            count++;
        } else {
            break; //조기 종료
        }
    }
    return count;
}
