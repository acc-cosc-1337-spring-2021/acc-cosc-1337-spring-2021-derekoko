//write includes statements
#include "loops.h"
#include "string"
//write using statements for cin and cout
using std::cout;	using std::cin;


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int user_input = 0;
	int answer = 0;
	char choice;
    do
    {
		cout<<"Please enter a number from 1-10 here: ";
		cin>>user_input;
		if (user_input >=1 && user_input <= 10)
		{
			answer = factorial(user_input);
			cout<<"\n"<<"The factorial of "<< user_input<< " is: "<<answer<< "\n";
		}
		else
		{
			cout<<"Invalid answer.\n";
		}
		
        cout<<"Type Y to continue N to exit: ";
        cin>> choice;

    }
    while(choice =='y' || choice == 'Y');

	return 0;
}