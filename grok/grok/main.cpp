//
//  main.cpp
//  grok
//
//  Created by 정대로 on 6/20/25.
//

#include <iostream>
#include <vector>
#include "vector_about.h"
#include "Const_func.h"

int main() {
    /* examine about vector */
    vector_about va;
    va.process();
    
    /* examine about const_function */
    // const function은 setValue function is not possible
    const Const_func cf(10);
    std::cout << "Const_func::getValue: " << cf.getValue() << std::endl;
    
    return 0;
}
