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
    int& operator[](int value);
private:
    int m_value;
    int* m_data;
};

#endif
