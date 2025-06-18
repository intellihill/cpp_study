#include <iostream>
/**
 * 헤더에서 네임스페이스를 쓰면 
 * 인클루드하는것들에 모두 영향이 받음 안쓰는게 좋음
 */


class calc {
private:
    int m_value;

public:
    calc(int init_value);

    calc& add(int value); 
    calc& sub(int value); 
    calc& mult(int value);

    void print();
};

