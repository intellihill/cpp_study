#include <iostream>

using namespace std;

void doSomething(int y) {
    cout << "In func " << y << " " << &y << endl;
}

int main() {
    doSomething(5);

    int x= 6;

    cout << "In main " << x << " " << &x << endl;

    /**
     * x변수의 값이 인자로 들어가는 것이다.
     * x 변수가 들어가는 것이 아님.
     */
    doSomething(x);
    doSomething(x+1);

    return 0;
}