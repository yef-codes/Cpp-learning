/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.6
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : The CandyBar structure contains three members, as described in
               Programming Exercise 5. Write a program that creates an array of
               three CandyBar structures, initializes them to values of your
               choice, and then displays the contents of each structure.
 ==============================================================================
 */

#include <iostream>
#include <string>

struct CandyBar
{
    std::string brand_name;
    float weight_g;
    int calories;
};

void displayCandyBar(CandyBar candy);

int main()
{
    CandyBar snacks[3] = {
        {"Snack 1", 1.3, 150},
        {"Snack 2", 2.3, 250},
        {"Snack 3", 3.3, 350}};

    std::cout << "\nSnacks info:\n";

    std::cout << "\nSnack 1 info:";
    displayCandyBar(snacks[0]);

    std::cout << "\nSnack 2 info:";
    displayCandyBar(snacks[1]);

    std::cout << "\nSnack 3 info:";
    displayCandyBar(snacks[2]);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

void displayCandyBar(CandyBar candy)
{
    std::cout << "\nBrand     : " << candy.brand_name
              << "\nWeight (g): " << candy.weight_g
              << "\nCalories  : " << candy.calories
              << std::endl;
}