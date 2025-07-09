//
//  main.cpp
//  nlohmann
//
//  Created by 정대로 on 6/24/25.
//

#include <iostream>
#include <nlohmann/json.hpp>
#include "Monster.h"

using json = nlohmann::json;

int main(int argc, const char * argv[]) {

//    json j;
//    j["name"] = "John";
//    j["age"] = 30;
//    j.size();
//    std::cout << j.dump(4) << std::endl;
    Monster mon1("Sanson",Position2D(0, 0));
    // mon1.m_location은 mon1이 사라지면 같이 사라져야한다!!
    
    Monster mon2("Parsival",Position2D(0, 0));
    // mon2.m_location
    
//    while(1)
    {
        mon1.moveTo(Position2D(1, 1));
        std::cout << mon1 << std::endl;
    }
    
    return 0;
}
