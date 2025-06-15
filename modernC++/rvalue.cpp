/**
 * 왜 &&가 필요한가?
 * (1) Move Sementics
 *  - 임시 객체는 곧 사라지므로, 복사 대신 자원을 이동하여 성능을 최적화합니다.
 *  예: std::string 객체는 문자열 데이터를 복사하면 메모리와 시간이 낭비됩니다.
 *     오른값 참조를 사용하면 데이터를 복사하지 않고 이동합니다.
 */
#include <iostream>

using namespace std;

int main() {

    /** 이동 시멘틱스 예제 */
    std::string s1= "hello";
    std::string s2= std::move(s1); // s1의 자원을 s2로 이동 (s1는 비어짐)
    
    cout << "s1: " << s1 << "s2: "<< s2 << endl; // s1값은 사라지고 s2에 이동됨

    return 0;
}