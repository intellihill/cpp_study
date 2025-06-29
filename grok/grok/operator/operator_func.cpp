//
//  operator_func.cpp
//  grok
//
//  Created by 정대로 on 6/28/25.
//
#include <iostream>
#include "operator_func.hpp"

int& operator_func::operator [] (int value) {
    return operator_func::m_value[m_data];
}

// 멤버 함수로 operator+ 정의
/*
 멤버 함수로 operator+를 정의할 경우, 연산자는 클래스 내부에 정의되며, 왼쪽 피연산자는
 암묵적으로 *this 객체(즉, 연산자를 호출하는 객체 자체)로 전달된다.
 
 동작 방식:
 a+b와 같은 expression인경우
 a는 *this(즉, 연산자를 호출하는 객체)
 b는 매개변수 rhs로 전달된다.
 
 a+b -> a.operator+(b)
 */
operator_func operator_func::operator+(const operator_func& rhs) {
    std::cout << "this of operator_func: " << m_value << std::endl;
    std::cout << "rhs of operator_func: " << rhs.m_value << std::endl;
    return operator_func(m_value+rhs.m_value);
}

// 비멤버 함수로 operator+ 정의 (friend 키워드와 클래스 스코프 제거)
/*
 비멤버 변수로 operator+를 정의할 경우, 두 피연산자 모두 함수의 매개변수로 전달된다.
 이 방식은 보통 프렌드 함수(friend function)나 일반 전역 함수로 구현된다.
 
 a+b -> operator+(a+b)
 */
operator_func operator+(const operator_func& lhs, const operator_func& rhs) {
    
    return operator_func(rhs.m_value+lhs.m_value);
}

int operator_func::getValue() {
    return m_value;
}
