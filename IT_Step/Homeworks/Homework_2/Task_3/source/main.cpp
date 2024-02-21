/*
 ==============================================================================
 Name        : Homework_2-Task_3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that calculates a runner's speed. The distance
               and time values are entered by the user. The program output
               must be as following:
                - Computing the run speed.
                - Enter distance (meters) = 1000.
                - Enter time (min.sec) = 3.25.
                - Distance : 1000 м.
                - Time : 3 min 25 sec = 205 sec.
                - Run speed : 17.56 km/h.
 ==============================================================================
 */

#include <iostream>

double getDistance()
{
    while (true)
    {
        std::cout << "- Enter distance (meters) = ";
        float distance;
        std::cin >> distance;

        if (distance >= 0)
        {
            return distance;
        }
        else
        {
            std::cout << "Distance must be a non-negative number. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

double getTime()
{
    while (true)
    {
        std::cout << "- Enter time (min.sec) = ";
        double time;
        std::cin >> time;

        if (time >= 0)
        {
            return time;
        }
        else
        {
            std::cout << "Time must be a non-negative number. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

int main()
{
    double distance = getDistance();
    double time = getTime();

    int minutesPart = time / 1;
    int secondsPart = (time - minutesPart) * 100;
    int secondsTotal = minutesPart * 60 + secondsPart;

    double speed = (distance / 1000) / ((double)secondsTotal / 3600);

    std::cout << "- Distance : " << distance << " m.\n"
              << "- Time: " << minutesPart << " min " << secondsPart << " sec = " << secondsTotal << " sec.\n"
              << "- Run speed : " << speed << " km/h."
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}