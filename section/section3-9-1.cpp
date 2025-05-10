#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // bitMask
    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;
    cout << std::bitset<32>(red_mask) << endl;
    cout << std::bitset<32>(green_mask) << endl;
    cout << std::bitset<32>(blue_mask) << endl;

    unsigned int pixel_color = 0xDAA520;
    // blue_mask를 통해서 blue

    unsigned char blue = pixel_color & blue_mask;
    unsigned char green = (pixel_color & green_mask) >> 8;
    unsigned char red = (pixel_color & red_mask) >> 16;

    cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;
    cout << "green " << bitset<8>(green) << " " << int(green) << endl;
    cout << "red " << bitset<8>(red) << " " << int(red) << endl;

    cout << std::bitset<32>(pixel_color) << endl;

    // 
    // unsigned char red, green, blue;

    return 0;
}