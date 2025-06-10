#include <cstring>
#include <iostream>

class MyString {
private:
    char* data;
public:
    MyString(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }
    ~MyString() { delete[] data; }
};

MyString createString() {
    return MyString("Temp"); // 임시 객체 반환
}

int main() {
    MyString* ptr = &createString(); // 위험!
    return 0;
}