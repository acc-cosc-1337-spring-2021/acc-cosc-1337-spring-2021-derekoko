//write include statement for if header
#include "if.h"


//write code for the is_even function that returns true if num is even, false otherwise
bool is_even(int num)
{
    auto even = false;

    if(num % 2 == 0) //modulus returns the remainder seeing if its even or odd.
    {
        even = true;
    }

    return even;
}

/*can also do:
    bool is_even(int_num)
    {
        return num % 2 == 0
    }
*/


//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise

bool is_in_range_1_to_10(int num)
{
    return num >= 1 && num <= 10; // testing if num is in range
}

bool is_not_in_range_1_to_10(int num)
{
    return (!(num >= 1 && num <= 10)); // this is to test if the number is NOT in range.
} //the only way an AND compund statement is true if both are TRUE.

//not in range using OR instead of &&

bool is_not_in_range_1_to_10_OR(int num)
{
    return num < 1 || num > 10;
}

// is character a consonant 

bool is_char_a_consonant(char c)
{
    return (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'));
} // not takes precedence