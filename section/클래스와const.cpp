#include <iostream>
using namespace std;

class something{
public:
    int m_value= 0;

    void setValue(int value) {
        m_value= value;
    }
    int getValue() {
        return m_value;
    }
};

int main() {

    const something st;

    cout << something.getValue() << endl;
    return 0;
}
