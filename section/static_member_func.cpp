#include <iostream>

using namespace std;

class Something {

    // static 멤버 변수는 초기화가 불가능하므로 밑에 처럼 가능하게 할 수 있음
    class _init {
    public:
        _init() {
            s_value= 1234;
        }
    };

private:
    static int s_value;
    int m_value;

    static _init s_initializer;

public:
    // static 데이타는 this를 못 쓴다.
     static int getValue() {
        return s_value;
    }
    int temp() {
        return this->s_value;
    }


};

int Something::s_value= 1024;
Something::_init Something::s_initializer;

int main() {
    cout << Something::getValue() << endl;

    Something st1, st2;
    cout << st1.getValue() << endl;

    // function pointer
    // member function 의 포인터를 가지고오기
    // int (Something::*fptr1)()= &s1.temp; // 불가능
    int (Something::*fptr1)()= &Something::temp;

    cout << (st2.*fptr1)() << endl;

    int (*fptr2)()= &Something::getValue;

    cout << fptr2() << endl;


    return 0;
}