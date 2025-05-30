#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    const int fibonacci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    vector<int> v_fibonacci = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};


    /**
     * for-each는 동적할당에서는 사용할 수 없음
     * 대신 vector를 사용하면 됨
     */
    for (const auto number : fibonacci) {
        cout << number << " ";
    }

    cout << endl;

    int max_number = std::numeric_limits<int>::lowest();

    for (const auto &n : fibonacci) {
        max_number = std::max(max_number, n);
    }
    cout << max_number << endl;

    return 0;
}