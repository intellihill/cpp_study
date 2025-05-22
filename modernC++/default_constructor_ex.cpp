#include <iostream>
#include <vector>
#include <cassert>

class Simple {
public:
    Simple() { // 명시적 기본 생성자
        std::cout << "Simple default constructor\n";
    }
private:
    int value_= 0; // 클래스 내 초기화
};

class WithParams {
public:
    WithParams(int a= 0, double b= 0.0) : a_(a), b_(b) { // 기본값 제공
        std::cout << "WithParams constructor: " << a_ << ", " << b_ << "\n";
    }
private:
    int a_;
    double b_;
};

class AutoDefault {
public:
    AutoDefault() = default; // 컴파일러에서 제공하는 명시적 기본 생성자
    int getValue() const {
        return value_;
    }
private:
    int value_= 10;
};

class NoDefault {
public:
    NoDefault(int x) : value_(x) { // 기본 생성자 없음
        assert(x >= 0);
    }
private:
    int value_;
};

int main() {
    // 명시적 기본 생성자
    Simple s1;

    // 기본값 제공 생성자
    WithParams wp1; // a= 0, b= 0.0
    WithParams wp2(5); // a= 5, b= 0.0

    // 컴파일러 제공 기본 생성자
    AutoDefault ad;
    std::cout << "AutoDefault value: " << ad.getValue() << "\n";

    // 컨테이너 사용
    std::vector<Simple> vec(3); // Simple 기본 생성자 3번 호출

    // NoDefault는 기본 생성자 없음
    // std::vector<NoDefault> vec2(3); //오류
    std::vector<NoDefault> vec3(3, NoDefault(0)); // OK: 명시적 초기화

    // 실행: g++ -std=c++17 -g -O0 -Wall -o test test.cpp
    return 0;
}