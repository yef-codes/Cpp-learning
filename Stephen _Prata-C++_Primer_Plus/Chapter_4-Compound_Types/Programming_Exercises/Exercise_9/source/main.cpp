/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.9
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Do Programming Exercise 6, but instead of declaring an array of
               three CandyBar structures, use new to allocate the array
               dynamically.
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
    CandyBar *snacks = new CandyBar[3]{
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

    delete[] snacks;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

void displayCandyBar(CandyBar candy)
{
    std::cout << "\nBrand : " << candy.brand_name
              << "\nWeight: " << candy.weight_g
              << "\nBrand : " << candy.calories << std::endl;
}