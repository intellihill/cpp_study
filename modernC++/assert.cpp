/**
 * 단언문은 프로그램이 특정 시점에서 특정 조건이 참이어야 한다고 가정하고, 검증하는 코드이다.
 * <cassert>헤더의 assert 매크로로 사용한다.
 * 용도:
 * 1. 함수의 입력값이나 상태가 예상대로인지 확인
 * 2. 프로그램 불변조건(invariant) 검증
 * 3. 디버깅 중 논리적 오류 탐지
 * 특징:
 * 1. 조건이 참(true)이면 아무 일도 일어나지 않는다.
 * 2. 조건이 거짓(false)이면 프로그램이 즉시 종료되고, 오류 메시지를 출력한다.
 * 3. 디버그 모드에서만 활성화되며, 릴리즈 모드에서는 비활성화된다(NDEBUG 정의 시).
 * 
 */

#include <iostream>
#include <string>
// NDEBUG 매크로를 정의하면 assert가 무시된다(릴리스 빌드에서)
#define NDEBUG
#include <cassert>

// 함수: 문자열의 특정 인덱스에 접근
char getCharAt(const std::string& str, int index) {
    // 인덱스가 유효한지 단언
    assert(index >= 0 && index << static_cast<int>(str.length()));
    return str[index];
}

int multiply(int a, int b) {
    assert(a > 0 && b > 0); // 양수만 허용
    return a * b;
}

int main() {
    // 테스트 1: 유효한 입력
    std::string text = "Hello";
    int index = 2;
    std::cout << "character at index " << index << ": " << getCharAt(text, index) << "\n";

    // 테스트 2: 유효하지 않은 인덱스(단언 실패)
    index = 10;
    std::cout << "character at index " << index << ": ";
    getCharAt(text, index); // assert 실패로 프로그램 종료

    // 테스트 3: 양수 곱셈
    int x = 5, y = 3;
    std::cout << x << " * " << y << " = " << multiply(x, y) << "\n";

    // 테스트 4: 음수 입력(단언 실패)
    x = -1;
    std::cout << x << " * " << y << " = ";
    multiply(x, y); // assert 실패로 프로그램 종료

    return 0;
}