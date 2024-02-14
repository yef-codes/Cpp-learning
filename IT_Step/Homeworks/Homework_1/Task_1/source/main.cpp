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

        float R1;
        std::cin >> R1;

        if (R1 > 0)
        {
            return R1;
        }
        else
        {
            std::cout << "Resistance must be over 0. Enter correct value!" << std::endl;
        }
    }
}

int main()
{
    float R1 = getResistance("R1");
    float R2 = getResistance("R2");
    float R3 = getResistance("R3");

    float R0 = R1 * R2 * R3 / (R2 * R3 + R1 * R3 + R1 * R2);

    std::cout << "R0 = " << R0 << std::endl;

    return 0;
}