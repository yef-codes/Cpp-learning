/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.2-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that has main() call a user-defined function that
               takes a Celsius temperature value as an argument and then returns
               the equivalent Fahrenheit value. The program should request the
               Celsius value as input from the user and display the result, as
               shown in the following code:
                Please enter a Celsius value: 20
                20 degrees Celsius is 68 degrees Fahrenheit.
               For reference, here is the formula for making the conversion:
               Fahrenheit = 1.8 × degrees Celsius + 32.0
 ==============================================================================
 */

#include <iostream>

double celcius_to_fahrenheit(double celcius);

int main()
{
    std::cout << "Please enter a Celsius value: ";
    double celcius;
    std::cin >> celcius;

    std::cout << celcius << " degrees Celsius is "
              << celcius_to_fahrenheit(celcius) << " degrees Fahrenheit."
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

double celcius_to_fahrenheit(double celcius)
{
    return 1.8 * celcius + 32.0;
}