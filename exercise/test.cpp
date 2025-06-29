#include <iostream>
using namespace std;

class Test {
public:
    Test(int value): t_number(value), t_data(new int[value]) {

        cout << "t_number: " << t_number << endl;

        for (unsigned v=0; v<t_number; ++v) {
            cout << v;
        }
        cout << endl;
    }
    Test(): t_number(0), t_data(0) {
        cout << "default constructor" << endl;
    }
    ~Test() {
        // delete[] t_data;
    }

    // int operator = (int value) {

    //     cout << this->t_number << endl;
    // }

    int& operator [] (int value) {
        cout << "value: " << value << endl;
        cout << "this.t_data: " << this->t_data[value] << endl;
        t_data[value] = value;
        return t_data[value];
    }
private:
    int t_number;
    int* t_data;
};

std::ostream& operator<<(std::ostream& os, const vector& v) {
    cout << "test" << endl;

    return os;
}

int main() {

    Test t1(2);
    cout << "main:" << t1[2] << endl;

    t1[2]= 4;

    cout << t1[1] << endl;


    return 0;
}