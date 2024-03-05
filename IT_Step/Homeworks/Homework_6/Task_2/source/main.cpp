/*
 ==============================================================================
 Name        : Homework_6-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a «Roll the dice» game. The user and the computer roll
               two dices each for three rounds. The winner is defined by the
               points total. Create a game visualisation.
 ==============================================================================
 */

#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <random>

#define DICE_VAL_MIN 1
#define DICE_VAL_MAX 6
#define ROUNDS 3
#define DICES 2

void drawDice(int diceNum)
{
    switch (diceNum)
    {
    case 1:
        std::cout << " _________\n"
                  << "|         |\n"
                  << "|         |\n"
                  << "|    X    |\n"
                  << "|         |\n"
                  << "|_________|\n";
        break;
    case 2:
        std::cout << " _________\n"
                  << "|         |\n"
                  << "|     X   |\n"
                  << "|         |\n"
                  << "|   X     |\n"
                  << "|_________|\n";
        break;
    case 3:
        std::cout << " _________\n"
                  << "|         |\n"
                  << "|     X   |\n"
                  << "|    X    |\n"
                  << "|   X     |\n"
                  << "|_________|\n";
        break;
    case 4:
        std::cout << " _________\n"
                  << "|         |\n"
                  << "|   X X   |\n"
                  << "|         |\n"
                  << "|   X X   |\n"
                  << "|_________|\n";
        break;
    case 5:
        std::cout << " _________\n"
                  << "|         |\n"
                  << "|   X X   |\n"
                  << "|    X    |\n"
                  << "|   X X   |\n"
                  << "|_________|\n";
        break;
    case 6:
        std::cout << " _________\n"
                  << "|         |\n"
                  << "|   X X   |\n"
                  << "|   X X   |\n"
                  << "|   X X   |\n"
                  << "|_________|\n";
        break;
    default:
        std::cout << "ERROR! Unsupported dice value!" << std::endl;
        break;

        std::cout << std::endl;
    }
}

int rollDice(int minVal, int maxVal)
{
    std::random_device dev;
    std::mt19937 rgen(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(minVal, maxVal);

    return dist(rgen);
}

int makePlayerTurn()
{
    int turnResult = 0;

    // Player rolls DICES dices each turn.
    for (int dice = 0; dice < DICES; dice++)
    {
        int rollResult = rollDice(DICE_VAL_MIN, DICE_VAL_MAX);
        drawDice(rollResult);
        turnResult += rollResult;

        Sleep(750); // Delay for the dice drop animation.
    }

    return turnResult;
}

void defineWinner(int humanPoints, int computerPoints)
{
    std::cout << "\nGAME RESULTS"
              << "\nHuman's score    : " << humanPoints
              << "\nComputer's score : " << computerPoints
              << std::endl;

    if (humanPoints > computerPoints)
    {
        std::cout << "HUMAN PLAYER WON !!!" << std::endl;
    }
    else if (humanPoints < computerPoints)
    {
        std::cout << "COMPUTER PLAYER WON !!!" << std::endl;
    }
    else
    {
        std::cout << "IT'S A DRAW !!!" << std::endl;
    }
}

void printGameWelcome()
{
    std::cout << "\nWELCOME TO \"ROLL THE DICES\" GAME !!!\n"
              << "-------------------------------\n"
              << "The rules are simple:\n"
              << "The human and the computer roll the dices\n"
              << ROUNDS << " times each and the winner is defined by\n"
              << "the points total.\n"
              << "-------------------------------"
              << std::endl;
}

void game()
{
    printGameWelcome();

    std::cout << "Press any key to start..."
              << std::endl;
    getch();

    std::cout << "THE GAME HAS STARTED !!!\n"
              << "-------------------------------"
              << std::endl;

    int humanTotal = 0;
    int computerTotal = 0;

    // Players roll the dices one by one for ROUNDS times.
    for (int round = 0; round < ROUNDS; round++)
    {
        std::cout << "\nROUND " << round + 1
                  << std::endl;

        Sleep(1000);
        std::cout << "\nPress any key to roll the dices..."
                  << std::endl;
        getch();

        humanTotal += makePlayerTurn();

        Sleep(2000); // Delay for computer to take a turn.
        std::cout << "\nNow it's computer's turn..."
                  << std::endl;
        computerTotal += makePlayerTurn();
    }

    Sleep(2000); // Delay to define a winner.
    defineWinner(humanTotal, computerTotal);
}

int main()
{
    game();

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}