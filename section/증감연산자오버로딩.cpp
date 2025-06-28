#include <iostream>
using namespace std;

class Digit {
private:
    int m_digit;
public:
    Digit(int digit=0) : m_digit(digit) {}

    // prefix
    Digit & operator ++ () {
        ++m_digit;
        return *this;
    }

    // postfix인경우 파라미터에 아무거나 들어감 (그냥 외워야함)
    Digit operator ++ (int) {
        // postfix는 리턴을받고 값을 올려줘야함
        Digit temp(m_digit);
        ++(*this);
        return temp;
    }

    friend ostream & operator << (ostream &out, const Digit &d) {
        out << d.m_digit;
        return out;
    }
};

int main() {
    Digit d(5);
    cout << ++d << endl;

    cout << d++ << endl;
    cout << d << endl;
    return 0;
}