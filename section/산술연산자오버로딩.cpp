#include <iostream>
using namespace std;

class Cents {
private:
    int m_cents;

public:
    Cents(int cents = 0) {
        m_cents= cents;
    }
    int getCents() const {
        return m_cents;
    }
    int& getCents() { // 참조값을 반환하므로 그 참조값에 값을 넣을 수
        return m_cents;
    }

    // 방법 3-1. 클래스 안에서 friend 함수로 오버로딩
    // friend Cents operator + (const Cents &c1, const Cents &c2) {
    //     return Cents(c1.getCents() + c2.getCents());
    // }

    // member function overloading
    // only possible to member function overloading: =, [], (), ->
    Cents operator + (const Cents &c2) {
        return Cents(this->m_cents + c2.m_cents);
    }
};

// 방법 1.
// void add(const Cents &c1, const Cents &c2, Cents &c_out) {
//     c_out.getCents() = c1.getCents() + c2.getCents();
// }

// 방법 2.
// Cents add(const Cents &c1, const Cents &c2) {
//    return Cents(c1.getCents() + c2.getCents());
// }

// 방법 3. 
    // Cents operator + (const Cents &c1, const Cents &c2) {
    //     return Cents(c1.getCents() + c2.getCents());
    // }


int main() {

    Cents cents1(6);
    Cents cents2(8);

    // 방법 1.
    // Cents sum;
    // add(cents1, cents2, sum);

    // 방법 2.
    // add(cents1, cents2);
    // cout << add(cents1, cents2).getCents() << endl;

    // 방법 3.
    // cout << (cents1 + cents2).getCents() << endl;

    cout << (cents1 + cents2).getCents() << endl;

    return 0;
}

