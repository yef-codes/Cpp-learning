/*
 ============================================================================
 Name        : Homework_1-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Given three resistances R1, R2, R3. Calculate the value of R0
               using the formula: 1/R0 = 1/R1 + 1/R2 + 1/R3.
               Test case: R1=2, R2=4, R3=8, R0=1.142857.
 ============================================================================
 */

#include <iostream>
#include <string>

float getResistance(std::string name)
{
    while (true)
    {
        std::cout << "Enter " << name << " value:" << std::endl;

        float res;
        std::cin >> res;

        if (res > 0)
        {
            return res;
        }
        else
        {
            std::cout << "Resistance must be over 0. Enter correct value!" << std::endl;
        }
    }
}

int main()
{
    float res1 = getResistance("R1");
    float res2 = getResistance("R2");
    float res3 = getResistance("R3");

    float res0 = res1 * res2 * res3 / (res2 * res3 + res1 * res3 + res1 * res2);

    std::cout << "R0 = " << res0 << std::endl;

    return 0;
}