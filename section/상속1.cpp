#include <iostream>
using namespace std;

class Mother {
private:
    int m_i;

public:
    // Mother(const int & i_in): m_i(m_in) {
    //     std::cout << "Mother constructor" << std::endl;
    // }

    void setValue(const int& i_in) {
        m_i= i_in;
    }
    int getValue() {
        return m_i;
    }
};

class Child : public Mother {

};

int main() {
    Mother mother;
    mother.setValue(1024);
    cout << mother.getValue() << endl;

    Child child;
    child.setValue(125);

    cout << child.getValue() << endl;

    return 0;
}