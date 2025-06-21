#include <iostream>
#include <string>
using namespace std;

class something{
public:
    string m_value= "default";

    const string& getValue() const {
        cout << "const version" << endl;
        return m_value;
    }
    string& getValue() {
        cout << "not const version" << endl;
        return m_value;
    }

};


int main() {

    something st;
    st.getValue();

    const something st2;
    st2.getValue();

    return 0;
}
