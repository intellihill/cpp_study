#include <iostream>
using namespace std;

class IntList {
private:
    int m_list[10];

public:
    // ()[]이런식의 표현은 불편하므로 첨자연산자로 해결
    // void setItem(int index, int value) {
    //     m_list[index] = value;
    // }
    
    // int getItem(int index) {
    //     return m_list[index];
    // }

    // int * getList() {
    //     return m_list;
    // }
    int & operator [] (const int index) { // &로 받는이유는 read&write를 위해서
        return m_list[index];
    }
    
};

int main() {
    // IntList my_list;
    // my_list.setItem(3, 1);
    // cout << my_list.getItem(3) << endl;
    // my_list.getList()[3] = 10;
    // cout << my_list.getList()[3] << endl;
    // ()[]이런식의 표현은 불편하므로 첨자연산자로 해결

    IntList my_list;
    my_list[3] = 10;
    cout << my_list[3] << endl;

    return 0;
}