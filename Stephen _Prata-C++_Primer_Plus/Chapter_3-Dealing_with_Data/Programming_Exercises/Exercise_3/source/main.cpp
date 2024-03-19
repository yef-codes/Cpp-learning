/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.3-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter a latitude in degrees,
               minutes, and seconds and that then displays the latitude in
               decimal format. There are 60 seconds of arc to a minute and 60
               minutes of arc to a degree; represent these values with symbolic
               constants. You should use a separate variable for each input value.
               A sample run should look like this:
                Enter a latitude in degrees, minutes, and seconds:
                First, enter the degrees: 37
                Next, enter the minutes of arc: 51
                Finally, enter the seconds of arc: 19
                37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
 ==============================================================================
 */

#include <iostream>

const int ARC_SECONDS_PER_MINUTE = 60;
const int ARC_MINUTES_PER_DEGREE = 60;

double arc_seconds_to_minutes(int arc_seconds);
double arc_minutes_to_degrees(double arc_minutes);

int main()
{
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;

    std::cout << "First, enter the degrees: ";
    int degrees;
    std::cin >> degrees;

    std::cout << "Next, enter the minutes of arc: ";
    int arc_minutes;
    std::cin >> arc_minutes;

    std::cout << "Finally, enter the seconds of arc: ";
    int arc_seconds;
    std::cin >> arc_seconds;

    float minutes_temp = arc_seconds_to_minutes(arc_seconds);
    float degrees_temp = arc_minutes_to_degrees(minutes_temp + arc_minutes);

    std::cout << degrees << " degrees, "
              << arc_minutes << " minutes, "
              << arc_seconds << " seconds = "
              << degrees + degrees_temp
              << " degrees" << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

double arc_seconds_to_minutes(int arc_seconds)
{
    return static_cast<double>(arc_seconds) / ARC_SECONDS_PER_MINUTE;
}

double arc_minutes_to_degrees(double arc_minutes)
{
    return arc_minutes / ARC_MINUTES_PER_DEGREE;
}