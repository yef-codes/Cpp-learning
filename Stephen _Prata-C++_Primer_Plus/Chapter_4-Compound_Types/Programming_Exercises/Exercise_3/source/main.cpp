/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.4-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter his or her first name
               and then last name, and that then constructs, stores, and displays
               a third string, consisting of the user’s last name followed by a
               comma, a space, and first name. Use char arrays and functions from
               the cstring header file.A sample run could look like this:
                Enter your first name: Flip
                Enter your last name: Fleming
                Here’s the information in a single string: Fleming, Flip
 ==============================================================================
 */

#include <iostream>
#include <cstring>

const int NAME_LEN = 20;
const char SEPARATOR_STRING[] = {", "};

int main()
{
    std::cout << "Enter your first name: ";
    char first_name[NAME_LEN + 1];
    std::cin.get(first_name, NAME_LEN + 1).get();

    std::cout << "Enter your last name: ";
    char last_name[NAME_LEN + 1];
    std::cin.get(last_name, NAME_LEN + 1).get();

    char full_name[2 * NAME_LEN + strlen(SEPARATOR_STRING) + 1];
    strcpy(full_name, last_name);
    strcat(full_name, SEPARATOR_STRING);
    strcat(full_name, first_name);

    std::cout << "Here’s the information in a single string: " << full_name
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}