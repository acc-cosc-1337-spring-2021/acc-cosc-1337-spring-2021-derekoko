#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get gc content", "if function returns accurate numbers") {
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .5);
}

TEST_CASE("Verify reverse string", "if function reverses.") {
	REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Verify get dna complement", "if dna complements.") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}