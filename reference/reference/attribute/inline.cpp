//
//  inline.cpp
//  reference
//
//  Created by 정대로 on 9/28/25.
//
#include "inline.h"

NO_INLINE void noInlineFunction() {
    cout << "This function won't be inlined" << endl;
}
