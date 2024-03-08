/*
 ==============================================================================
 Name        : Homework_7-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : The user enters a company's income during the year (12 months).
               Then they enter a range (for example, 3 and 6 - search between
               the 3rd and the 6th month). The program must search in the
               selected range and find the month when the income was maximum
               and the month when the income was minimal.
 ==============================================================================
 */

#include <iostream>
#include <string>

#define MONTHS 12

std::string printNumeralSuffix(int num)
{
    return ((num > 3) ? "th" : ((num == 1) ? "st" : ((num == 2) ? "nd" : "rd")));
}

void fillArrWithUserInput(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter income in the " << i + 1
                  << printNumeralSuffix(i + 1)
                  << " month: ";

        std::cin >> array[i];
    }
}

void printArr(int array[], int size)
{
    std::cout << "Month"
              << "\tIncome" << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << '\t' << array[i] << std::endl;
    }

    std::cout << std::endl;
}

int arrMaxVal(int array[], int size, int firstIndex, int lastIndex)
{
    int maxVal = array[firstIndex];

    for (int i = firstIndex; i <= lastIndex; i++)
    {
        if (array[i] > maxVal)
        {
            maxVal = array[i];
        }
    }

    return maxVal;
}

int arrMaxValIndex(int array[], int size, int firstIndex, int lastIndex)
{
    int index = firstIndex;
    int maxVal = array[firstIndex];

    for (int i = firstIndex; i <= lastIndex; i++)
    {
        if (array[i] > maxVal)
        {
            index = i;
            maxVal = array[i];
        }
    }

    return index;
}

int arrMinVal(int array[], int size, int firstIndex, int lastIndex)
{
    int minVal = array[firstIndex];

    for (int i = firstIndex; i <= lastIndex; i++)
    {
        if (array[i] < minVal)
        {
            minVal = array[i];
        }
    }

    return minVal;
}

int arrMinValIndex(int array[], int size, int firstIndex, int lastIndex)
{
    int index = firstIndex;
    int minVal = array[firstIndex];

    for (int i = firstIndex; i <= lastIndex; i++)
    {
        if (array[i] < minVal)
        {
            index = i;
            minVal = array[i];
        }
    }

    return index;
}

int getUserMonth()
{
    std::cout << "Enter number of the month: ";
    int monthNum;
    std::cin >> monthNum;

    return monthNum;
}

int main()
{
    int incomePeriod[MONTHS];
    fillArrWithUserInput(incomePeriod, MONTHS);

    std::cout << "\nData collected successfully. The records are:" << std::endl;
    printArr(incomePeriod, MONTHS);

    std::cout << "\nThe first month of the range." << std::endl;
    int firstMonth = getUserMonth();

    std::cout << "\nThe last month of the range." << std::endl;
    int lastMonth = getUserMonth();

    int minIncome = arrMinVal(incomePeriod, MONTHS, firstMonth - 1, lastMonth - 1);
    int maxIncome = arrMaxVal(incomePeriod, MONTHS, firstMonth - 1, lastMonth - 1);

    int minIncomeMonth = arrMinValIndex(incomePeriod, MONTHS, firstMonth - 1, lastMonth - 1) + 1;
    int maxIncomeMonth = arrMaxValIndex(incomePeriod, MONTHS, firstMonth - 1, lastMonth - 1) + 1;

    std::cout << "\nIn the range of " << firstMonth << printNumeralSuffix(firstMonth)
              << " and " << lastMonth << printNumeralSuffix(lastMonth) << " months "
              << "\nmin income " << minIncome << " was in the " << minIncomeMonth
              << "\nmax income " << maxIncome << " was in the " << maxIncomeMonth
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}