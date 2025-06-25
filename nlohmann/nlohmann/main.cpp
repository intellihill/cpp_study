//
//  main.cpp
//  nlohmann
//
//  Created by 정대로 on 6/24/25.
//

#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main(int argc, const char * argv[]) {

    json j;
    j["name"] = "John";
    j["age"] = 30;
    j.size();
    std::cout << j.dump(4) << std::endl;
    
    return 0;
}
