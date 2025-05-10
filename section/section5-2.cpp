#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    if (x > 10)
        cout << x << " is greater than 10" << endl;
    else 
        cout << x << " not is greater than 10" << endl;

    if (1)
        x = 5;
    else
        x = 6;
    cout << x << endl;

    return 0;
}