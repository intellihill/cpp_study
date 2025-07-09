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
#include "operator/operator_func.hpp"
#include "friend/friend.hpp"
#include "reference/reference.hpp"


int main() {
    /* examine about vector */
    vector_about va;
    va.process();
    
    /* examine about const_function */
    // const function은 setValue function is not possible
    const Const_func cf(10);
    std::cout << "Const_func::getValue: " << cf.getValue() << std::endl;
    
    /* examine overloading of operator_function */
    operator_func af1(3), af2(5);
    operator_func af_result1= af1+af2;
    operator_func af_result2= operator_func(4+9);
    
    std::cout << "af_result1.getValue(): " << af_result1.getValue() << std::endl;
    std::cout << "af_result2.getValue(): " << af_result2.getValue() << std::endl;
    
    /* examine friend */
    MyFriend mf;
    showSecret(mf);
    MyFriendA mfa;
    mfa.display(mf);
    
    /* examine reference */
    reference rf;
    rf.process();
    
    return 0;
}
