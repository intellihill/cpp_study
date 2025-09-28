#include <iostream>
#include <cstring>

// 1. packed - 구조체 패딩 제거
struct __attribute__((packed)) PackedStruct {
    char c;     // 1 byte
    int i;      // 4 bytes
    short s;    // 2 bytes
};  // 총 크기: 7 bytes(패딩 없음)

struct NormalStruct {
    char c;     // 1 byte + 3 bytes padding
    int i;      // 4 bytes
    short s;    // 2 bytes + 2 bytes padding
};  // 총 크기: 12 bytes (패딩 포함)

void printStructSizes() {
    std::cout << "Size of PackedStruct: " << sizeof(PackedStruct) << " bytes\n";
    std::cout << "Size of NormalStruct: " << sizeof(NormalStruct) << " bytes\n";
}

int main() {
    printStructSizes();
    return 0;
}