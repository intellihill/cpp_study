#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {

    // const char my_strs [] = "Hello, World";

    // const string my_hello = "Hello, World";

    // cout << my_hello << endl;
    cout << "Your age ? : ";
    int age;
    cin >> age;
    // std::getline(std::cin, age);
    // std::cin.ignore(32767, '\n');
    std::cin.ignore(std:numeric_limits<std::streamsize>::max());

    cout << "Your name ? : ";
    string name;
    // cin >> name;
    std::getline(std::cin, name);



    cout << name << " " << age << endl;

    return 0;
}