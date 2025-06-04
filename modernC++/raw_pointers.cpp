#include <iostream>

int main() {
    int x= 10;
    int* ptr= &x;
    std::cout << "x의 값: " << x << std::endl;
    std::cout << "ptr이 가리키는 주소: " << ptr << std::endl;
    std::cout << "ptr이 가리키는 값: " << *ptr << std::endl;

    return 0;
}