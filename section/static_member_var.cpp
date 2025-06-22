#include <iostream>
using namespace std;

class Something {
public:
    int m_value= 1;
    static int s_value;
};

int Something::s_value= 1;

int generateID() {
    static int s_id= 0;
    return ++s_id;
}

int main() {
    cout << generateID() << endl;
    cout << generateID() << endl;
    cout << generateID() << endl;

    Something st1;
    Something st2;

    st1.m_value= 2;
    st1.s_value= 2;

    cout << &st1.m_value << " " << st1.m_value << endl;
    cout << &st2.m_value << " " << st2.m_value << endl;

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;
    return 0;
}