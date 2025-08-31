//
//  static_member.hpp
//  grok
//
//  Created by 정대로 on 8/31/25.
//

#ifndef STATIC_MEMBER_H
#define STATIC_MEMBER_H

class static_member {
public:
    static int staticVar; // static: 클래스당 하나만 존재
    int instanceVar; // non-static: 객체당 별도로 존재
    
    static_member(int val); // 생성자 선언
};

#endif
