/**
 * 배열 대신 사용 할 수 있는 컨테이너
 * vector
 * 
 */

#include <iostream>
#include <cassert>

using namespace std;

vector<float> add(const vector<float>& v1, const vector<float>& v2) {
    assert(v1.size() == v2.size());
    vector<float> s(v1.size());
    for (unsigned i= 0; i < v1.size(); ++i) {
        s[i]= v1[i] + v2[i];
    }

    return s;
}


int main() {

    vector<float> v= {1, 2, 3}, w= {7, 8, 9}, s= add(v, w);
}