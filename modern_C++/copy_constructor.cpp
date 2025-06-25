#include <iostream>
#include <cstring>
#include <cassert>

class String {
public:
    // 일반 생성자
    String(const char* s) {
        assert(s != nullptr);
        size_= std::strlen(s);
        data_= new char[size_ + 1];
        std::strcpy(data_, s);
        std::cout << "Constructor: " << data_ << "\n";
    }

    // 복사 생성자
    String(const String& other) : size_(other.size_) {
        data_= new char[size_ + 1]; // 깊은 복사
        std::strcpy(data_, other.data_);
        std::cout << "Copy constructor: " << data_ << "\n";
    }

    // 소멸자
    ~String() {
        delete[] data_;
        std::cout << "Destructor: " << data_ << "\n";
    }

    const char* getData() const { return data_; }

private:
    char* data_;
    size_t size_;
};

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {
        std::cout << "Constructor: " << value << "\n";
    }
    // 컴파일러가 기본 복사 생성자 제공
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // 기본 복사 생성자 호출
    std::cout << "obj2.value: " << obj2.value << "\n";

    // 복사 생성자
    String s1("hello");
    String s2= s1; // 복사 생성자 호출
    std::cout << "s2: " << s2.getData() << "\n";

    return 0;
}