#include <iostream>


namespace work1::work11
{
    int a = 1;
    // namespace work11 {

    // }
    void doSomething() {
        a += 3;
    }
}

namespace work2
{
    int a = 1;
    void doSomething() {
        a += 5;
    }
}
int main() {
    using namespace std;

    // int apple = 5;
    // cout << apple << endl;
    // {
    //     apple = 1;
    //     cout << apple << endl;
    // }

    // cout << apple << endl;

    work1::work11::doSomething();
    return 0;
}