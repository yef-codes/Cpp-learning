/*
 ==============================================================================
 Name        : Homework_2-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a programm that converts float number entered with keyboard
               into currency format. For example, number 12.5 must be converted
               into "12 dollars 50 cents".
 ==============================================================================
 */

#include <iostream>

float getMoneyAmount()
{
    while (true)
    {
        std::cout << "Enter money amount in 0.00 format: ";
        float moneyAmount;
        std::cin >> moneyAmount;

        if (moneyAmount >= 0)
        {
            return moneyAmount;
        }
        else
        {
            std::cout << "Money amount must be a non-negative number. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

int main()
{
    float moneyAmount = getMoneyAmount();

    int whole = moneyAmount / 1;
    int part = (moneyAmount - whole) * 100;

    std::cout << moneyAmount << " equals to: "
              << whole << " dollars "
              << part << " cents"
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}