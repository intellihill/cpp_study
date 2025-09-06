#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base {
public:
    int m_i= 0;

    virtual void print() {
        cout << "I'm Base" << endl;
    }
};

class Derived : public Base {
public:
    int m_j= 1;

    virtual void print() override {
        cout << "I'm derived" << endl;
    }
};

void doSomething(Base & b) {
    b.print();
}


int main() {
    // Derived d;
    // Base &b= d;
    // b.print();

    Base b;
    Derived d;
    // std::vector<Base> my_vector; // impossible
    // std::vector<Base*> my_vector;
    std::vector<std::reference_wrapper<Base>> my_vector; // do like <Base&>
    
    my_vector.push_back(b);
    my_vector.push_back(d); // derived를 넣지만 base로 slicing됨


    for (auto & ele : my_vector) {
        // ele.print();
        // ele->print();
        ele.get().print();
    }


    return 0;
}