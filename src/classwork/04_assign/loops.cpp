//cpp
#include "loops.h"

int factorial(int num)
{
    int i;
    int fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact*i;
    } 

    return fact;
}