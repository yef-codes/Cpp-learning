/*
 ==============================================================================
 Name        : S.Prata-C++_Primer_Plus-ch.2-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a C++ program that uses three user-defined functions
               (counting main() as one) and produces the following output:
                Three mice
                Three mice
                See how they run
                See how they run
               One function, called two times, should produce the first two
               lines, and the remaining function, also called twice, should
               produce the remaining output.
 ==============================================================================
 */

#include <iostream>

void mice_func()
{
    std::cout << "Three mice" << std::endl;
}

void run_func()
{
    std::cout << "See how they run" << std::endl;
}

int main()
{
    mice_func();
    mice_func();

    run_func();
    run_func();

    std::cout << "\n=====> DONE <=====\n"
              << std::endl;

    return 0;
}