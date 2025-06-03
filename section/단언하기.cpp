#include <cassert>
#include <array>
#include <iostream>

void printValue(const std::array<int, 5> &my_array, const int& ix) {
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);
    std::cout << my_array[ix] << std::endl;
}

int main() {
    int number= 5;
    assert(number == 5);

    std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };

    printValue(my_array, 100);

    /**
     * static_assert
     * compile에 결정되는 경우에만 assert를 쓸 수 있음
     */
    const int x= 5;

    assert(x == 5);
    static_assert(x == 5);
    return 0;
}