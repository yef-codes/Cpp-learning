/*
 ==============================================================================
 Name        : Homework_3-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Some character is entered by the keyboard. Define what it is:
               letter, digit, punctuation symbol or other.
 ==============================================================================
 */

#include <iostream>
#include <cctype>

char getCharFromUser()
{
    std::cout << "Enter a character: ";
    char ch;
    std::cin >> ch;

    return ch;
}

void classifyCharacter(char ch)
{
    if (isalpha(ch))
    {
        std::cout << ch << " is a letter." << std::endl;
    }
    else if (isdigit(ch))
    {
        std::cout << ch << " is a digit." << std::endl;
    }
    else if (ispunct(ch))
    {
        std::cout << ch << " is a punctuation symbol." << std::endl;
    }
    else
    {
        std::cout << ch << " is a special symbol." << std::endl;
    }
}

int main()
{
    char ch = getCharFromUser();
    classifyCharacter(ch);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}