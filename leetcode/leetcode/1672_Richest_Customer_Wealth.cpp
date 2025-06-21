//
//  1672_Richest_Customer_Wealth.cpp
//  leetcode
//
//  Created by 정대로 on 6/21/25.
//

#include "1672_Richest_Customer_Wealth.h"
#include <iostream>

int Solution_1672::maximumWealth(vector<vector<int>> &accounts) {
    for (auto row : accounts) {
        for (int val : row) {
            nums+= val;
        }
        std::cout << "max: " << max << ", " << "nums: " << nums << endl;
        if (nums >= max) {
            max= nums;
        }
        nums= 0;
    }
    std::cout << "final max: " << max << std::endl;
    
    return 0;
};
