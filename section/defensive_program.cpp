#include <iostream>
#include <string>
using namespace std;

int main() {
    // semantic errors: 문맥(의미) 오류

    int x;
    cin >> x;
    if(x >= 5) {
        cout << "x is greater than 5" << endl;
    }

    // violated assumption: 가정을 위반
    string hello = "Hello, my name is Jack jack";
    cout << "Input from 0 to " << hello.size() -1 << endl;

    while(true) {
        int ix;
        cin >> ix;
        if(ix >= 0 && ix <= hello.size() -1) {
            cout << hello[ix] << endl;
            break;
        } else
            cout << "Please try again" << endl;
        }
    return 0;
}