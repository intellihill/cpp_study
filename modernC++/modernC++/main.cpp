//
//  main.cpp
//  modernC++
//
//  Created by 정대로 on 6/26/25.
//

#include <iostream>

void increment(int& x) {
    x++;
}

int main(int argc, const char * argv[]) {
    
    int i= 4;
    increment(i);
    std::cout << "i is " << i << '\n';
    
    
    return 0;
}
