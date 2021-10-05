#include "Recursion.h"
#include <stack>
#include <stdbool.h>
#include<iostream>
#include<sstream>
#include<string>
#include <exception>

using namespace std;

// 3! = 3 * 2 * 1
// 4! = 4 * 3 * 2 * 1


int FactorialByRecursion::CalculateFactorial(int num) {

	if (num <= 1)
	{
		return 1;
	}

	else 
	{
		return num * CalculateFactorial(num - 1);  
	}
}


int FactorialByStack::CalculateFactorial(int num) {

	int answer = 1;

	if (num <= 1) { return 1; }

	while (num > 1) {
		s.push(num);
		num--;
	}
	while (!s.empty()) {
		answer = answer * s.top();
		s.pop();
	}
	return answer;
}

bool ChessBoard::Solve(ChessBoard chessBoard, int col) {

	if (col >= 8) {
		return true;
	}


	for (int i = 0; i < 8; ++i) {

		if (CheckSafeQueens(chessBoard, i, col)) {
			m_board[i][col] = 1;


			if (Solve(chessBoard, col + 1) == true)
				return true;

			m_board[i][col] = 0;

		}
	}
	return false;
}


bool ChessBoard::CheckSafeQueens(ChessBoard chessBoard, int row, int col) 
{

    return false;

    // TODO
}


string ChessBoard::ToString() {

	string answer = "";
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			int temp = m_board[i][j];
			stringstream ss;
			ss << temp;
			string str = ss.str();
			answer = answer + str;
		}
		answer = answer + "\n";
	}
	return answer;
}


// catches errors as needed/caught
extern std::string CallSimpleExceptionMethod(int i)
{    
    
	std::string ret;
	MyFakeClass* resourceThatNeedsToBeCleanedup = nullptr;

	resourceThatNeedsToBeCleanedup = new MyFakeClass();

	try{ // does it find an exception?
		SimpleExceptionMethod(i);
		ret = "I did not get an Exception";
	} 
	
	// if so, here's how it should behave in each case
	catch (const MyException1& exc){
		ret = exc.what();
	} 
	catch (const MyException2& exc){
		ret = exc.what();
	} 
	catch (const MyException3& exc){
		ret = exc.what();
	} 
	catch (const exception& exc){
		ret = "Unknown Exception";
	}

	// clean-up crew
	delete resourceThatNeedsToBeCleanedup;

	// and we're done
	return ret;
}


// takes input -> defines exception
extern void SimpleExceptionMethod(int i)
{
	int retVal = 0;

	if (i == 1)
	{
		throw MyException1();
	}
	else if (i == 2)
	{
		throw MyException2();

	}
	else if (i == 3)
	{
        throw MyException3();
	}
	else
	{
		retVal = 20;
	}

	return;

}


// custom exception types for this
char const* MyBaseException::what() const throw() {
	return "Base Exception";
}
char const* MyException1::what() const throw() {
	return "Exception 1";
}
char const* MyException2::what() const throw() {
	return "Exception 2";
}
char const* MyException3::what() const throw() {
	return "Exception 3";
}