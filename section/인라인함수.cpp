#include <iostream>

using namespace std;

/**
 * 인라인 키워드는 권장하는 느낌임
 * 컴파일러가 인라인이 좋을거같으면 적용해준다.
 * 인라인이 적용되면 코드 프로그램이 커진다.
 */
inline int min(int x, int y) {
    return x > y ? y : x;
}

int main() {

    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;

    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (3 > 2 ? 2 : 3) << endl;

    return 0;
}