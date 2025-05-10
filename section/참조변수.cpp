#include <iostream>

using namespace std;

void doSomething(int &n) {
    n = 10;
    cout << "In dosomething " << n << endl;
    cout << &n << endl;
}

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};



int main() {
    int value = 5;

    int *ptr = nullptr;
    ptr = &value;

    // 참조변수는 반드시 초기화가 되어야한다.
    int &ref = value;

    cout << ref << endl;
    ref = 10; // *ptr = 10;
    cout << value << " " << ref << endl;

    cout << &value << " " << &ref << endl;
    cout << ptr << endl;
    cout << &ptr << endl;

    int n = 5;
    cout << &n << endl;
    doSomething(n);
    cout << n << endl;

    Other ot;
    
    int &v1 = ot.st.v1;
    v1 = 1;

    return 0;
}