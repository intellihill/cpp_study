//
//  inline.h
//  reference
//
//  Created by 정대로 on 9/28/25.
//

#ifndef INLINE_FUNCTION_H
#define INLINE_FUNCTION_H

#include <iostream>
using namespace std;

// 컴파일러별 인라인 매크로 정의
// 헤더를 include하는 모든 파일에서 매크로를 사용할 수 있어야 한다.
#ifdef __GNUC__
    #define FORCE_INLINE __attribute__((always_inline)) inline
    #define NO_INLINE __attribute__((noinline))
#else
    #define FORCE_INLINE inline
    #define NO_INLINE
#endif

// 인라인 함수는 헤더에 정의 (템플릿처럼)
// 인라인 함수는 컴파일 타임에 호출하는 곳에 코드가 직접 삽입되어야 하므로, 컴파일러가 정의를 볼 수 있어야 한다.
FORCE_INLINE int inlineFunction(int x) {
    cout << "inlineFunction: " << x * x << endl;
    return x * x;
}

// 일반 함수는 선언만
NO_INLINE void noInlineFunction();

#endif
