/*
 ==============================================================================
 Name        : Homework_8-Task_1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Given a one-dimensional array of 10 random numbers and two empty
               one-dimensional arrays of 5 elements each. Write a program that
               copies sequentially the elements from the first array into two
               others.
 ==============================================================================
 */

#include <iostream>
#include <random>

#define INI_ARR_LEN 10
#define RES_ARR_LEN 5
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

void copyArr(int arrayFrom[], int sizeFrom, int firstValIndex,
             int lastValIndex, int arrayTo[], int sizeTo)
{
    for (int i = 0; i < sizeTo; i++)
    {
        arrayTo[i] = arrayFrom[firstValIndex + i];
    }
}

int main()
{
    int iniArray[INI_ARR_LEN];
    fillArrWithRandVal(iniArray, INI_ARR_LEN, ARR_VAL_MIN, ARR_VAL_MAX);
    std::cout << "Initial array: ";
    printArr(iniArray, INI_ARR_LEN);

    int resArray_1[RES_ARR_LEN];
    int resArray_2[RES_ARR_LEN];

    copyArr(iniArray, INI_ARR_LEN, 0, 4, resArray_1, RES_ARR_LEN);
    copyArr(iniArray, INI_ARR_LEN, 5, 9, resArray_2, RES_ARR_LEN);

    std::cout << "Result array_1: ";
    printArr(resArray_1, RES_ARR_LEN);

    std::cout << "Result array_2: ";
    printArr(resArray_2, RES_ARR_LEN);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}