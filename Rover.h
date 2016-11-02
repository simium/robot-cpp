#ifndef _ROVER_H
#define _ROVER_H

#include "Robot.h"
#include <vector>

class Rover : public Robot {
public:
    void Translate(double);
    void Rotate(double);
};

#endif
