/*
 ==============================================================================
 Name        : Homework_8-Task_3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : The user enters data about his expenses in dollars during the
               week (every day). Write a program that calculates:
                - the total amount spent by the user during the week;
                - average (per week) amount spent;
                - the number of days and their names when the expense per day
                exceeded $100.
 ==============================================================================
 */

#include <iostream>
#include <string>

#define DAYS_IN_WEEK 7
#define TRACK_EXPENSE_OVER 100.0f

std::string getDayOfWeek(int dayNum)
{
    std::string day;

    switch (dayNum)
    {
    case 0:
        day = "Monday";
        break;
    case 1:
        day = "Tuesday";
        break;
    case 2:
        day = "Wednesday";
        break;
    case 3:
        day = "Thursday";
        break;
    case 4:
        day = "Friday";
        break;
    case 5:
        day = "Saturday";
        break;
    case 6:
        day = "Sunday";
        break;
    default:
        day = "Unknown";
        break;
    }

    return day;
}

void fillArrWithUserInput(float array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter expense for the " << getDayOfWeek(i) << ": ";
        std::cin >> array[i];
    }
}

float totalAmount(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

float averageAmount(float arr[], int size)
{
    return totalAmount(arr, size) / size;
}

int daysWhenExpenseOverValue(float arr[], int size, float value)
{
    int daysCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > value)
        {
            daysCount++;
        }
    }

    return daysCount;
}

void printDaysWhenExpenseOverValue(float arr[], int size, float value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > value)
        {
            std::cout << getDayOfWeek(i) << std::endl;
        }
    }
}

int main()
{
    float weekExpenses[DAYS_IN_WEEK];
    fillArrWithUserInput(weekExpenses, DAYS_IN_WEEK);

    std::cout << "\nFor the week you spent in total   : "
              << totalAmount(weekExpenses, DAYS_IN_WEEK) << std::endl;
    std::cout << "The average amount spent          : "
              << averageAmount(weekExpenses, DAYS_IN_WEEK) << std::endl;
    std::cout << "Your expenses exceeded " << TRACK_EXPENSE_OVER << "$ on "
              << daysWhenExpenseOverValue(weekExpenses, DAYS_IN_WEEK, TRACK_EXPENSE_OVER)
              << " days:\n";
    printDaysWhenExpenseOverValue(weekExpenses, DAYS_IN_WEEK, TRACK_EXPENSE_OVER);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}