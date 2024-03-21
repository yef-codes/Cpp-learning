/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.3-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests the user to enter the current world
               population and the current population of the U.S. (or of some
               other nation of your choice). Store the information in variables
               of type long long. Have the program display the percent that the
               U.S. (or other nation’s) population is of the world’s population.
               The output should look something like this:
                Enter the world's population: 6898758899
                Enter the population of the US: 310783781
                The population of the US is 4.50492% of the world population.
               You can use the Internet to get more recent figures.
 ==============================================================================
 */

#include <iostream>

double calculate_percent(long long val_1, long long val_2);

int main()
{
    std::cout << "Enter the current world population: ";
    long long world_pop;
    std::cin >> world_pop;

    std::cout << "Enter the current U.S. population: ";
    long long us_pop;
    std::cin >> us_pop;

    std::cout << "The population of the US is "
              << calculate_percent(us_pop, world_pop)
              << "% of the world population."
              << std::endl;
}

double calculate_percent(long long val_1, long long val_2)
{
    return 100 * static_cast<double>(val_1) / val_2;
}