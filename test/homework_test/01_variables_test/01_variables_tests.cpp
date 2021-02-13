#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

//Testing sales tax
TEST_CASE("Verify get sales tax", "if sales tax returns the correct value.") 
{
	REQUIRE(get_sales_tax(10) == .675);
	REQUIRE(get_sales_tax(20) == 1.35);
}

TEST_CASE("Verify get tip amount", "if tip amount returns the correct value.") 
{
	REQUIRE(get_tip_amount(20, .15) == 3);
	REQUIRE(get_tip_amount(20, .2) == 4);
}