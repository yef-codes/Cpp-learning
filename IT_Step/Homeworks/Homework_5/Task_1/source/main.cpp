/*
 ==============================================================================
 Name        : Homework_5-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Some number is entered by the user. Define the number of digits
               in this number, their sum and average, and the number of zeros.
 ==============================================================================
 */

#include <iostream>

int countDigits(int num)
{
    int digitCount = 0;

    while (num != 0)
    {
        digitCount++;
        num /= 10;
    }

    return digitCount;
}

int sumDigits(int num)
{
    int digitSum = 0;

    while (num != 0)
    {
        digitSum += num % 10;
        num /= 10;
    }

    return digitSum;
}

float averageDigits(int num)
{
    return (float)sumDigits(num) / countDigits(num);
}

int countZeros(int num)
{
    int zeroCount = 0;

    while (num != 0)
    {
        if (num % 10 == 0)
        {
            zeroCount++;
        }

        num /= 10;
    }

    return zeroCount;
}

int getIntFromUser()
{
    std::cout << "Enter integer number: ";
    int userNum;
    std::cin >> userNum;

    return userNum;
}

int main()
{
    int number = getIntFromUser();

    std::cout << "\nNumber of digits : " << countDigits(number)
              << "\nSum of digits    : " << sumDigits(number)
              << "\nAverage of digits: " << averageDigits(number)
              << "\nNumber of zeros  : " << countZeros(number)
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}