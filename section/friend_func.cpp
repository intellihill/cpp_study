#include <iostream>
using namespace std;

// 전방 선언(forward declaration)
class B;


class A {
private:
    int m_value= 1;

    // m_value에 접근하기위해서
    friend void doSomething(A& a, B& b);
};

class B {
private:
    int m_value= 2;

    friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B& b) {
    cout << a.m_value << endl;
    cout << b.m_value << endl;
}

int main() {
    A a;
    B b;
    doSomething(a, b);

    return 0;
}