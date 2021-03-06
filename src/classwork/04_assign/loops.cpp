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

/*void prompt_user()
{
    char choice;

    do
    {
        cout<<"Type Y to continue N to exit: ";
        cin>> choice;

    }
    while(choice =='y' || choice == 'Y');
}*/