#include <iostream>
#include <typeinfo>

using namespace std;

int* doSomething(int* ptr_a) {
    return nullptr;
}

struct Something {
    int a, b, c, d;
};

int main() {
    int x = 5;
    // int *ptr_x = &x;

    cout << x << endl;
    // 메모리 주소를 담는 변수를 pointer라고 부른다.
    cout << &x << endl; // address of operator: &
    cout << reinterpret_cast<uintptr_t>(&x) << endl;


    // de-reference operator (*)
    // reference: 

    cout << *&x << endl; // 해당 값을 가리키는 주소를 뽑고 실제로 그 값을 가지고옴 *&x = x


    int *ptr_x = &x;
    cout << ptr_x << endl;
    cout << *ptr_x << endl;
    // typedef int* pint;
    // pint ptr_x = &x, ptr_y = &x;
    // cout << ptr_x << endl;

    cout << typeid(ptr_x).name() << endl;

    Something ss;
    Something *ptr_s;

    cout << sizeof(ss) << endl;
    cout << sizeof(ptr_s) << endl;

    return 0;
}