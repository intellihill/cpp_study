#include "Student.h"
#include "Teacher.h"

int main() {
    Student std("jack jack");
    std.setName("Jack Jack 2");
    std.getName();
    std::cout << std.getName() << std::endl;

    Teacher teacher1("Dr.H");
    teacher1.setName("Kr.K");

    std::cout << teacher1.getName() << std::endl;

    std::cout << std << std::endl;
    std::cout << teacher1 << std::endl;

    return 0;
}