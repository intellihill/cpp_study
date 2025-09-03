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
#include "dereference/dereference.hpp"
#include "static/static_member.hpp"
#include "conversion/explicit/explicit_.h"
#include "conversion/implicit/implicit_.h"


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
    
    /* examine dereference */
    dereference drf;
    drf.process1();
    drf.process2();
    drf.process3();
    
    /* examine static_member */
    static_member obj1(1); // 객체1 생성
    static_member obj2(2); // 객체2 생성
    
    // static 변수 변경: obj1 통해 변경하면 obj2에도 변경
    obj1.staticVar= 10;
    std::cout << "obj2의 staticVar: " << obj2.staticVar << std::endl;
    std::cout << "클래스 직접 접근: " << static_member::staticVar << std::endl;
    
    obj1.instanceVar= 5;
    std::cout << "obj2의 instanceVar: " << obj2.instanceVar << std::endl;
    
    /* examine explicit_ */
    explicit_ exp_1(10);
    exp_1.print();
    
    explicit_ exp_2= 20;
    exp_2.print();
    
    /* examine implicit_ */
    implicit_ imp_1(10);
    imp_1.test();
    
    return 0;
}
