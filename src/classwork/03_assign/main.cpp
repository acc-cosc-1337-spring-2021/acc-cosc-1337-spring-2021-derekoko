//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
using std::cout;	using std::cin;

int main()
{
	auto grade = 0;

	cout << "Enter your letter grade here: ";
	cin >> grade;

	auto if_letter_grade = get_letter_grade_using_if(grade);
	
	cout << "Your letter grade using the If Else function is: "<< if_letter_grade <<"\n";

	auto switch_letter_grade = get_letter_grade_using_switch(grade);

	cout << "Your letter grade using the switch function is: " << switch_letter_grade;

	return 0;
}

