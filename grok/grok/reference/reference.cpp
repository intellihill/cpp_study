//
//  reference.cpp
//  grok
//
//  Created by 정대로 on 7/10/25.
//

#include "reference.hpp"
#include <iostream>

void reference::process(){
    int x= 10;
    int* ptr= &x; // 포인터
    int& ref= x; // 참조자
    
    std::cout << "포인터를 통한 역참조: " << *ptr << std::endl; // 출력: 10
    std::cout << "참조자를 통한 값: " << ref << std::endl; // 출력: 10
    
    *ptr= 30; // 포인터로 값 변경
    std::cout << "x의 값: " << x << std::endl; // 출력: 30
    ref= 40; // 참조자로 값 변경
    std::cout << "x의 값: " << x << std::endl; // 출력: 40
    
    /**
     역참조의 주요 용도
     1. 동적 메모리 할당: 동적 메모리(new로 할당된 메모리)에 접근할 때 역참조를 사용한다.
     2. 함수 인자로 포인터 사용: 함수에서 포인터를 통해 원본 데이터를 수정할 때 역참조를 사용한다.
     3. 객체 멤버 접근: 포인터가 객체를 가리킬 때, 역참조와 멤버 접근 연산자(->)를 사용한다.
     
     주의사항
     - nullptr 역참조 금지: 포인터가 nullptr이나 유효하지 않은 주소를 가리킬 때 역참조하면
       런타임 에러(세그멘테이션 폴트)가 발생할 수 있습니다.
     - 유효한 메모리 확인: 역참조 전에 포인터가 유효한 주소를 가리키는지
     - 메모리 해제: 동적 할당 메모리를 역참조한 후에는 delete로 메모리를 해제해야 메모리 누수가 발생하지 않는다.
     
     실수 예방 팁
     - 포인터를 사용할 때는 항상 초기화: ( int* ptr = nullptr )
     - 참조자를 사용하면 역참조 실수를 줄일 수 있다.
     - 스마트 포인터( std::unique_ptr, std::shared_ptr )를 사용하면 메모리 관리와 역참조 오류를 줄이는 데 도움이 된다.
     */
    
    // 1. 동적 메모리 할당
    int* ptr1= new int(50); // 동적 메모리 할당
    std::cout << *ptr1 << std::endl; // 출력: 50
    *ptr1= 100; // 값 변경
    delete ptr1; // 메모리 해제
    
    // 2. 함수 인자로 포인터 사용
    swap(new int(3), new int(4));
    
    // 3. 객체 멤버 접근
    referencePoint* rp= new referencePoint(1, 2);
    std::cout << "rp->x: " << rp->x << std::endl; // (*p).x와 동일하다.
    delete rp;
    
}

void reference::swap(int* a, int* b) {
    int temp= *a;
    *a = *b;
    *b = temp;
    
    std::cout << "*a: " << *a << std::endl;
    std::cout << "*b: " << *b << std::endl;
}
