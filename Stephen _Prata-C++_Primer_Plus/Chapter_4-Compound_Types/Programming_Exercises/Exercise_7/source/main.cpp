/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.7
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : William Wingate runs a pizza-analysis service. For each pizza,
               he needs to record the following information:
                - The name of the pizza company, which can consist of more than
                one word
                - The diameter of the pizza
                - The weight of the pizza
               Devise a structure that can hold this information and write a
               program that uses a structure variable of that type.The program
               should ask the user to enter each of the preceding items of
               information, and then the program should display that information.
               Use cin (or its methods) and cout.
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

void displayPizza(Pizza pizza);

int main()
{
    Pizza pizza_sample;

    std::cout << "Enter manufacturer of the pizza sample: ";
    std::getline(std::cin, pizza_sample.company_name);

    std::cout << "Enter diameter (cm) of the pizza sample: ";
    std::cin >> pizza_sample.diameter_cm;

    std::cout << "Enter weight (g) of the pizza sample: ";
    std::cin >> pizza_sample.weight_g;

    displayPizza(pizza_sample);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

void displayPizza(Pizza pizza)
{
    std::cout << "\nCompany      : " << pizza.company_name
              << "\nDiameter (cm): " << pizza.diameter_cm
              << "\nWeight (g)   : " << pizza.weight_g
              << std::endl;
}