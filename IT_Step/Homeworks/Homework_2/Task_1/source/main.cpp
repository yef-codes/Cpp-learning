/*
 ============================================================================
 Name        : Homework_2-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : The user enters the time in seconds. Write a program that
               converts entered seconds into hours, minutes, seconds and
               displays the result on the screen.
 ============================================================================
 */

#include <iostream>

int getSeconds()
{
    while (true)
    {
        std::cout << "Enter time in seconds:" << std::endl;
        int seconds;
        std::cin >> seconds;

        if (seconds >= 0)
        {
            return seconds;
        }
        else
        {
            std::cout << "Time must be a non-negative number. Please enter the correct value!" << std::endl;
        }
    }
}

int main()
{
    int inputSeconds = getSeconds();

    int hours = inputSeconds / 3600;
    int minutes = (inputSeconds % 3600) / 60;
    int seconds = (inputSeconds % 3600) % 60;

    std::cout << inputSeconds << " seconds equal to: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << std::endl;

    std::cout << "\n=====> DONE <=====\n" << std::endl;

    return 0;
}
