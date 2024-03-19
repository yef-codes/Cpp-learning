/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.3-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a short program that asks for your height in integer inches
               and then converts your height to feet and inches. Have the
               program use the underscore character to indicate where to type
               the response. Also use a const symbolic constant to represent the
               conversion factor.
 ==============================================================================
 */

#include <iostream>

const int INCHES_IN_FOOT = 12;

int main()
{
    std::cout << "Enter your height in integer inches: _\b";
    int inches;
    std::cin >> inches;

    std::cout << "Your height in feet and inches is "
              << inches / INCHES_IN_FOOT << " feet "
              << inches % INCHES_IN_FOOT << " inches."
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}