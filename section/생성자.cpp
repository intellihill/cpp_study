#include <iostream>

using namespace std;



class Second {
public:
    Second() {
        cout << "Class Second constructor()" << endl;
    }
};

class First {
    Second sec;
public:
    First() {
        cout << "Class First constructor()" << endl;
    }
};

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(const int& num_input= 1, const int& den_input= 1) {
        m_numerator= num_input;
        m_denominator= den_input;
    }

    void print() {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main() {
    Fraction frac; 
    frac.print();

    Fraction frac1(3);
    frac1.print();

    First fir;

    return 0;
}