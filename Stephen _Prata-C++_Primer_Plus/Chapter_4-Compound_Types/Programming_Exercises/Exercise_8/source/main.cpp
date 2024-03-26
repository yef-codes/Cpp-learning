/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.8
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Do Programming Exercise 7 but use new to allocate a structure
               instead of declaring a structure variable.Also have the program
               request the pizza diameter before it requests the pizza company
               name.
 ==============================================================================
 */

#include <iostream>
#include <string>

struct Pizza
{
    std::string company_name;
    float diameter_cm;
    int weight_g;
};

void displayPizza(Pizza *pizza);

int main()
{
    Pizza *pizza_sample = new Pizza;

    std::cout << "Enter diameter (cm) of the pizza sample: ";
    std::cin >> pizza_sample->diameter_cm;
    std::cin.get();

    std::cout << "Enter manufacturer of the pizza sample: ";
    std::getline(std::cin, pizza_sample->company_name);

    std::cout << "Enter weight (g) of the pizza sample: ";
    std::cin >> pizza_sample->weight_g;

    displayPizza(pizza_sample);

    delete pizza_sample;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

void displayPizza(Pizza *pizza)
{
    std::cout << "\nCompany      : " << pizza->company_name
              << "\nDiameter (cm): " << pizza->diameter_cm
              << "\nWeight (g)   : " << pizza->weight_g
              << std::endl;
}