#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor" << endl;
    }

    ~A() {
        cout << "Destructor" << endl;
    }
    void print() {
        cout << "Hello" << endl;
    }
};

int main() {
    A a;
    a.print();
    // 
    A().print();
    A().print();

    return 0;
}