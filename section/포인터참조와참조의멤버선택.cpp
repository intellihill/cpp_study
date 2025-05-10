#include <iostream>

using namespace std;

struct Person
{
    int age;
    double weight;
};


int main() {
    Person person;

    person.age = 5;
    person.weight = 30;

    // reference 방식
    Person &ref = person;
    ref.age = 15;
    ref.weight = 40;

    // pointer 방식
    Person *ptr = &person;
    ptr->age = 30;
    // dereference 
    (*ptr).age = 20;

    Person &ref2 = * ptr;
    ref2.age = 45;

    cout << &person << endl;
    cout << &ref2 << endl;

    return 0;
}