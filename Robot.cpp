#include "Robot.h"
#include <vector>

void Robot::SetPosition(std::vector<double> newPosition)
{
    position = newPosition;
}

void Robot::SetRotation(std::vector<double> newRotation)
{
    rotation = newRotation;
}

std::vector<double> Robot::GetPosition()
{
    return position;
}

std::vector<double> Robot::GetRotation()
{
    return rotation;
}
