//
//  const_func.h
//  grok
//
//  Created by 정대로 on 6/21/25.
//

#ifndef CONST_FUNC_H
#define CONST_FUNC_H

class Const_func {
    int value;
public:
    Const_func(int v);
    int getValue() const;
    void setValue(int v);
};

#endif
