/*
 ==============================================================================
 Name        : Homework_4-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that calculates a sum of integers from n до 500
               (value n is entered by the user).
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

int computeSumOfRange(int min, int max)
{
    if (min == max)
    {
        return 0;
    }

    int res = min;

    while (min < max)
    {
        res += ++min;
    }

    return res;
}

int main()
{
    int min = getNumberInRange(0, 500);
    int max = 500;
    int sum = computeSumOfRange(min, max);

    std::cout << "Sum of integers from "
              << min << " to "
              << max << ": " << sum
              << std::endl;
}
