#include <iostream>

using namespace std;

class test {
    private: 
        int int_a = 10;
};

int main() {
    test cp;
    cout << cp.int_a << endl;

    return 0;
}