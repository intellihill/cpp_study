/**
 * 반환 값을 어떻게 받을 것인가?
 */
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

std::tuple<int, double> getTuple() {
    int a= 10;
    double d= 3.14;
    return std::make_tuple(a, d);
}

/* 여러번의 복사가 발생 */
int getValueCopy(int x) {
    int value= 2 * x;
    return value;
}

/* 주소를 통한 반환 */
int getValueAddr(int x) {
    int value= 2* x;
    return value;
}

/* 참조를 통한 반환 */
int& getValueRef(int x) {
    int value= 2 * x;
    return value;
}

int* allocateMemory(int size) {
    return new int[size];
}

int& get(std::array<int, 100>& my_array, int ix) {
    return my_array[ix];
}

struct S {
    int a, b, c, d;
}
/* 사용자 정의를 리턴값으로 */
S getStruct() {
    S my_s{ 1, 2, 3, 4};
}

int main() {
    int value_c= getValueCopy(3);

    int value_ref= &getValueRef(3);
    // int value_deref= *getValueRef(3); // 사라질 변수를 dereference하는건 안전하지 않다.

    int *array= new int[10];

    int *arrayF= allocateMemory(1024);
    delete[] arrayF;

    /* return by reference */
    int value= getValueRef(5);
    std::array<int, 100> my_array;
    my_array[30]= 10;

    get(my_array, 30) = 1024;

    /* n개의 return을 받고 싶을 떄 */
    S my_s = getStruct();
    my_s.a;

    std::tuple<int, double> my_tp = getTuple();
    std::get<0>(my_tp); // a
    std::get<1>(my_tp); // d


    return 0;
}
