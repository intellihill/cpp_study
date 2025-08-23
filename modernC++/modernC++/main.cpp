//
//  main.cpp
//  modernC++
//
//  Created by 정대로 on 6/26/25.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    std::ofstream square_file("squares.txt");
    
    for (int i= 0; i < 10; ++i) {
        square_file << i << "^2 = " << i*i << '\n';
    }
    return 0;
}
