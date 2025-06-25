/**
 * 기본 생성자: 클래스의 객체를 생성할 때 추가 인자 없이 호출 가능한 생성자.
 * 매개변수가 없는 생성자: ClassName()
 * 모든 매개변수에 기본값이 제공된 생성자: ClassName(Type1= val1, Type2= val2)
 * 용도:
 * 객체를 기본 상태로 초기화
 * 컨테이너(std::vector, std::array)에서 요소를 초기화할 때 필요
 * 클래스 멤버 초기화 또는 상속 시 호출
 * 
 * 개발자가 어떤 생성자도 정의하지 않은 경우, 컴파일러가 자동으로 기본 생성자를 생성
 * 멤버 변수를 초기화하지 않음
 * 클래스 내에 const멤버나 참조 멤버가 있으면 자동 생성 안 됨
 */
#include <iostream>

class MyClass {
public:
    MyClass(int a= 0, double b= 0.0) : a_(a), b_(b) { // 기본 생성자
        /* 초기화 코드 */
        std::cout << "Default constructor called\n"
    }

private:
    int a_;
    double b_;
}

int main() {
    MyClass obj; // a= 0, b= 0.0
    MyClass obj2(5); // a= 5, b= 0.0
    return 0;
}