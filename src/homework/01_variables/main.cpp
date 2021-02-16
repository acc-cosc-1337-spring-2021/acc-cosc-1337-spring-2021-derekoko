//write include statements
#include"variables.h"

//write namespace using statement for cout
using std::cin; 	using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Enter your meal amount here: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax(meal_amount);

	cout<<"Enter the percent tip here without the percent sign decimals: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tax_amount + meal_amount + tip_amount;

	cout<<"\n"<<"Your meal amount is: "<<meal_amount<<"\n";
	cout<<"The sales tax is: "<<tax_amount<<"\n";
	cout<<"Your tip amount is: "<<tip_amount<<"\n";
	cout<<"Your total is: "<<total;

	return 0;
}
