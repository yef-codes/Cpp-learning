/*
 ==============================================================================
 Name        : Homework_4-Task_5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program, that displays a multiplication table for the
               entered number n. For example, for n=7:
               7 x 1 = 7;
               7 x 2 = 14;
               7 x 3 = 21;
               and so on.
 ==============================================================================
 */

#include <iostream>

void displayMultiTable(int n)
{
    std::cout << "\nMultiplication table of " << n << " :\n";

    for (int i = 1; i <= 10; i++)
    {
        std::cout << n << " x " << i << " = " << n * i << "\n";
    }

    std::cout << std::endl;
}

int main()
{
    std::cout << "Enter a number to display its multiplication table: ";
    int num;
    std::cin >> num;

    displayMultiTable(num);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;
              
    return 0;
}