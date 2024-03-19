/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.3-ex.2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a short program that asks for your height in feet and
               inches and your weight in pounds. (Use three variables to store
               the information.) Have the program report your body mass index
               (BMI). To calculate the BMI, first convert your height in feet
               and inches to your height in inches (1 foot = 12 inches). Then
               convert your height in inches to your height in meters by
               multiplying by 0.0254. Then convert your weight in pounds into
               your mass in kilograms by dividing by 2.2. Finally, compute your
               BMI by dividing your mass in kilograms by the square of your
               height in meters. Use symbolic constants to represent the various
               conversion factors.
 ==============================================================================
 */

#include <iostream>

const int INCHES_IN_FOOT = 12;
const float METERS_IN_INCH = 0.0254;
const float POUNDS_IN_KILOGRAM = 2.2;

double feet_to_inches(double feet, double inches);
double inches_to_meters(double inches);
double pounds_to_kilogram(double pounds);
double compute_bmi(double weight_kg, double height_m);

int main()
{
    std::cout << "Enter your height:" << std::endl;

    std::cout << "feet part: ";
    float feet;
    std::cin >> feet;

    std::cout << "inches part: ";
    float inches;
    std::cin >> inches;

    std::cout << "Enter your weight in pounds: ";
    float pounds;
    std::cin >> pounds;

    float height_inches = feet_to_inches(feet, inches);
    float height_meters = inches_to_meters(height_inches);
    float weight_kilograms = pounds_to_kilogram(pounds);
    float bmi = compute_bmi(weight_kilograms, height_meters);

    std::cout << "Your BMI is " << bmi << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}

double feet_to_inches(double feet, double inches)
{
    return feet * INCHES_IN_FOOT + inches;
}

double inches_to_meters(double inches)
{
    return inches * METERS_IN_INCH;
}

double pounds_to_kilogram(double pounds)
{
    return pounds / POUNDS_IN_KILOGRAM;
}

double compute_bmi(double weight_kg, double height_m)
{
    return weight_kg / height_m * height_m;
}