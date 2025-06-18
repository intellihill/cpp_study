#include <iostream>
#include "calc.h"

using namespace std;



class simple {
private:
    int m_id;
public:
    simple(int id) {
        setId(id);

        cout << this << endl;
    }
    
    void setId(int id) {
        m_id = id;
    }
    int getId() {
        return m_id;
    }
};

int main() {
    simple s1(1), s2(2);
    s1.setId(2);
    s2.setId(4);

    cout << &s1 << " " << &s2 << endl;

    calc cal(10);
    // cal.add(10);
    // cal.sub(1);
    // cal.mult(2);
    // cal.print();

    // calc cal(10);
    // calc &temp1= cal.add(10);
    // calc &temp2= temp1.sub(1);
    // calc &temp3= temp2.mult(2);
    // temp3.print();
    /* chaining_member_function */
    cal.add(10).sub(1).mult(2).print();


    return 0;
}