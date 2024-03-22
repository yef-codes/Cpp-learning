/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.3-ex.4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter the number of seconds
               as an integer value (use type long, or, if available, long long)
               and that then displays the equivalent time in days, hours, minutes,
               and seconds. Use symbolic constants to represent the number of
               hours in the day, the number of minutes in an hour, and number of
               seconds in a minute.The output should look like this:
                Enter the number of seconds: 31600000
                31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 ==============================================================================
 */

#include <iostream>

const int HOURS_PER_DAY = 24;
const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_MINUTE = 60;

int main()
{
    std::cout << "Enter the number of seconds: ";
    long long seconds;
    std::cin >> seconds;

    int days = seconds / (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    int seconds_left = seconds % (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    
    int hours = seconds_left / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    seconds_left = seconds_left % (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    
    int minutes = seconds_left / SECONDS_PER_MINUTE;
    seconds_left = seconds_left % SECONDS_PER_MINUTE;

    std::cout << seconds << " seconds = "
              << days << " days, "
              << hours << " hours, "
              << minutes << " minutes, "
              << seconds_left << " seconds"
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}