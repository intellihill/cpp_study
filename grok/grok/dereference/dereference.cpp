//
//  dereference.cpp
//  grok
//
//  Created by 정대로 on 7/25/25.
//

#include "dereference.hpp"
#include <iostream>
using namespace std;

// 기본 예제
void dereference::process1() {
    int a= 10;
    int* ptr= &a;
    
    cout << "a의 값: " << a << endl;
    cout << "ptr의 주소 값: " << ptr << endl;
    cout << "ptr이 가리키는 값: " << *ptr << endl;
    
    *ptr= 20;
    cout << "변경 후 a의 값: " << a << endl;
}

/**
  역참조 연산자의 특징
 
 `*`연산자: 포인터가 가리키는 값을 반환하거나 수정한다.
  포인터가 유효해야함:
  역참조는 반드시 유효한 메모리주소를 가리키는 포인터에서만 사용해야한다.
  유효하지 않은 포인터(예; nullptr 또는 초기화되지 않은 포인터)를 역참조하면 세그먼테이션 폴트(segmentation fault)같은 오류가 발생한다.
 `**`다중포인터를 사용하여 역참조를 여러번 수행가능하다.
 */
void dereference::process2() {
    int a= 10;
    int* ptr1= &a;      // a를 가리키는 포인터
    int** ptr2= &ptr1;  // ptr1을 가리키는 포인터의 포인터
    
    cout << "a의 값: " << a << endl;
    cout << "ptr1이 가리키는 값: " << *ptr1 << endl;
    cout << "ptr2가 가리키는 값(이중 역참조): " << **ptr2 << endl;
    
    **ptr2= 30;
    cout << "변경 후 a의 값: " << a << endl;
}

/**
 역참조(dereference)와 참조(reference)의 차이
 c++에서 참조(&)와 역참조(*)는 서로 다른 개념이다.
 - 참조: 변수의 별칭(alias)을 만드는 것으로, 변수 자체를 다른 이름으로 접근한다.
   참조는 포인터와 달리 메모리 주소를 직접 다루지 않으며, 역참조 연산자가 필요 없다.
 - 역참조: 포인터가 가리키는 메모리 위치의 값을 다루는 작업이다.
 */
void dereference::process3() {
    int a= 10;
    int& ref= a;    // 참조: a의 별칭
    int* ptr= &a;   // 포인터: a의 주소를 저장
    
    ref= 20;        // 참조를 통해 a의 값을 변경
    cout << "a (참조 사용 후): " << a << endl;
    
    *ptr= 30;       // 역참조를 통해 a의 값을 변경
    cout << "a (역참조 사용 후): " << a << endl;
}
