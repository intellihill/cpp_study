//
//  main.cpp
//  DataStructure
//
//  Created by 정대로 on 9/14/25.
//

#include <iostream>
#include "Swap/Swap.h"

int main(int argc, const char * argv[]) {
    int i= 3;
    int j= 4;
    
    Swap sw{1 ,2};
    sw.MySwap();
    sw.MySwapPtr(&i, &j);
    sw.MySwapRef(i, j);
    sw.MySorting();
//    sw.exercise();
    sw.checkSorted(3, 2);
}
