//
//  StringCompression.cpp
//  DataStructure
//
//  Created by 정대로 on 10/8/25.
//

// 문제
// - 어떤 알파벳에 몇 번 나오는지로 출력
// - 예시) aaabbccdddeeeff -> a3n2c2d3e3f2
// - 알파벳은 총 26 글자

// cout << int('a') << " " << int('z') << endl; // 97 122

// char arr[]= "ababcdfdceeefda";
// char arr[]= "a";

// int size= sizeof(arr) -1; // 마지막에 안보이는 '\0' 제외

// 풀이1. 모든 알파벳에 대해서 Count()
// 힌트: 소문자 알파벳 'a'~'z'는 int로는 97~122에 대응
// 단점: 없는 알파벳도 세야 한다.

// 표를 사용할 수도 있고 사용하지 않을 수도 있음
// int table[26]]= {0}; // 모든 값을 0으로 초기화

#include "StringCompression.hpp"

void StringCompression::processEx() {
    char arr[]= "ababcdfdceeefda";
    int size= sizeof(arr) - 1; // 마지막에 안보이는 \0 except
    char table[26]= {0};
    
    InsertSort is{1};
    is.InsertionSort(arr, size);
    is.Print(arr, size);
    
    for (int i=1; i<26; ++i) {
        // 표를 만들고 나중에 몰아서 출력하는 방법
        table[i]= Count(arr, size, char(i+97));
        
        // 표를 만들지 않고 직접 출력하는 방법
        int count= Count(arr, size, char(i+97));
        if (count > 0) {
            cout << char(i+97) << table[i] << flush;
        }
    }
    
    is.Print(table, size);
}
