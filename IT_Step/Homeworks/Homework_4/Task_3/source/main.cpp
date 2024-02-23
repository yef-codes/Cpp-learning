/*
 ==============================================================================
 Name        : Homework_4-Task_3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Calculate the arithmetical mean of numbers from 1 to 1000.
 ==============================================================================
 */

#include <iostream>

double arithmeticalMeanOfRange(int min, int max)
{
    int count = 0;
    int sum = 0; 

    while (min <= max)
    {
        sum += min++;
        count++;
    }

    return (double)sum / count;
}

int main()
{
    int min = 1;
    int max = 1000;

    double mean = arithmeticalMeanOfRange(min, max);

    std::cout << "The arithmetical mean of numbers from "
              << min << " to " << max << " is: " << mean
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}