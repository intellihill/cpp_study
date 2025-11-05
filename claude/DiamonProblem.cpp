/*
`Derived`가 `Base`를`Left`와`Right`를 통해 두 번 상속받아서, `Base`의 멤버가 중복된다.
class Base {
public:
    int value= 42;
};

class Left: public Base{};
class Right: public Base{};

// 문제: Derived는 Base를 두 번 상속받게 됨
class Derived: public Left, public Right {};

int main() {
    Derived d;
    // d.value= 10; // error! ambiguos - Left::value? Right::value?

    return 0;
}
*/

/**
 * Virtual Base Class로 해결
## 메모리 구조 비교

**일반 상속 (virtual 없음):**
```
Derived 객체:
[Base(Left용)] [Left 멤버]
[Base(Right용)] [Right 멤버]
[Derived 멤버]
→ Base가 2개 존재
```

**가상 상속 (virtual 사용):**
```
Derived 객체:
[Left 멤버] [Right 멤버] [Derived 멤버] [Base - 공유됨]
→ Base가 1개만 존재
 */

class Base {
public:
    int value= 42;
}

// virtual keword use
class Left: virtual public Base {};
class Right: virtual public Base {};

class Derived: public Left, public Right {};

int main() {
    Derived d;
    d.value= 10; // OK! Base는 하나만 존재함
    std::cout << d.value << std::endl;
    return 0;
}