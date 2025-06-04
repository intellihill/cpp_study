#include <iostream>
#include <string>

/**
 * C++표준에 따르면 임시 객체는 **그것이 생성된 전체 표현식(full expression)**이 평가된 후 소멸된다.
 * (특정상황 예외. 바인딩되는 경우 등...)
 */
class MyClass {
public: 
    MyClass() { std::cout << "Constructor called" << std::endl; }
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main() {
    MyClass();
    std::cout << "After temprary object" << std::endl;

    return 0;
}