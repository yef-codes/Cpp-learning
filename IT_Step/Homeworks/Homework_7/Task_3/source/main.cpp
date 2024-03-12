/*
 ==============================================================================
 Name        : Homework_7-Task_3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : In a one-dimensional array of N real numbers, define:
                - Sum of negative elements;
                - Product of elements between min and max elements;
                - Product of elements at even indexes;
                - Sum of elements between the first and the last negative
                elements.
 ==============================================================================
 */

#include <iostream>
#include <random>

#define ARR_LEN 10
#define ARR_VAL_MIN -100.0f
#define ARR_VAL_MAX 100.0f

float getRandVal(float minVal, float maxVal)
{
    std::random_device dev;
    std::mt19937 rgen(dev());
    std::uniform_real_distribution<> dist(minVal, maxVal);

    return dist(rgen);
}

void fillArrWithRandVal(float array[], int size, int minVal, int maxVal)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = getRandVal(minVal, maxVal);
    }
}

void printArr(float array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }

    std::cout << std::endl;
}

float sumNegativeValues(float array[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            sum += array[i];
        }
    }

    return sum;
}

float sumValuesBetweenIndexes(float array[], int size, int firstIndex, int lastIndex)
{
    float sum = array[firstIndex];

    if (firstIndex < lastIndex)
    {
        for (int i = firstIndex + 1; i <= lastIndex; i++)
        {
            sum += array[i];
        }
    }
    else
    {
        for (int i = lastIndex + 1; i <= firstIndex; i++)
        {
            sum += array[i];
        }
    }

    return sum;
}

float prodValuesBetweenIndexes(float array[], int size, int firstIndex, int lastIndex)
{
    float prod = 1.0f;

    if (firstIndex < lastIndex)
    {
        for (int i = firstIndex + 1; i <= lastIndex; i++)
        {
            prod *= array[i];
        }
    }
    else
    {
        for (int i = lastIndex + 1; i <= firstIndex; i++)
        {
            prod *= array[i];
        }
    }

    return prod;
}

float prodValuesAtEvenIndexes(float array[], int size)
{
    float prod = 1.0f;

    for (int i = 0; i < size; i += 2)
    {
        prod *= array[i];
    }

    return prod;
}

int firstNegativeValIndex(float array[], int size)
{
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            index = i;
            break;
        }
    }

    return index;
}

int lastNegativeValIndex(float array[], int size)
{
    int index = -1;

    for (int i = size - 1; i >= 0; i--)
    {
        if (array[i] < 0)
        {
            index = i;
            break;
        }
    }

    return index;
}

int arrMinValIndex(float array[], int size)
{
    int index = 0;
    float minVal = array[index];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < minVal)
        {
            index = i;
            minVal = array[i];
        }
    }

    return index;
}

int arrMaxValIndex(float array[], int size)
{
    int index = 0;
    float maxVal = array[index];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > maxVal)
        {
            index = i;
            maxVal = array[i];
        }
    }

    return index;
}

int main()
{
    float array[ARR_LEN];
    fillArrWithRandVal(array, ARR_LEN, ARR_VAL_MIN, ARR_VAL_MAX);

    std::cout << "Given array: ";
    printArr(array, ARR_LEN);

    std::cout << "Sum of negative elements: "
              << sumNegativeValues(array, ARR_LEN) << std::endl;

    std::cout << "Product of elements between min and max elements: "
              << prodValuesBetweenIndexes(
                     array,
                     ARR_LEN,
                     arrMinValIndex(array, ARR_LEN),
                     arrMaxValIndex(array, ARR_LEN))
              << std::endl;

    std::cout << "Product of elements located at even indexes: "
              << prodValuesAtEvenIndexes(array, ARR_LEN) << std::endl;

    std::cout << "Sum of elements located between the first and the last negative elements: "
              << sumValuesBetweenIndexes(
                     array,
                     ARR_LEN,
                     firstNegativeValIndex(array, ARR_LEN),
                     lastNegativeValIndex(array, ARR_LEN))
              << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}