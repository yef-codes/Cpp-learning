/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.5-ex.2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Redo Listing 5.4 using a type array object instead of a built-in
               array and type long double instead of long long. Find the value
               of 100!
 ==============================================================================
 */
/*
Listing 5.4 formore.cpp
//  formore.cpp -- more looping with for
#include <iostream>
const int ArSize = 16; // example of external declaration
int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}
*/

#include <iostream>
#include <array>

const int ArSize = 101;

int main()
{
    std::array<long double, ArSize> factorials;

    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}