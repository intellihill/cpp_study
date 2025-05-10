// 전역 변수 Gloval Variable, 정적 변수 Static Variable, 내부 연결Internal Linkage, 외부 연결 External Linkage

#include <iostream>

using namespace std;

// forward declaration
// extern 은 생략가능
extern void doSomethingTest();

int value = 123;

// static variable
// 변수 a가 os로부터 받은 메모리
// 영역안에 변수가 선언될 떄 같은 메모리를 쓰고 초기화를 한번 밖에 안한다. 
// static은 초기화가 무조건 되어있어야한다.
// 메모리관점에서 블록안에서 반복되어서 할당되는 메모리를 정적으로 재사용한다.
void doSomething() {
    static int a = 1;

    ++a;
    ++value;

    cout << a << endl;
    cout << value << endl;
}

int main() {
    cout << value << endl;
    // namehiding or shadowing
    int value = 1;

    cout << ::value << endl;
    cout << value << endl;

    doSomething();
    doSomething();
    doSomething();
    doSomething();

    doSomethingTest();
    cout << externVal << endl;
    return 0;
}