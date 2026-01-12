/**
 * *는 사용 위치에 따라 의미가 달라진다.
 * 1. 선언문에서 *는 포인터 타입.
 * int* ptr; // ptr은 int의 주소를 저장하는 변수이다.
 * 2. 표현식에서 *는 역참조 연산자.
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int num= 3;
    int* address= &num;

    cout << "num: " << num << ", sizeof: " << sizeof(num) << ", typeid: " << typeid(num).name() << endl;
    cout << "address: " << address << ", sizeof: " << sizeof(address) << ", typeid: " << typeid(address).name() << endl;
}