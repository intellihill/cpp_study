/**
 * 객체 x, y, w, v, u
 * x= y;
 * u= v= w= x;
 * 위와 같이 객체를 이미 생성된 다른 객체에 복사하게 하려면
 * 배정 연산자(assignment operator)를 제공해야 한다.
 *  complex& operator=(const complex& src) {
 *      r= src.r; i= src.i;
 *      return *this;
 *  }
 * 여기서 this는 객체 자신을 가리키는 포인터이다.
 */
#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;
public:
    MyString(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }
    ~MyString() {
        delete[] data;
    }
    // 사용자 정의 할당 연산자
    MyString& operator=(const MyString& other) {
        if (this != &other) { // 자기 자신에 할당 방지
            delete[] data; // 기존 메모리 해제
            data = new char[strlen(other.data) + 1]; // 새 메모리 할당
            strcpy(data, other.data); // 깊은 복사
        }
        return *this; // 객체 자신 반환
    }
    void print() const {
        std::cout << data << std::endl;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");
    s1 = s2;
    s1.print();
    s2.print();
    return 0;
}