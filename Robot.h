#ifndef _ROBOT_H
#define _ROBOT_H

#include <vector>

class Robot {
    static int ID;
    std::vector<double> position;
    std::vector<double> rotation;
public:
    Robot() : position(3), rotation(3) {}
    ~Robot()
    {
        position.clear();
        rotation.clear();
    }
    void SetPosition(std::vector<double>);
    void SetRotation(std::vector<double>);
    std::vector<double> GetPosition();
    std::vector<double> GetRotation();
};

#endif
