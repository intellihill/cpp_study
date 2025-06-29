//
//  1342_Number_Steps.cpp
//  leetcode
//
//  Created by 정대로 on 6/29/25.
//

#include <iostream>
#include "1342_Number_Steps.hpp"
using namespace std;

int Solution_1342::numberOfSteps(int num) {
    while (flag) {
        if (num == 0) {
            flag= false;
            continue;
        }
        
        if (num % 2 == 0) {
            num= num/2;
            ++count;
        } else {
            num= --num;
            ++count;
        }
    }
    cout << "Count_Solution_1342: " << count << endl;
    return count;
}
