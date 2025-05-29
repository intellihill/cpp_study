#include <iostream>
#include <cassert>

class Point {
public:
    Point(int x, int y) : x_(x), y_(y) {
        assert(x >= 0 && y >= 0);
    }
    // 친구 함수 선언
    friend Point operator-(const Point& lhs, const Point& rhs);
    void print() const {
        std::cout << "(" << x_ << ", " << y_ << ")\n";
    }
private:
    int x_, y_;
};

Point operator-(const Point& lhs, const Point& rhs) {
    return Point(lhs.x_ + rhs.x_, lhs.y_ + rhs.y_);
}

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 - p2; // 친구 함수 호출
    p3.print();
    return 0;
}