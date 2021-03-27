//write include statements
#include "dna.h"

//write using statements
using std::cin;		using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int user_input = 0;
	char choice;
    do
    {
		cout<<"Please enter 1 for GC Content or 2 for DNA Complement here: ";
		cin>>user_input;
		while(user_input < 1 || user_input > 2)
		{
			cout<<"Invalid number. Please enter either 1 or 2 here: ";
			cin>>user_input;
		}
		if (user_input == 1)
		{
			string dna = "";
			cout<<"Enter your DNA String here: ";
			cin>>dna;
			double gc_content = get_gc_content(dna);
			cout<<"The GC content is: "<<gc_content<<"\n";
		}
		else if (user_input == 2)
		{
			string dna = "";
			cout<<"Enter your DNA String here: ";
			cin>>dna;
			string dna_complement = get_dna_complement(dna);
			cout<<"The DNA complement content is: "<< dna_complement<<"\n";
		}	
        cout<<"Type Y to continue N to exit: ";
        cin>> choice;
    }
    while(choice =='y' || choice == 'Y');
	return 0;
}