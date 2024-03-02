/*
 ==============================================================================
 Name        : Homework_5-Task_3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program, that displays a chessboard with a user-defined
               cell size.
 ==============================================================================
 */

#include <iostream>

#define BOARD_WIDTH 8
#define BOARD_HEIGHT 8
#define WHITE_CELL_SYMBOL ' '
#define BLACK_CELL_SYMBOL 'X'

int getUserCellSize()
{
    while (true)
    {
        std::cout << "Enter the cell size: ";
        int size;
        std::cin >> size;

        if (size > 0)
        {
            return size;
        }
        else
        {
            std::cout << "The cell size must be greater than zero. "
                      << "Please enter the correct value!"
                      << std::endl;
        }
    }
}

void displayChessBoard(int cellSize)
{
    for (int i = 0; i < BOARD_HEIGHT; i++)
    {
        for (int j = 0; j < cellSize; j++)
        {
            for (int k = 0; k < BOARD_WIDTH; k++)
            {
                for (int l = 0; l < cellSize; l++)
                {
                    if (i % 2 == 0)
                    {
                        if (k % 2 == 0)
                        {
                            std::cout << WHITE_CELL_SYMBOL;
                        }
                        else
                        {
                            std::cout << BLACK_CELL_SYMBOL;
                        }
                    }
                    else
                    {
                        if (k % 2 == 0)
                        {
                            std::cout << BLACK_CELL_SYMBOL;
                        }
                        else
                        {
                            std::cout << WHITE_CELL_SYMBOL;
                        }
                    }
                }
            }
            std::cout << std::endl;
        }
    }
}

int main()
{
    int cellSize = getUserCellSize();
    displayChessBoard(cellSize);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}