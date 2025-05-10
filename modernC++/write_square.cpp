#include "write_square.h"
#include <fstream>

void writeSquare() {
    std::ofstream square_file;
    square_file.open("squares.txt");
    for (int i= 0; i < 10; ++i) {
        square_file << i << "^2 = " << i*i << '\n';
    }
    square_file.close();
}