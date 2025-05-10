#include <iostream>
#include <bitset>

using namespace std;

int main() {
    /*
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool itme4_flag = false;

        // event
    item1_flag = true;

    // die! item2 lost
    item2_flag = false;

    if (item3_flag == true) {
        // event
    }

    if (item3_flag == true && itme4_flag == false) {
        item3_flag = false;
        itme4_flag = true;
    }
    ...
    */
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    // opt4, 5, 6, 7

    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    unsigned char items_flag = 0;
    cout << "No item " << bitset<8>(items_flag) << endl;
    
    // item0 on
    items_flag |= opt0;
    cout << "Item0 obtained " << bitset<8>(items_flag) << endl;
    // item3 on
    items_flag |= opt3;
    cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

    // item3 off
    items_flag &= ~opt3;
    cout << "Item3 lost " << bitset<8>(items_flag) << endl;
    
    // has item1 check
    if (items_flag & opt1) {
        cout << "Has item1" << endl;
    } else {
        cout << "Not has item1" << endl;
    }
    // has item0 check
    if (items_flag & opt0) {
        cout << "Has item0" << endl;
    }
    // obtain item 2, 3
    items_flag |= (opt2 | opt3);
    cout << "Item2,3 obtained " << bitset<8>(items_flag) << endl;


    return 0;

}