//
//  operator_func.cpp
//  grok
//
//  Created by 정대로 on 6/28/25.
//

#include "operator_func.hpp"

int& operator_func::operator [] (int value) {
    return operator_func::m_value[m_data];
}
