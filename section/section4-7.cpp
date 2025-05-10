#include <iostream>
#include <typeinfo>

// user-defined data types
enum Color {
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_SKYBURE,
};  // semicolon은 꼭 들어가야한다.

// int computeDamage(int weapon_id) {
//     if (weapon_id == 0) {
//         return 1;   
//     }

//     if (weapon_id == 1) {
//         return 2;
//     }
// }

int main() {
    using namespace std;

    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{COLOR_RED};

    return 0;
}