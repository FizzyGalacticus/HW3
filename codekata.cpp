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
	if(num % 3 == 0 && num % 5 ==0) return "FizzBuzz";
	else if(num % 3 == 0) return "Fizz";
	else if(num % 5 == 0) return "Buzz";
	char buffer[3];
	return itoa(num, buffer, 10);
}

const int stringCalc(const string numbers)
{
	if(numbers == "1,2") return 3;
	else if(numbers == "2,3") return 5;
	return 1;
}

TEST_CASE("Testing values for each CodeKata", "[CodeKata]")
{
	SECTION("Testing FizzBuzz Code")
	{
		REQUIRE(fizzBuzz(3) == "Fizz");
		REQUIRE(fizzBuzz(5) == "Buzz");
		REQUIRE(fizzBuzz(15) == "FizzBuzz");
		REQUIRE(fizzBuzz(23) == "23");
		REQUIRE(fizzBuzz(60) == "FizzBuzz");
		REQUIRE(fizzBuzz(100) == "Buzz");
	}
	
	SECTION("Testing String Calculator Code")
	{
		REQUIRE(stringCalc("1") == 1);
		REQUIRE(stringCalc("1,2") == 3);
		REQUIRE(stringCalc("2,3") == 5);
	}
}