#include <iostream>

class Base {
public:
    int base_value= 10;
    virtual ~Base()= default;
};

class Derived: public Base {
public:
    int derived_value= 20;
};

int main() {
    // 1. Derived 객체 생성
    Derived d;
    d.base_value= 100;
    d.derived_value= 200;

    // 2. Base& 참조로 업캐스팅(암시적, 안전함)
    Base& base_ref= d;

    std::cout << "base_ref를 통해 접근: " << base_ref.base_value << std::endl;
    // std::cout << base_ref.derived_value; // 컴파일 에러: Base에는 이 멤버가 없음

    // 3. static_cast로 다운캐스팅 (Base& -> Derived&)
    Derived& derived_ref= static_cast<Derived&>(base_ref);

    std::cout << "derived_ref를 통해 접근:" << std::endl;
    std::cout << " base_value: " << derived_ref.base_value << std::endl;
    std::cout << " derived_value: " << derived_ref.derived_value << std::endl;

    // 4. 값 변경 테스트
    derived_ref.derived_value= 999;
    std::cout << "원본 d.derived_value: " << d.derived_value << std::endl; // 999출력

    return 0;
}