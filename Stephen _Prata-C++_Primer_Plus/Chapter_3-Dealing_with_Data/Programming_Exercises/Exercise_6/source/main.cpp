/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.3-ex.6
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks how many miles you have driven and how
               many gallons of gasoline you have used and then reports the miles
               per gallon your car has gotten. Or, if you prefer, the program
               can request distance in kilometers and petrol in liters and then
               report the result European style, in liters per 100 kilometers.
 ==============================================================================
 */

#include <iostream>

double calculate_miles_per_gallon(int miles, int gallons);

int main()
{
    std::cout << "Enter miles driven: ";
    int miles;
    std::cin >> miles;

    std::cout << "Enter gallons of gasoline used: ";
    int gallons;
    std::cin >> gallons;

    std::cout << "Miles per gallon: " << calculate_miles_per_gallon(miles, gallons)
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

double calculate_miles_per_gallon(int miles, int gallons)
{
    return miles / gallons;
}