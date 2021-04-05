//bank_account.cpp
#include "bank_account.h"
#include <iostream>

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

//FREE Fucntion not part of bank account class.
void display_account(BankAccount account)
{
    std::cout<<"Display account -- Balance is :"<<account.get_balance()<<"\n";
}