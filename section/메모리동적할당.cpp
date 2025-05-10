// Dynamic Memory Allocation new & delete

#include <iostream>

using namespace std;

int main() {
    // int array[1000000];  // 정적할당은 stack으로 들어가고 메모리가 적음
    // 동적메모리 할당은 heap에 저장됨
    
    int *ptr = new int{ 7 };
    // 메모리가 모두 사용하고있어서 포인터가 적용이안될때 대기하고있다가 할당해주는방법
    int *waitPtr = new (std::nothrow) int{ 7 };

    cout << ptr << endl;
    cout << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "After delete" << endl;
    if (ptr != nullptr) {
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    // memory leak (메모리 누수)
    while (true) {
        int *ptr = new int;

        cout << ptr <<endl;
    }
    return 0;
}