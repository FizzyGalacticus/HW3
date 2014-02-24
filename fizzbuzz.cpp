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

const string fizzBuzz(const int num)
{
	return "";
}

TEST_CASE("FizzBuzz values to be computed", "[fizzBuzz]")
{
	for(int i = 1; i < 101; i++) REQUIRE(fizzBuzz(i) == "FizzBuzz");
}