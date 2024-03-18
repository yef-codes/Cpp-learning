/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.2-ex.7
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter an hour value and a
               minute value. The main() function should then pass these two
               values to a type void function that displays the two values in
               the format shown in the following sample run:
                Enter the number of hours: 9
                Enter the number of minutes: 28
                Time: 9:28
 ==============================================================================
 */

#include <iostream>

void displayTime(int hours, int minutes);

int main()
{
    std::cout << "Enter the number of hours: ";
    int hours;
    std::cin >> hours;

    std::cout << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;

    std::cout << "Time: ";
    displayTime(hours, minutes);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

void displayTime(int hours, int minutes)
{
    std::cout << hours << ':' << minutes << std::endl;
}