//
//  friend.hpp
//  grok
//
//  Created by 정대로 on 6/30/25.
//

#ifndef MY_FRIEND_H
#define MY_FRIEND_H

class MyFriend {
private:
    int secret = 42;
public:
    friend void showSecret(MyFriend obj);
    // friend Class
    friend class MyFriendA;
};

class MyFriendA {
public:
    void display(MyFriend obj);
};

#endif
