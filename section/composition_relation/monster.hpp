#pragma once

#include <string>
#include <iostream>

class Monster {
private:
    std::string m_name;
    int m_x; // location
    int m_y;

public:
    Monster(const std::string name_in, const int & x_in, const int & y_in) : m_name(name_in), m_x(x_in), m_y(y_in) {}

    void moveTo(const int & x_target, const int & y_target) {
        m_x = x_target;
        
        m_y = y_target;
    }

    friend std::ostream operator << (std::ostream & out, const Monster & monster) {
        out << monster.m_name << " " << monster.m_x << " " << monster.m_y << std::endl;

        return out;
    }
};