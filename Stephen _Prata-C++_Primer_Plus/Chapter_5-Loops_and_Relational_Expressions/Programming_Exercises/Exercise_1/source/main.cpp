/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.5-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests the user to enter two integers. The
               program should then calculate and report the sum of all the
               integers between and including the two integers. At this point,
               assume that the smaller integer is entered first. For example, if
               the user enters 2 and 9, the program should report that the sum
               of all the integers from 2 through 9 is 44.
 ==============================================================================
 */

#include <iostream>

long long sumOfRange(int lowerLimit, int upperLimit);

int main()
{
    std::cout << "Enter first integer: ";
    int num_1;
    std::cin >> num_1;

    std::cout << "Enter second integer: ";
    int num_2;
    std::cin >> num_2;

    long long sum = sumOfRange(num_1, num_2);

    std::cout << "Sum of all integers in the range ["
              << num_1 << ".." << num_2 << "] is: "
              << sum
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

long long sumOfRange(int lowerLimit, int upperLimit)
{
    long long sum = 0;

    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        sum += i;
    }

    return sum;
}