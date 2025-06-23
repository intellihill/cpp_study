//
//  412_Fizz_Buzz.cpp
//  leetcode
//
//  Created by 정대로 on 6/23/25.
//

#include <iostream>
#include "412_Fizz_Buzz.h"


vector<string> Solution_412::fizzBuzz(int n) {
    
    for (auto i=1; i<n+1; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(std::to_string(i));
        }
    };
    for (const auto& s : result) {
        std::cout << s << std::endl;
    }
    return result;
}
