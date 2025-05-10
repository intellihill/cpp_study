#include <iostream>
#include <cmath>

using namespace std;


int main() {
    double x;

    tryAgain: // label

    cout << "Non-negative" << endl;

    cin >> x;

    if (x < 0) 
        goto tryAgain;

    cout << sqrt(x) << endl;
    return 0;
}