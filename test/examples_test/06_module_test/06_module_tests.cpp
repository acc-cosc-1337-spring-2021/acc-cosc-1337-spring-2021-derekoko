#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test new bank account object balance") 
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test new bank account deposit") 
{
	BankAccount account;
	account.deposit(50);

	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test new bank account deposit with negative amount") 
{
	BankAccount account;
	account.deposit(50);

	REQUIRE(account.get_balance() == 50);

	account.deposit(-10);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test new bank account withdrawal") 
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(10);
	REQUIRE(account.get_balance() == 40);
}

TEST_CASE("Test new bank account withdrawal with negative amount.") 
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(-10);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test new bank account withdrawal with over balance.") 
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(60);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test new bank account object balance is 100") 
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test new bank account deposit when balance is 100") 
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);
}