/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.10
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests the user to enter three times for
               the 40-yd dash (or 40-meter, if you prefer) and then displays
               the times and the average. Use an array object to hold the data.
               (Use a built-in array if array is not available.)
 ==============================================================================
 */

#include <iostream>
#include <array>

int main()
{
    std::array<float, 3> times;

    std::cout << "Enter the 1st time (sec): ";
    std::cin >> times[0];

    std::cout << "Enter the 2nd time (sec): ";
    std::cin >> times[1];

    std::cout << "Enter the 3rd time (sec): ";
    std::cin >> times[2];

    std::cout << "The results are:"
              << "\n1st time   : " << times[0]
              << "\n2nd time   : " << times[1]
              << "\n3rd time   : " << times[2]
              << "\nThe average: " << (times[0] + times[1] + times[2]) / 3
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}