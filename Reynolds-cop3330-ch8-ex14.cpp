/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Donovan Reynolds
 */

#include "std_lib_facilities.h"

int testFunction(const int a, const int b, const int c, int d);


int main()
{
    int a = 5;
    int b = 2;
    int c = 7;

    int result = testFunction(a,b,c,0);
    cout << result;
}


int testFunction(const int a, const int b, const int c, int d)
{
    //c = 23;
    //d = 24;
    return a + b + c + d;
}