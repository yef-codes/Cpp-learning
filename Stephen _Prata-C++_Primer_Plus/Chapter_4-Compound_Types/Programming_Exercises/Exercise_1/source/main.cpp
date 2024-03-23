/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a C++ program that requests and displays information as
               shown in the following example of output:
                What is your first name? Betty Sue
                What is your last name? Yewe
                What letter grade do you deserve? B
                What is your age? 22
                Name: Yewe, Betty Sue
                Grade: C
                Age: 22
               Note that the program should be able to accept first names that
               comprise more than one word. Also note that the program adjusts
               the grade downward—that is, up one letter. Assume that the user
               requests an A, a B, or a C so that you don’t have to worry about
               the gap between a D and an F.
 ==============================================================================
 */

#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your first name? ";
    std::string first_name;
    std::getline(std::cin, first_name);

    std::cout << "What is your last name? ";
    std::string last_name;
    std::getline(std::cin, last_name);

    std::cout << "What letter grade do you deserve? ";
    char grade;
    std::cin >> grade;

    std::cout << "What is your age? ";
    short age;
    std::cin >> age;

    std::cout << "Name: " << last_name << ", " << first_name << std::endl;
    std::cout << "Grade: " << static_cast<char>(grade + 1) << std::endl;
    std::cout << "Age: " << age << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}