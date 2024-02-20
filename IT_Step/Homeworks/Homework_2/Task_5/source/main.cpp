/*
 ==============================================================================
 Name        : Homework_2-Task_5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that converts the number of days entered by the
               user into the number of full weeks and remaining days.
               For example, if the input is 17 days, the program must display
               2 weeks and 3 days.
 ==============================================================================
 */

#include <iostream>

int getDays()
{
    while (true)
    {
        std::cout << "Enter number of days: ";
        int days;
        std::cin >> days;

        if (days >= 0)
        {
            return days;
        }
        else
        {
            std::cout << "Number of days must be a non-negative number. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

int main()
{
    int inputDays = getDays();

    int weeks = inputDays / 7;
    int days = inputDays % 7;

    std::cout << inputDays << " days equal to "
              << weeks << " week(s) and "
              << days << " day(s)"
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}