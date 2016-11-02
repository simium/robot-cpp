#include "Robot.h"
#include "Rover.h"
#include <iomanip>
#include <iostream>
#include <math.h>

int main()
{
    Robot r;
    Rover rov;

    // Set format
    std::cout << std::fixed << std::setprecision(3);

    std::vector<double> vpos;
    vpos.push_back(0.0);
    vpos.push_back(0.0);
    vpos.push_back(0.0);

    rov.SetPosition(vpos);

    std::vector<double> vrot;
    vrot.push_back(0.0);
    vrot.push_back(0.0);
    vrot.push_back(0.0);

    rov.SetRotation(vrot);

    std::cout << rov.GetPosition()[0] << "," << rov.GetPosition()[1] << std::endl;

    rov.Rotate(M_PI/4.0);
    std::cout << rov.GetRotation()[2] << std::endl;
    rov.Translate(1.0);
    std::cout << rov.GetPosition()[0] << "," << rov.GetPosition()[1] << std::endl;

    rov.Rotate(-M_PI/2.0);
    std::cout << rov.GetRotation()[2] << std::endl;
    rov.Translate(1.0);
    std::cout << rov.GetPosition()[0] << "," << rov.GetPosition()[1] << std::endl;

    rov.Rotate(-M_PI/2.0);
    std::cout << rov.GetRotation()[2] << std::endl;
    rov.Translate(1.0);
    std::cout << rov.GetPosition()[0] << "," << rov.GetPosition()[1] << std::endl;

    rov.Rotate(-M_PI/2.0);
    std::cout << rov.GetRotation()[2] << std::endl;
    rov.Translate(1.0);
    std::cout << rov.GetPosition()[0] << "," << rov.GetPosition()[1] << std::endl;

    vpos.clear();
    vrot.clear();

    return 0;
}
