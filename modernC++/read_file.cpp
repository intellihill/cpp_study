#include <fstream>
#include <iostream>
#include "read_file.h"

void readFile() {
    std::ifstream infile;
    std::string filename{"test.txt"};
    bool opened= false;
    while (!opened) {
        infile.open(filename);
        if (infile.good()) {
            opened= true;
        } else {
            std::cout << "The file '" << filename
                      << "' doesn't exist (or can't be opened),"
                      << "please give a new filename: ";
            std::cin >> filename;
        }
    }

    int i;
    double d;
    infile >> i >> d;

    if (infile.good()) {
        std::cout << "i is " << i << ", d is " << d << '\n';
    } else {
        std::cout << "Could not correctly read the content.\n";
    }
    infile.close();
}