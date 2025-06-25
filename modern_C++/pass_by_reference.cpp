#include <iostream>

using namespace std;
/**
 * 매개변수를 수정했을 때 인수가 실제로 수정되게 하려면 참조 전달(pass by reference)을 사용한다.
 * increment(i + 9)와 같은 임시 객체는 참조가 불가능하다.
 * 벡터나 행렬처럼 덩치 큰 자료 구조는 거의 항상 참조로 전달된다. (값비싼 복사 연산을 피할 수 있다.)
 * double two_norm(const vector& v) {...}
 */

void increment(int& x, int y= 2) {
    x++;
    cout << y << '\n';
}

int main() {
    int i= 4;
    
    increment(i);
    cout << "i is " << i << '\n';

    return 0;
}