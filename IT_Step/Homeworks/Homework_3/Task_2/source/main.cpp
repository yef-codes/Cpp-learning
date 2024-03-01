/*
 ==============================================================================
 Name        : Homework_3-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program to calculate a phone call cost for various mobile
               operators. The user enters a phone call cost and chooses incoming
               and outcoming operator. Calculate the cost based on cross tariffs
               of these operators and display it on the screen.
 ==============================================================================
 */

// These names are for demonstration purposes only:
// OPERATOR_1
// OPERATOR_2
// OPERATOR_3

// These tariff rates are for demonstration purposes only:
// Phone calls inside the OPERATOR_1 network have a tariff rate of '1.0', and
// have a '2.0' for the outcoming calls to other operators networks.
// Phone calls inside the OPERATOR_2 network have a tariff rate of '1.0', and
// have a '3.0' for the outcoming calls to other operators networks.
// Phone calls inside the OPERATOR_3 network have a tariff rate of '0.0', and
// have a '5.0' for the outcoming calls to other operators networks.

#include <iostream>
#include <string>

#define RATE_1_TO_1 1.0
#define RATE_1_TO_2 2.0
#define RATE_1_TO_3 2.0

#define RATE_2_TO_1 3.0
#define RATE_2_TO_2 1.0
#define RATE_2_TO_3 3.0

#define RATE_3_TO_1 5.0
#define RATE_3_TO_2 5.0
#define RATE_3_TO_3 0.0

#define ERROR_RATE -1

enum OPERATOR
{
    OPERATOR_1 = 1,
    OPERATOR_2,
    OPERATOR_3
};

void printOperators()
{
    std::cout << "1 - Operator_1\n"
              << "2 - Operator_2\n"
              << "3 - Operator_3\n"
              << std::endl;
}

int getUserChoice()
{
    std::cout << "Your choice: ";
    int choice;
    std::cin >> choice;

    return choice;
}

float getUserCost()
{
    while (true)
    {
        std::cout << "Enter cost of the call: ";
        float cost;
        std::cin >> cost;

        if (cost >= 0)
        {
            return cost;
        }
        else
        {
            std::cout << "The cost must be a non-negative number. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

float computeTariffRate(int operator_1, int operator_2)
{
    float rate;

    if (operator_1 == OPERATOR::OPERATOR_1)
    {
        if (operator_2 == OPERATOR::OPERATOR_1)
        {
            rate = RATE_1_TO_1;
        }
        else if (operator_2 == OPERATOR::OPERATOR_2)
        {
            rate = RATE_1_TO_2;
        }
        else if (operator_2 == OPERATOR::OPERATOR_3)
        {
            rate = RATE_1_TO_3;
        }
        else
        {
            rate = ERROR_RATE;
        }
    }
    else if (operator_1 == OPERATOR::OPERATOR_2)
    {
        if (operator_2 == OPERATOR::OPERATOR_1)
        {
            rate = RATE_2_TO_1;
        }
        else if (operator_2 == OPERATOR::OPERATOR_2)
        {
            rate = RATE_2_TO_2;
        }
        else if (operator_2 == OPERATOR::OPERATOR_3)
        {
            rate = RATE_2_TO_3;
        }
        else
        {
            rate = ERROR_RATE;
        }
    }
    else if (operator_1 == OPERATOR::OPERATOR_3)
    {
        if (operator_2 == OPERATOR::OPERATOR_1)
        {
            rate = RATE_3_TO_1;
        }
        else if (operator_2 == OPERATOR::OPERATOR_2)
        {
            rate = RATE_3_TO_2;
        }
        else if (operator_2 == OPERATOR::OPERATOR_3)
        {
            rate = RATE_3_TO_3;
        }
        else
        {
            rate = ERROR_RATE;
        }
    }
    else
    {
        rate = ERROR_RATE;
    }

    return rate;
}

float computeTotalCost(float initCost, float rate)
{
    return initCost * rate;
}

int main()
{
    float callCost = getUserCost();

    std::cout << "Choose an outgoing call operator:" << std::endl;
    printOperators();
    int outOp = getUserChoice();

    std::cout << "Choose an incoming call operator:" << std::endl;
    printOperators();
    int inOp = getUserChoice();

    float rate = computeTariffRate(outOp, inOp);

    std::cout << "Total cost of the call: " << computeTotalCost(callCost, rate) << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}