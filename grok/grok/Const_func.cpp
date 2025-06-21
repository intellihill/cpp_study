//
//  const_func.cpp
//  grok
//
//  Created by 정대로 on 6/21/25.
//
/*
 * const 멤버 함수를 만드는 이유
 * 1. 객체 불변성 보장: const 멤버 함수는 해당 함수가 호출되는 객체의 상태(멤버 변수)를 변경하지 않음을
 * 컴파일러에 명시적으로 보장한다. 객체의 데이터 무결성을 유지하는 데 유용하다.
 * 2. const 객체와의 호환성: const로 선언된 객체는 non-const 멤버 함수를 호출할 수 없다.
 * const 멤버 함수를 제공하면 const 객체에서도 해당 함수를 안전하게 호출할 수 있다.
 * 3. 코드 가독성 및 의도 표현: const 함수는 개발자의 의도를 명확히 전달한다.
 * 이 함수가 객체를 수정하지 않는다는 것을 코드 자체로 문서화하여 이해하기 쉽게 만든다.
 * 4. 컴파일러 최적화: const 함수는 객체 상태를 변경하지 않음을 보장하므로, 컴파일러가 더 효율적인 코드를
 * 생성하거나 최적화를 수행할 가능성을 높인다.
 * 5. 인터페이스 설계의 안정성: 클래스 설계 시, const 함수를 사용하면 호출자가 객체를 수정할 수 없도록 제한하여
 * 안전한 인터페이스를 제공할 수 있다.
 */

#include "Const_func.h"

Const_func::Const_func(int v) : value(v) {}

int Const_func::getValue() const {
    return value;
}

void Const_func::setValue(int v) {
    value= v;
}
