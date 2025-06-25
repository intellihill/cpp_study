#include <iostream>

class Student {
public:
    static int totalStudents; // 정적 멤버: 모든 객체 공유
    std::string name;
    
    Student(const std::string &name) : name(name) {
        totalStudents++; // 객체 생성 시 증가
    }
    
    ~Student() {
        totalStudents--; // 객체 소멸 시 감소
    }
};

int Student::totalStudents = 0;

int main() {
    std::cout << "Initial: " << Student::totalStudents << "\n";
    
    Student s1("Alice");
    std::cout << "After Alice: " << Student::totalStudents << "\n";
    
    Student s2("Bob");
    std::cout << "After Bob: " << Student::totalStudents << "\n";
    
    return 0;
}
