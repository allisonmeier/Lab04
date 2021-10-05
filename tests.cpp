// tests.cpp
#include "Recursion.h"
#include <gtest/gtest.h>
#include <string>


		

		//Recurstion palindrome tests
		TEST(PalindromeByRecursion, ComplicatedString){
			PalindromeByRecursion p;
			bool b = p.palindromeRecursion("racecar");
			ASSERT_EQ(1, b);
		}
		TEST(PalindromeByRecursion, EmptyString){
			PalindromeByRecursion p;
			bool b = p.palindromeRecursion("");
			ASSERT_EQ(1, b);
		}
		TEST(PalindromeByRecursion, SimpleString){
			PalindromeByRecursion p;
			bool b = p.palindromeRecursion("a");
			ASSERT_EQ(1, b);
		}
		TEST(PalindromeByRecursion, NegativeTest){
			PalindromeByRecursion p;
			bool b = p.palindromeRecursion("LetsGOOOO");
			ASSERT_EQ(0, b);
		}

		//Stack Palindrome Tests
		TEST(PalindromeByStack, ComplicatedString){
			PlaindromeByStack p;
			bool b = p.palindromeStack("racecar");
			ASSERT_EQ(1,b);
		}
		TEST(PalindromeByStack, EmptyString){
			PlaindromeByStack p;
			bool b = p.palindromeStack("");
			ASSERT_EQ(1,b);
		}
		TEST(PalindromeByStack, SimpleString){
			PlaindromeByStack p;
			bool b = p.palindromeStack("a");
			ASSERT_EQ(1,b);
		}
		TEST(PalindromeByStack, NegativeTest){
			PlaindromeByStack p;
			bool b = p.palindromeStack("NotARacecar");
			ASSERT_EQ(1,b);
		}
		
		TEST(Factorial, Recursion1)
		{
			FactorialByRecursion calculator;

			int val = calculator.CalculateFactorial(3);

			ASSERT_EQ(6, val);
		}

		TEST(Factorial, Recursion2)
		{
			FactorialByRecursion calculator;

			int val = calculator.CalculateFactorial(10);

			ASSERT_EQ(3628800, val);

		}
		
		TEST(Factorial, Stack1)
		{
			FactorialByStack calculator;

			int val = calculator.CalculateFactorial(3);

			ASSERT_EQ(6, val);

		}

		TEST(Factorial, Stack2)
		{
			FactorialByStack calculator;

			int val = calculator.CalculateFactorial(10);

			ASSERT_EQ(3628800, val);


		}
		
		TEST(Exception,UserDefinedExceptionTest1)
		{

			std::string status = CallSimpleExceptionMethod(1);
			ASSERT_EQ(std::string("Exception 1"), status);
			
		}

		TEST(Exception,UserDefinedExceptionTest2)
		{


				std::string status = CallSimpleExceptionMethod(2);
				ASSERT_EQ(std::string("Exception 2"), status);

		}

		TEST(Exception,UserDefinedExceptionTest3)
		{

			std::string status = CallSimpleExceptionMethod(3);
			ASSERT_EQ(std::string("Exception 3"), status);

		}

		TEST(Exception,UserDefinedExceptionTest4)
		{

			std::string status = CallSimpleExceptionMethod(4);
			ASSERT_EQ(std::string("I did not get an Exception"), status);

		}

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
