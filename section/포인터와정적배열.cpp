#include <iostream>

using namespace std;

// void printArray(int array[]) { // 인자는 array처럼보이지만 내부적으로는 포인터이다.
void printArray(int *array) {// 위와 같음
    cout << sizeof(array) << endl;
    cout << *array << endl;
    *array = 100;
}

struct MyStruct {
    int sArray[5] = {9, 7, 5, 3, 1};
};

void doSomething(MyStruct *ms) {
    cout << sizeof((*ms).sArray) << endl;
}

int main() {


    int array[] = {9, 7, 5, 3, 1};

    cout << array[0] << " " << array[1] <<endl;
    cout << array << endl;
    cout << &array[0] << endl;
    cout << *array << endl;

    int *ptr = array; // 포인터를알려주는 *
    cout << ptr << endl;
    cout << *ptr << endl; // 디레퍼런싱하는 *

    cout << sizeof(array) << endl; // static array는 전체 size가 나옴
    cout << sizeof(ptr) << endl; // 여기서는 포인터변수 자체 사이즈가 나옴

    printArray(array);

    cout << array[0] << " " << *array << endl;

    cout << *ptr << " " << *(ptr+1) << endl;

    // 구조체
    MyStruct ms;
    cout << ms.sArray[0] << endl;

    cout << sizeof(ms.sArray) << endl;
    doSomething(&ms);
    


    // char name[] = "jackjack";
    // cout << *name << endl;

    // 동적할당된 array


    return 0;
}