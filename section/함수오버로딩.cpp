#include <iostream>
#include <string>

using namespace std;

typedef int my_inf;

/**
 * 들어오는 매겨변수는 다른데 수행하는 기능이 같으면 함수 오버로딩 사용
 * 매개변수가 다르면 함수이름이 같아도 다른 함수로 취급을 한다.
 */
// int addInt(int x, int y) {
//     return x + y;
// }

// double addDouble(double x, double y) {
//     return x + y;
// }
int add(int x, int y) {
    return x + y;
}

double add(double x, double y) {
    return x + y;
}

int main() {

    add (1, 2);
    add (3.0, 4.0);

    return 0;
}