#include <iostream>
#include "Resource.hpp"
#include "AutoPtr.hpp"

using namespace std;

// RAII: resource acquisition is initialization

void doSomething() {

    try {
        // Resource *res= new Resource; // dull pointer
        AutoPtr<Resource> res = new Resource; // smart pointer

        if (true) {
            throw -1; // exception
        }
        // delete res;
    } catch(...) {

    }
}

void doSomething1() {
    Resource *res= new Resource;

    // work with res
    if (true) {
        delete res;
        return; // early return
    }

    // new한곳에서 delete를 해야한다 RAII
    delete res;

    return;
}

int main() {
    doSomething();
    // {
    //     AutoPtr<Resource> res1(new Resource);
    //     AutoPtr<Resource> res2;

    //     cout << std::boolalpha;

    //     cout << res1.m_ptr << endl;
    //     cout << res2.m_ptr << endl;

    //     res2= res1;

    //     cout << res1.m_ptr << endl;
    //     cout << res2.m_ptr << endl;
    // }

    return 0;
}
