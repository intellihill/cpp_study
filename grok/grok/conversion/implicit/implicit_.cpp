//
//  implicit_.cpp
//  grok
//
//  Created by 정대로 on 9/4/25.
//
#include <iostream>
using namespace std;

#include "implicit_.h"

void implicit_::test() {
    int i= 42;
    double d= i; // 암시적 변환: int -> double
    cout << "int i: " << i << endl;
    cout << "double d: " << d << endl;
    
    double d2= 3.14;
    int i2= d2;
    cout << "double d2: " << d2 << endl;
    cout << "int i2: " << i2 << endl;
}
