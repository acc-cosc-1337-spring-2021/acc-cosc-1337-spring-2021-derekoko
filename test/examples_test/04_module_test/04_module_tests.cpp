#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test sum of squares", "while loop example") {
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("test call by value parameter", "a copy of value is sent to fnction") 
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	REQUIRE(num1 == 5);
}

TEST_CASE("test call by reference parameter", "a copy of value is sent to fnction") 
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	REQUIRE(num2 == 50);
}

/*TEST_CASE("test call referenece", "A clone of parameter is created") 
{
	auto num1 = 5;
	auto num2 =0;
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num2 ==50);
}*/

TEST_CASE("test weekly salary for salary employee", "returns proper salary") 
{
	REQUIRE(calculate_weekly_salary(52000) == 1000);
}

TEST_CASE("test weekly salary for hourly salary employee", "returns proper salary") 
{
	REQUIRE(calculate_weekly_salary(40, 10) == 400);
}