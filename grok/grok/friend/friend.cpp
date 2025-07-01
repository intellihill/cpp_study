//
//  friend.cpp
//  grok
//
//  Created by 정대로 on 7/2/25.
//

/**
 * 1. friend 함수: 특정 함수가 클래스의 private/protected 멤버에 접근 가능
 * 2. friend 클래스: 한 클래스가 다른 클래스의 private/protected 멤버에 접근 가능
 * 3. 단방향 접근: friend 선언은 단방향으로 작동하며, 상호 접근을 위해서는 양쪽 클래스에서 friend 선언이 필요.
 * 4. 캡슐화의 균형: friend는 캡슐화를 약화시킬 수 있으므로 신중히 사용해야 함.
 *
 * friend 함수는 클래스 외부에 정의된 일반 함수로, 클래스 내부의 private/protected 멤버에 접근할 수 있는 권한만 부여받은 것이다.
 * 따라서 friend 함수는 전역 함수처럼 호출되며, 클래스 이름을 네임스페이스로 사용하지 않는다.
 */
#include <iostream>
#include "friend.hpp"

using namespace std;

// MyFriend::showSecret이 아님 (멤버 함수가 아님 전역 함수임)
void showSecret(MyFriend obj) {
    cout << "Secret value: " << obj.secret << endl;
}

void MyFriendA::display(MyFriend obj) {
    cout << "MyFriend's private data: " << obj.secret << endl;
}

