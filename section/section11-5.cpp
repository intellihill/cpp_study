#include <iostream>
using namespace std;

class Base {
public:
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
};

class Derived : protected Base {
public:
    Derived() {
        Base::m_protected; // this -> m_public, m_public
        Base::m_public;
    }
};

class GrandChild: public Derived {
public:
    GrandChild() {
        Derived::m_public;
    }
}

int main() {
    Base base;

    Derived derived;

    return 0;
}