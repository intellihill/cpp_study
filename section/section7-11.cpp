#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int> &stack) {
    for (auto &e : stack) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    std::vector<int> v{ 1, 2, 3 };

    /**
     * size, capacity
     * 작게 resize를 할 때 메모리를 delete하는건 느리니까
     * resize된것만큼의 size를 가지고있다고 알려주고(for문에서 확인)
     * 실제 가지고있는 메모리는 capacity로 확인
     */
    v.resize(10);

    for(auto &e : v) {
        cout << e << " ";
    }
    cout << endl;

    cout << v.size() << " " << v.capacity() << endl;

    v.resize(2);


    for(auto &e : v) {
        cout << e << " ";
    }
    cout << endl;

    cout << v.size() << " " << v.capacity() << endl;

    cout << v[2] << endl;

    // memory용량을 미리 확보해놓는 함수
    // 원소가 추가가될 때 reserve된 공간이 있으면 변경, 교체 연산이 줄어들어 빠름
    v.reserve(1024);
    cout << v.size() << " " << v.capacity() << endl;

    /**
     * stack처럼 사용하는 방법
     * recursive call할 떄 stack overflow가 발생할 때 (속도 문제)
     * vector를 stack으로 사용하는 방법이 있다
     */
    std::vector<int> stack;

    // stack.reserve(1024);

    // push할 때 reserve가 되어있으면 capacity를 늘릴필요없어서 new, delete가 호출될일없어서 효율이 좋음
    stack.push_back(3);
    printStack(stack);
    stack.push_back(5);
    printStack(stack);
    stack.push_back(7);
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);


    return 0;
}