#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify GC content"){
	REQUIRE(get_gc_content("AGCTATAG")==.375);
	REQUIRE(get_gc_content("CGCTATAG")==.5);
}

TEST_CASE("Verify Reverse String"){
	std::string dna1 = "AGCTATAG";
	std::string dna2 = "CGCTATAG";

	REQUIRE(get_reverse_string(dna1) == "GATATCGA");
	REQUIRE(get_reverse_string(dna2)== "GATATCGC");
}


TEST_CASE("Verify dna complement"){
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");

}
