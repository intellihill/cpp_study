#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class Cents {
private:
    int m_cents;
public:
    Cents(int cents= 0) {
        m_cents= cents;
    }
    int getCents() const {
        return m_cents;
    }
    int& getCents() {
        return m_cents;
    }

    Cents operator - () const {
        return Cents(-m_cents);
    }

    bool operator ! () const {
        return (m_cents == 0) ? true : false;
    }

    friend bool operator == (const Cents &c1, const Cents &c2) {
        return c1.m_cents == c2.m_cents;
    }
    friend bool operator != (const Cents &c1, const Cents &c2) {
        return c1.m_cents != c2.m_cents;
    }

    // sort 오버로딩할떄는 >가아니라 <로 오버로딩해야함
    friend bool operator < (const Cents &c1, const Cents &c2) {
        return c1.m_cents > c2.m_cents;
    }


    friend std::ostream& operator << (std::ostream &out, const Cents &cents) {
        out << cents.m_cents;
        return out;
    }
};


int main() {
    Cents cents1(6);
    Cents cents2(0);
    if (cents1 != cents2) {
        cout << "NotEqual" << endl;
    }

    vector<Cents> arr(20);

    for (unsigned i= 0; i<arr.size(); ++i) {
        arr[i].getCents() = i;
    }


    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(arr.begin(), arr.end(), g);
    for (auto &e : arr) {
        cout << e << " ";
    }
    cout << endl;

    // Cents의 크기비교를 못하므로 에러가 뜸 
    // std::sort(begin(arr), end(arr));
    // for (auto &e : arr) {
    //     cout << e << " ";
    // }
    // cout << endl;

    std::sort(begin(arr), end(arr));
    for (auto &e : arr) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}