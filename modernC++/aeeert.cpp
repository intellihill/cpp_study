/**
 * 
 */

#include <cassert>

int main() {
    int x = 5;
    assert(x > 0); // 조건 참, 아무 일 없음
    assert(x == 10); // 조건 거짓, 프로그램 종료

    return 0;
}