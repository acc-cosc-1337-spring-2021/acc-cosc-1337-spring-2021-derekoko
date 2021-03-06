#include "bank_account.h"
#include <string>

using std::string;

#include<iostream>
using std::cout;

int main()
{

	BankAccount account(100);
//	cout<<sizeof(account)<<"\n";

	display_account(account);
	auto balance = account.get_balance();

	cout<<"Balance: "<<balance<<"\n";

	cout<<"Deposit $50\n";
	account.deposit(50);

	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n";

	cout<<"Withdraw $10\n";
	account.withdraw(10);
	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n";
	

	return 0;
}