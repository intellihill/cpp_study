#include <iostream>
using namespace std;

class Base {
private:
    int m_i;
public:
    Base(int value): m_i(value){}

    void print() {
        cout << "I'm base " << endl;
    }
    void print1() {
        cout << "I'm base1 " << endl;
    }
}


class Derived : public Base {
private:
    double m_d;
public:
    Derived(int value): Base(value) {}

    // base의 private를 현재 속한 접근지정자 public으로 바꿔줌
    using Base::m_i;

private:
    using Base::print; // do not add ()
    void print() = delete;

}

int main() {
    Derived derived(5);
    derived.m_i= 1024;

    return 0;
}