#include "calc.h"
using namespace std;

calc::calc(int init_value) : m_value(init_value) {}

calc& calc::add(int value) {
    m_value += value;
    return *this;
}

calc& calc::sub(int value) {
    m_value -= value;
    return *this;
}

calc& calc::mult(int value) {
    m_value *= value;
    return *this;
}

void calc::print() {
    cout << m_value << endl;
}