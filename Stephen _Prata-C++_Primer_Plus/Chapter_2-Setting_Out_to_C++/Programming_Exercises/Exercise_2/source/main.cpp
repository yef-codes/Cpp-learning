/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.2-ex.2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a C++ program that asks for a distance in furlongs and
               converts it to yards. (One furlong is 220 yards.)
 ==============================================================================
 */

#include <iostream>

#define FURLONG_TO_YARDS 220

int main()
{
    std::cout << "Enter distance in furlongs: ";
    int furlongs;
    std::cin >> furlongs;

    std::cout << furlongs << " furlongs is "
              << furlongs * FURLONG_TO_YARDS << " yards. "
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}