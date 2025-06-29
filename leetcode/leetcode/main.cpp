//
//  main.cpp
//  leetcode
//
//  Created by 정대로 on 6/20/25.
//

#include <iostream>
#include <vector>
#include "MyClass.h"
#include "1672_Richest_Customer_Wealth.h"
#include "412_Fizz_Buzz.h"
#include "1342_Number_Steps.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    MyClass obj;
    obj.sayHello();
    
    Solution_1672 sl_1672;
    std::vector<vector<int>> array= {
        {1, 2},
        {3, 4}
    };
    sl_1672.maximumWealth(array);
    
    Solution_412 sl_412;
    sl_412.fizzBuzz(3);
    
    Solution_1342 sl_1342;
    sl_1342.numberOfSteps(4);

    return 0;
}
