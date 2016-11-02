#include "Rover.h"

#include <math.h>
#include <vector>

void Rover::Translate(double deltaPosition)
{
    std::vector<double> currentPosition = this->GetPosition();
    std::vector<double> currentRotation = this->GetRotation();

    currentPosition[0] += deltaPosition*cos(currentRotation[2]);
    currentPosition[1] += deltaPosition*sin(currentRotation[2]);

    this->SetPosition(currentPosition);
}

void Rover::Rotate(double deltaRadians)
{
    std::vector<double> currentRotation = this->GetRotation();
    double saneRadians;

    saneRadians = atan2(sin(deltaRadians),cos(deltaRadians));

    currentRotation[2] += saneRadians;

    currentRotation[2] = atan2(sin(currentRotation[2]),cos(currentRotation[2]));

    this->SetRotation(currentRotation);
}
