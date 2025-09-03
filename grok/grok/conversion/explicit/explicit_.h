//
//  explicit_.h
//  grok
//
//  Created by 정대로 on 9/3/25.
//
#include <iostream>

class explicit_ {
public:
    // explicit 없음 - 암시적 허용
    explicit_(int x): value(x) {}
    
    void print() {
        std::cout << "explicit_: " << value << std::endl;
    }
    
private:
    int value;
};
