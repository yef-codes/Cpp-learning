/*
 ============================================================================
 Name        : Homework_1-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Given the circumference, find the area of the circle using formula
               S = pi*R^2, calculate the radius from formula of circumference:
               L=2*pi*R. pi = 3.14.
 ============================================================================
 */

#include <iostream>
#include <math.h>

double getCircumference()
{
    while (true)
    {
        std::cout << "Enter circumference:" << std::endl;
        double circum;
        std::cin >> circum;

        if (circum >= 0)
        {
            return circum;
        }
        else
        {
            std::cout << "Circumference must be a non-negative number. Please enter the correct value!" << std::endl;
        }
    }
}

int main()
{
    const double PI = 3.14;

    double circum = getCircumference();
    double radius = circum / 2 / PI;
    double area = PI * pow(radius, 2);

    std::cout << "Area of the circle = " << area << std::endl;

    std::cout << "\n=====> DONE <=====\n"<< std::endl;

    return 0;
}