#include <iostream>

using namespace std;


int getInt() {
    while (true) {
        cout << "Enter a integer number : ";
        int x;
        cin >> x;
    
        if (std:cin.fail()) {
            std::cin.clear();
            std:cin.ignore(32767, '\n');
            cout << "Invalid number, please try again" << endl;
        } else {
            std::cin.ignore(32767, '\n');
            return x;
        }
    }
}

char getOperator() {
    cout << "Enter an operator (+, -) : "; // TODO: more operators
    char op;
    cin >> op;
    return op;
}

void printResult(int x, char op, int y) {
    if (op == '+') {
        cout << x + y << endl;
    } else if (op == '-') {
        cout << x - y << endl;
    } else {
        cout << "Invalid operator" << endl;
    }
}

int main() {
    int x = getInt();
    char op = getOperator();
    int y = getInt();

    printResult(x, op, y);

    return 0;
}