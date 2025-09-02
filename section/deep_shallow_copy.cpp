#include <cassert>
#include <iostream>
using namespace std;

class MyString {
    //private:
public:
    char *m_data = nullptr;
    int m_length = 0;

public:
    MyString(const char *source = "") {
        assert(source);

        m_length = std::strlen(source) + 1; // String 의 마지막이라는 '\0'을 넣어주기위해서 +1을 했음
        m_data = new char[m_length];

        for (int i = 0; i < m_length; ++i) {
            m_data[i] = source[i];
        }

        m_data[m_length - 1] = '\0';
    }

    // copy constructor
    MyString(const MyString &source) {
        cout << "Copy constructor" << endl;

        m_length = source.m_length;

        if (source.m_data != nullptr) {
            m_data = new char[m_length];

            for (int i=0; i<m_length; ++i) {
                m_data[i] = source.m_data[i];
            }
        } else {
            m_data = nullptr;
        }
    }

    MyString operator = (const MyString & source) {
        cout << "Assignment operator " << endl;
        // shallow copy
        // *this -> m_data = source.m_data;
        // this -> m_length = source.m_length;


        // parent self-assignment
        if (this == &source) { // prevent self-assignment
            return *this;
        }

        delete[] m_data;

        m_length = source.m_length;

        if (source.m_data != nullptr) {
            m_data = new char[m_length];

            for (int i=0; i<m_length; ++i) {
                m_data[i] = source.m_data[i];
            }
        } else {
            m_data = nullptr;
        }

        return *this;
    }

    ~MyString() {
        delete[] m_data;
    }

    char* getString() {
        return m_data;
    }
    int getLength() {
        return m_length;
    }
};

int main() {
    MyString hello("Hello");

    MyString str1(hello); // MyString str1 = hello와 같다

    cout << (int*)hello.m_data << endl;
    cout << hello.getString() << endl;

    {
        // (기본)복사생성자가 호출된다.
        MyString copy = hello;
        cout << (int*)copy.m_data << endl;
        cout << copy.getString() << endl;
    }

    cout << hello.getString() << endl;

    return 0;
}