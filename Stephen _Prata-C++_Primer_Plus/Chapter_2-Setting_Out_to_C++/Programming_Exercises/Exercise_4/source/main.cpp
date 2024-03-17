/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.2-ex.4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter his or her age. The
               program then should display the age in months:
                Enter your age: 29
                Your age in months is 348.
 ==============================================================================
 */

#include <iostream>

#define YEAR_TO_MONTHS 12

int main()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    std::cout << "Your age in months is " << age * YEAR_TO_MONTHS
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}