#include <iostream>

using namespace std;

void increment(int x) {
    x++;
}

int main() {
    int i= 4;
    
    // 값 전달(pass by value) or 값 호출(call by value)
    increment(i);
    // i가 증가하지는 않음
    // 인수(argument)로 넘겨진 매개변수(parameter)가 전달될 떄 argument의 복사본이 만들어진다.
    cout << "i is " << i << '\n';
    return 0;
}