#include <iostream>
#include <string>

using namespace std;

struct Person {
    double height;
    float weight;
    int age;
    string name;

    void print() {

        cout << height << " " << weight << " " << age << " " << name;
        cout << endl;
    }
};



int main() {
    Person me {2.0, 100.0, 20, "Jack Jack"};
    me.print();

    return 0;
}