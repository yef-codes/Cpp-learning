/*
 ============================================================================
 Name        : Homework_1-Task_3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Calculate the traveled distance according to the formula
               S = v*t + (a*t^2) / 2, where v - speed, t - time,
               and a - acceleration.
 ============================================================================
 */

#include <iostream>
#include <math.h>

double getVelocity()
{
    while (true)
    {
        std::cout << "Enter Velocity v, m/s" << std::endl;
        double vel;
        std::cin >> vel;

        if (vel >= 0)
        {
            return vel;
        }
        else
        {
            std::cout << "Velocity must be a positive number. Enter correct value" << std::endl;
        }
    }
}

double getTime()
{
    while (true)
    {
        std::cout << "Enter Time t, s" << std::endl;
        double time;
        std::cin >> time;

        if (time >= 0)
        {
            return time;
        }
        else
        {
            std::cout << "Time must be a positive number. Enter correct value" << std::endl;
        }
    }
}
double getAcceleration()
{
    while (true)
    {
        std::cout << "Enter Acceleration a, m/s2" << std::endl;
        double accel;
        std::cin >> accel;

        if (accel >= 0)
        {
            return accel;
        }
        else
        {
            std::cout << "Acceleration must be positive number. Enter correct value" << std::endl;
        }
    }
}

int main()
{
    double velocity = getVelocity();
    double time = getTime();
    double acceleration = getAcceleration();

    double S = velocity * time + acceleration * pow(time, 2) / 2;

    std::cout << "Distance passed = " << S << "m" << std::endl;

    return 0;
}
