#include <iostream>

using namespace std;

int main() {
    int i= 5;
    float f= 3.0;
    char c= 'a';

    void *ptr = nullptr;

    ptr= &i;
    ptr= &f;
    ptr= &c;

    int *ptr_i= &i;

    // void 는 몇바이트인지 알 수 없어서 +1을 할 수 없음
    // cout << ptr + 1 << endl;

    cout << &c << " " << ptr << endl;

    return 0;
}