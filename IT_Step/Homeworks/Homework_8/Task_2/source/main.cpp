/*
 ==============================================================================
 Name        : Homework_8-Task_2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that sums corresponding elements of two one-
               dimensional arrays and writes the result into a third array.
               The elements are randomly generated.
 ==============================================================================
 */

#include <iostream>
#include <random>

#define ARR_LEN 10
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

void sumArrays(int array_1[], int size_1, int array_2[], int size_2, int arr_sum[], int size_sum)
{
    for (int i = 0; i < size_1; i++)
    {
        arr_sum[i] = array_1[i] + array_2[i];
    }
}

int main()
{
    int arr_1[ARR_LEN];
    fillArrWithRandVal(arr_1, ARR_LEN, ARR_VAL_MIN, ARR_VAL_MAX);
    std::cout << "Array_1: ";
    printArr(arr_1, ARR_LEN);

    int arr_2[ARR_LEN];
    fillArrWithRandVal(arr_2, ARR_LEN, ARR_VAL_MIN, ARR_VAL_MAX);
    std::cout << "Array_2: ";
    printArr(arr_2, ARR_LEN);

    int arr_sum[ARR_LEN];
    sumArrays(arr_1, ARR_LEN, arr_2, ARR_LEN, arr_sum, ARR_LEN);
    std::cout << "Result array: ";
    printArr(arr_sum, ARR_LEN);

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}