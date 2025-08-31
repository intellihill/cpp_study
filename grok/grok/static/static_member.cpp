//
//  static_member.cpp
//  grok
//
//  Created by 정대로 on 8/31/25.
//

#include "static_member.hpp"

int static_member::staticVar= 0; // static variable define

static_member::static_member(int val): instanceVar(val) {}
