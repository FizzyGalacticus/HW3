//Dustin Dodson
//CS372 HW3
//FizzBuzz Code Kata

#define CATCH_CONFIG_MAIN	//Define the main function to be used by CATCH
#include "catch.hpp"		//Include CATCH testing framework

//I-O stream for outputting information
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

//Pre: Numbers passed to this function must be >= -100 and <= 100.
//If number falls out of this range, undefined behavior might occurr.
//Post: This function will return a string appropriate to number given.
const string fizzBuzz(const int num)
{
	if(num % 3 == 0) return "Fizz";
	if(num % 5 == 0) return "Buzz";
	char buffer[3];
	return itoa(num, buffer, 10);
}

TEST_CASE("FizzBuzz values to be computed", "[fizzBuzz]")
{
	REQUIRE(fizzBuzz(3) == "Fizz");
	REQUIRE(fizzBuzz(5) == "Buzz");
}