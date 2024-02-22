/*
 ==============================================================================
 Name        : Homework_4-Task_4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that calculates a product of integers from n
               to 10 (value n is entered by the user).
 ==============================================================================
 */

#include <iostream>

int getNumberInRange(int a, int b)
{
    while (true)
    {
        std::cout << "Enter integer number in the range ["
                  << a << ", "
                  << b << "]: ";
        int num;
        std::cin >> num;

        if (a <= num && num <= b)
        {
            return num;
        }
        else
        {
            std::cout << "Entered number is incorrect!";
        }
    }
}

long long computeProductOfRange(int min, int max)
{
    if (min == max)
    {
        return max;
    }

    int res = 1;

    while (min <= max)
    {
        res *= min++;
    }

    return res;
}

int main()
{
    int min = getNumberInRange(0, 10);
    int max = 10;
    long long prod = computeProductOfRange(min, max);

    std::cout << "Product of integers from "
              << min << " to "
              << max << ": " << prod
              << std::endl;
}