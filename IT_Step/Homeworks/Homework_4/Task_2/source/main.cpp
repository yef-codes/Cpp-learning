/*
 ==============================================================================
 Name        : Homework_4-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that gets two integer numbers x and y, and then
               calculates x to y power.
 ==============================================================================
 */

#include <iostream>

int power(int x, int y)
{
    int res = 1;

    for (int i = y; i > 0; i--)
    {
        res *= x;
    }

    return res;
}

int main()
{
    std::cout << "Enter integers x and y: ";
    int x, y;
    std::cin >> x >> y;

    int res = power(x, y);
    
    std::cout << x << " ^ " << y << " = " << res
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}