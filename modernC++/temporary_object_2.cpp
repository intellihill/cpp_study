#include <iostream>
#include <string>

/**
 * const 참조는 임시 객체를 바인딩할 수 있으며, 이 경우 객체의 생명주기는 참조가 존재하는 
 * 스코프까지 연장된다.
 */
void printString(const std::string& str) {
    std::cout << str << std::endl;
}

int main() {
    printString(std::string("Hello")); // 임시 std::string 객체

    return 0;
}