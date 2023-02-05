//
//  calculate.cpp
//  Module4-10
//
//  Created by Ольга Полевик on 15.06.2021.
//

#include <stdio.h>
#include "calculate.h"

int Plus(int a, int b)
{
    //int sum;
    //sum = a + b;
    return a + b;
}
int Minus (int a, int b)
{
    return a - b;
}
int Multiply (int a, int b)
{
    return a * b;
}
int Divide (int a, int b)
{
    return a / b;
}
long long int Factorial(int a)
{
    if(a < 0)
    {
        return 0;
    }
    else if (a == 0)
    {
        return 1;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return a*Factorial(a-1);
    }
}

int Power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else if (b < 0)
    {
        return (1 / Power(a, -b));
    }
    else
    {
        return (a * Power(a, b - 1));
    }
}
