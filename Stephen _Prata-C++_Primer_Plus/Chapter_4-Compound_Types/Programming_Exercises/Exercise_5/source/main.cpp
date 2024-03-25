/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : The CandyBar structure contains three members. The first member
               holds the brand name of a candy bar. The second member holds the
               weight (which may have a fractional part) of the candy bar, and
               the third member holds the number of calories (an integer value)
               in the candy bar. Write a program that declares such a structure
               and creates a CandyBar variable called snack, initializing its
               members to "Mocha Munch", 2.3, and 350, respectively. The
               initialization should be part of the declaration for snack.
               Finally, the program should display the contents of the snack
               variable.
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
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    std::cout << "\nSnack info:";
    displayCandyBar(snack);

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