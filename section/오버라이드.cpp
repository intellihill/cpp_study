#include <iostream>
using namespace std;

class A {
public:
    virtual void print() {
        cout << "A" << endl;
    }
};

class B : public A {
public:
    void print() override {
        cout << "B" << endl;
    }
};

class C : public B {
public:
    virtual void print() final { // final: 이 밑의 상속에는 override를 막아버린다.
        cout << "C" << endl;
    }
}



int main() {

    A a;
    B b;

    A &ref= b;
    ref.print(1);
    return 0;
}