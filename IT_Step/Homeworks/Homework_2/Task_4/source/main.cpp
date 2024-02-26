/*
 ==============================================================================
 Name        : Homework_2-Task_4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that calculates a total cost of a phone call.
               The price per minute and the duration of call (min,sec) are
               entered from the keyboard.
 ==============================================================================
 */

#include <iostream>

double getPricePerMinute()
{
    while (true)
    {
        std::cout << "Enter price of call per minute: ";
        double price;
        std::cin >> price;

        if (price >= 0)
        {
            return price;
        }
        else
        {
            std::cout << "Price must be a non-negative number. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

double computePricePerSecond(double pricePerMinute)
{
    return pricePerMinute / 60;
}

double getTime()
{
    while (true)
    {
        std::cout << "Enter time (min.sec): ";
        double time;
        std::cin >> time;

        if (time >= 0)
        {
            return time;
        }
        else
        {
            std::cout << "Time must be a non-negative number. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

int convertMinutesToSeconds(double minutes)
{
    int minutesPart = minutes / 1;
    int secondsPart = (minutes - minutesPart) * 100;

    return minutesPart * 60 + secondsPart;
}

double computeTotalCallCost(double pricePerMinute, double durationMinutes)
{
    double pricePerSecond = computePricePerSecond(pricePerMinute);
    int durationSeconds = convertMinutesToSeconds(durationMinutes);

    return pricePerSecond * durationSeconds;
}

int main()
{
    double pricePerMinute = getPricePerMinute();
    double callMinutes = getTime();

    double totalCost = computeTotalCallCost(pricePerMinute, callMinutes);

    std::cout << "Total cost of the call: " << totalCost
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}