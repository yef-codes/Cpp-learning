/*
 ==============================================================================
 Name        : Homework_6-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program, that draws a line of a user-defined symbol. The
               line may be vertical or horizontal. The drawing speed may be fast,
               normal or slow. Create a set of user menus to get necessary
               parameters.
 ==============================================================================
 */

#include <iostream>
#include <Windows.h>

#define LINE_LEN 10
#define SPEED_FACTOR 5000

enum LINE_TYPE
{
    UNKNOWN,
    VERTICAL,
    HORIZONTAL
};

enum DRAWING_SPEED
{
    UNDEFINED,
    SLOW = 5,
    NORMAL = 10,
    FAST = 15
};

char getUserChar()
{
    char userChar;
    std::cin >> userChar;

    return userChar;
}

void printLineTypes()
{
    std::cout << "1 - Vertical line.\n"
              << "2 - Horizontal line.\n"
              << std::endl;
}

void printDrawingSpeeds()
{
    std::cout << "1 - Slow speed.\n"
              << "2 - Normal speed.\n"
              << "3 - Fast speed.\n"
              << std::endl;
}

LINE_TYPE getLineType(char ch)
{
    LINE_TYPE lineType;

    switch (ch)
    {
    case '1':
        lineType = LINE_TYPE::VERTICAL;
        break;
    case '2':
        lineType = LINE_TYPE::HORIZONTAL;
        break;
    default:
        lineType = LINE_TYPE::UNKNOWN;
        break;
    }

    return lineType;
}

DRAWING_SPEED getDrawingSpeed(char ch)
{
    DRAWING_SPEED drawingSpeed;

    switch (ch)
    {
    case '1':
        drawingSpeed = DRAWING_SPEED::SLOW;
        break;
    case '2':
        drawingSpeed = DRAWING_SPEED::NORMAL;
        break;
    case '3':
        drawingSpeed = DRAWING_SPEED::FAST;
        break;
    default:
        drawingSpeed = DRAWING_SPEED::UNDEFINED;
        break;
    }

    return drawingSpeed;
}

void drawLine(int length, char symb, LINE_TYPE type, DRAWING_SPEED speed)
{
    for (int i = 0; i < length; i++)
    {
        if (type == LINE_TYPE::VERTICAL)
        {
            std::cout << symb << "\n";
        }
        else
        {
            std::cout << symb;
        }

        Sleep(SPEED_FACTOR / speed);
    }

    std::cout << std::endl;
}

int main()
{
    std::cout << "\nChoose a line type:" << std::endl;
    printLineTypes();
    std::cout << "Your choice: ";
    char userInput = getUserChar();
    LINE_TYPE type = getLineType(userInput);
    if (type == LINE_TYPE::UNKNOWN)
    {
        std::cout << "Unknown line type! Terminating..." << std::endl;
        return -1;
    }

    std::cout << "\nChoose a drawing speed:" << std::endl;
    printDrawingSpeeds();
    std::cout << "Your choice: ";
    userInput = getUserChar();
    DRAWING_SPEED speed = getDrawingSpeed(userInput);
    if (speed == DRAWING_SPEED::UNDEFINED)
    {
        std::cout << "Unknown drawing speed! Terminating..." << std::endl;
        return -1;
    }

    std::cout << "\nEnter a drawing symbol: ";
    userInput = getUserChar();

    std::cout << "\nDrawing the line...\n";
    drawLine(LINE_LEN, userInput, type, speed);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}