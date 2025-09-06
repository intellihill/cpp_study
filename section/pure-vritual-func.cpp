#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string m_name;

public:
    Animal(std::string name) : m_name(name) {}

public:
    string getName() {
        return m_name;
    }

    // pure virtual function
    virtual void speak() const = 0;

    // virtual void speak() const {
    //     cout << m_name << " ??? " << endl;
    // }
};

// the body of the pure virtual function
// void Animal::speak() const {
//     cout << m_name << " ??? " << endl;
// }

class Cat : public Animal {
public:
    Cat(string name) : Animal(name) {}

    void speak() const {
        cout << m_name << " Meow " << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}

    void speak() const {
        cout << m_name << " Woof " << endl;
    }
};

class Cow : public Animal {
public:
    Cow(string name) : Animal(name) {}
};


int main() {
    // impossible
    // Animal ani("Hi");

    // Cow is an abstract class. unimplemented pure virtual method 'spaek' in 'Cow'
    // Cow cow("hello");
    Cat cat("meow");
    cat.speak();

    return 0;
}