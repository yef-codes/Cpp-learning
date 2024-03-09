/*
==============================================================================
Name        : Homework_3-Task_3
Author      : Viacheslav Yefisko
Version     : 0
Copyright   : MIT License
Description : Some programmer earns $50 for every 100 lines of code he writes.
              For every third late arrival, he is fined for $20. Implement a
              menu of choices:
                - the user enters programmer's desired income and the number of
                lates. Calculate how many lines of code he needs to write;
                - the user enters the number of lines of code written by the
                programmer and the desired income. Calculate how many times the
                programmer can be late;
                - the user enters the number of lines of code and the number of
                lates. Calculate how much money the programmer will earn and
                whether he will earn at all.
==============================================================================
*/

#include <iostream>

#define PAYMENT_LINES_EACH 100
#define PAYMENT_FOR_100_LINES 50
#define FINE_FOR_LATE 20
#define FINED_LATE_EACH 3

// In general case Income = (lines / 100) * 50 - (lates / 3) * 20.
// All values are calculated out of this formula.

int computeLines(int income, int lates)
{
    return ((income + (lates * FINE_FOR_LATE) / FINED_LATE_EACH) * PAYMENT_LINES_EACH) / PAYMENT_FOR_100_LINES;
}

int computeLates(int lines, int income)
{
    return ((income - (lines / PAYMENT_LINES_EACH) * PAYMENT_FOR_100_LINES) * FINED_LATE_EACH) / FINE_FOR_LATE;
}

int computeIncome(int lines, int lates)
{
    return (lines / PAYMENT_LINES_EACH) * PAYMENT_FOR_100_LINES - (lates / FINED_LATE_EACH) * FINE_FOR_LATE;
}

int getUserIncome()
{
    std::cout << "\nEnter desired income: ";
    int income;
    std::cin >> income;

    return income;
}

int getUserLates()
{
    std::cout << "\nEnter number of lates: ";
    int lates;
    std::cin >> lates;

    return lates;
}

int getUserLines()
{
    std::cout << "\nEnter number of lines: ";
    int lines;
    std::cin >> lines;

    return lines;
}

void computeLinesOption()
{
    int income = getUserIncome();
    int lates = getUserLates();

    std::cout << "\nThe programmer must write " << computeLines(income, lates) << " lines of code." << std::endl;
}

void computeLatesOption()
{
    int lines = getUserLines();
    int income = getUserIncome();

    std::cout << "\nThe programmer can be late " << computeLates(lines, income) << " times." << std::endl;
}

void computeIncomeOption()
{
    int lines = getUserLines();
    int lates = getUserLates();

    int income = computeIncome(lines, lates);
    if (income < 0)
    {
        income = 0;
    }

    std::cout << "\nThe programmer will earn " << income << "." << std::endl;
}

void printOptions()
{
    std::cout << "1 - Number of lines via income and lates.\n"
              << "2 - Number of lates via income and lines.\n"
              << "3 - Income via lines and lates.\n"
              << std::endl;
}

char getUserChar()
{
    char userChar;
    std::cin >> userChar;

    return userChar;
}

void processUserInput(char input)
{
    switch (input)
    {
    case '1':
        computeLinesOption();
        break;
    case '2':
        computeLatesOption();
        break;
    case '3':
        computeIncomeOption();
        break;
    default:
        std::cout << "\nUnknown command entered !!!";
        break;
    }
}

int main()
{
    std::cout << "\nChoose an option to calculate:" << std::endl;
    printOptions();
    std::cout << "Your choice: ";
    char userInput = getUserChar();

    processUserInput(userInput);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}