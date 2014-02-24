//Dustin Dodson
//CS372 HW3
//FizzBuzz Code Kata

#define CATCH_CONFIG_MAIN	//Define the main function to be used by CATCH
#include "catch.hpp"		//Include CATCH testing framework

//I-O stream for outputting information
#include <iostream>
using std::cout;
using std::endl;

const bool fizzBuzz(const int num)
{
	return false;
}

TEST_CASE("FizzBuzz values to be computed", "[fizzBuzz]")
{
	REQUIRE(fizzBuzz(0));
}