#include <iostream>

using namespace std;

int main() {
    int x = 19;
    while(x != 1) {
        cout << x << '\n';
        if (x % 2 == 1) {
            x= 3 * x + 1;   // 홀수
        } else {
            x= x / 2;   // 짝수
        }
    }

    return 0;
}