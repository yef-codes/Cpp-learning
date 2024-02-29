/*
 ==============================================================================
 Name        : Homework_5-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Some number is entered by the user. Then the program displays a
               simple menu asking what to do next:
               - define the number of digits,
               - define the sum of digits,
               - define the average of digits,
               - define the number of zeros.
               When the option is chosen, the appropriate result is diplayed.
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

void printMenu()
{
    std::cout << "Choose an option to proceed:\n"
              << "1 - Define the number of digits.\n"
              << "2 - Define the sum of digits.\n"
              << "3 - Define the average of digits.\n"
              << "4 - Define the number of zeros.\n"
              << std::endl;
}

int getMenuChoice()
{
    std::cout << "Your choice: ";
    int choice;
    std::cin >> choice;

    return choice;
}

void processNumberByChoice(int num, int choice)
{
    switch (choice)
    {
    case 1:
        std::cout << "\nNumber of digits : " << countDigits(num) << std::endl;
        break;
    case 2:
        std::cout << "\nSum of digits    : " << sumDigits(num) << std::endl;
        break;
    case 3:
        std::cout << "\nAverage of digits: " << averageDigits(num) << std::endl;
        break;
    case 4:
        std::cout << "\nNumber of zeros  : " << countZeros(num) << std::endl;
        break;
    default:
        std::cout << "\nUnknown command! Terminating... " << countZeros(num) << std::endl;
        break;
    }
}

int main()
{
    int number = getIntFromUser();
    printMenu();
    processNumberByChoice(number, getMenuChoice());

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}