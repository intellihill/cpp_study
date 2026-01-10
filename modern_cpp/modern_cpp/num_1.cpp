//
//  num_1.cpp
//  modern_cpp
//
//  Created by 정대로 on 1/10/26.
//
#include <iostream>

void num_1() {
    const float r1= 3.5, r2= 7.3, pi= 3.14159;
    
    float area1= pi * r1 * r1;
    std::cout << "A circle of radius " << r1 << " has area " << area1 << "." << std::endl;
    
    std::cout << "The average of " << r1 << " and " << r2 << " is " << (r1 + r2) / 2 << "." << std::endl;
}
