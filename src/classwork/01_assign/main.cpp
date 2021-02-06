//Write the include statement for types.h here
#include "types.h"
#include<iostream>
//Write include for capturing input from keyboard and displaying output to screen

using std::cout;	using std::cin;

int main()
{
	int num;
	int num1 = 4;

	cout<< "Enter your number here: ";
	cin >> num;

	int result = multiply_numbers(num);

	cout<< "The product of your number multiplied by 5 is: " << result << "\n";

	result = multiply_numbers(num1);

	cout<< "The product of 4 * 5 = " << result;

	return 0;
}
