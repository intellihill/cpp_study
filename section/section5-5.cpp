#include <iostream>

using namespace std;

int main() {

    static int count = 0;

    while (count < 10) {
        cout << count << endl;
        
        ++count;

        if (count == 10) break;
    }

    return 0;
}