/*
 ==============================================================================
 Name        : Homework_7-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Create a one-dimensional array and fill it with random numbers.
               Then find and display minimal and maximal values in this array.
 ==============================================================================
 */

#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <random>

#define ARR_SIZE 10
#define ARR_VAL_MIN 1
#define ARR_VAL_MAX 100

int getRandVal(int minVal, int maxVal)
{
    std::random_device dev;
    std::mt19937 rgen(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(minVal, maxVal);

    return dist(rgen);
}

void fillArrWithRandVal(int array[], int size, int minVal, int maxVal)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = getRandVal(minVal, maxVal);
    }
}

void printArr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }

    std::cout << std::endl;
}

int arrMaxVal(int array[], int size)
{
    int maxVal = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > maxVal)
        {
            maxVal = array[i];
        }
    }

    return maxVal;
}

int arrMinVal(int array[], int size)
{
    int minVal = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < minVal)
        {
            minVal = array[i];
        }
    }

    return minVal;
}

int main()
{
    int array[ARR_SIZE];
    fillArrWithRandVal(array, ARR_SIZE, ARR_VAL_MIN, ARR_VAL_MAX);

    std::cout << "Given array: ";
    printArr(array, ARR_SIZE);

    std::cout << "Min value: " << arrMinVal(array, ARR_SIZE) << std::endl;
    std::cout << "Max value: " << arrMaxVal(array, ARR_SIZE) << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}