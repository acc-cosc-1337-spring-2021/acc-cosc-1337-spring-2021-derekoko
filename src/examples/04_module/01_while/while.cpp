#include "while.h"
//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_squares(int num)
{
    auto sum = 0;
    auto index = 1;

    while(index <= num) //while loop does not require a semi colon. with semi colon, it turns it to a null statement.
    {
        //auto val = 1; if declare a variable in the block, it's only part of the while block. no where else outside.
        sum = sum + index * index;
        index++;
    }

    return sum;
}

//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/

void display(std::string str) //void means you are not returning anything.
{
    auto index = 0;

    while (index < str.length())
    {
        std::cout<<str[index]<<"\n";
        index++;
    }
    
    //str.length count char in string.
}