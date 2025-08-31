//
//  operator_func.hpp
//  grok
//
//  Created by 정대로 on 6/28/25.
//

#ifndef OPERATOR_FUNC_H
#define OPERATOR_FUNC_H

class operator_func {
public:
    operator_func(int value) : m_value(value) {}
    
    int& operator[](int value);
    operator_func operator+(const operator_func& rhs);
    friend operator_func operator+(const operator_func& lhs, const operator_func& rhs);
    int getValue();
private:
    int m_value= 0;
    int* m_data;
};

#endif
