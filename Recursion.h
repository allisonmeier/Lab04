#include <vector>

#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool PalindromeByRecursion::palindromeRecursion(string st){
	//Checks if string length is 0, returns true if so
	if(st.length() == 0){
		return true;
	}
	//Checks if string length is 1 for odd lengthed strings, returns true if so
	else if(st.length() == 1){
		return true;
	}
	//Compares the current substring to check for palindrome and 
	//Uses recursion to run the function back again until string is 0, 1, or not a palidrome
	else{
		if(st[0] == st[st.length()-1]){
			string st2 = st.substr(1, st.length()-2);
			bool next = palindromeRecursion(st2);
			if (next == true){
				return true;
			}
		}
	}
	return false;
}

bool PlaindromeByStack::palindromeStack(string st){
	//Finding mid of string and creation of stack
	int i, mid = st.size()/2;
	stack<char> st2;
	//Pushes first half of string onto stack
	for(i = 0; i<mid; i++){
		st2.push(st[i]);
	}
	//Checks if string is odd or even
	if(st.size() % 2 != 0){
		//If odd, skip middle value
		i++;
	}
	char character;
	//Compares the the stack from front to back to check for palidrome
	while(st[i] != '\0'){
		character = st2.top();
		st2.pop();
		if(st[i] != character){
			return false;
		}
		i++;
	}
return true;	

}

class PalindromeByRecursion{
	public:
		//Checks string if palindrome using recursion
		virtual bool palindromeRecursion(string st);
};

class PlaindromeByStack{
	public:
		//Cehcks string if palindrome using stacks
		virtual bool palindromeStack(string st);
};

class  IFactorialComputer
{
public:
	IFactorialComputer() {};
	virtual int CalculateFactorial(int numberToComputer) = 0;
};


class  FactorialByRecursion : public IFactorialComputer
{
public:
	FactorialByRecursion() {};
	int CalculateFactorial(int num);
};
class  FactorialByStack : public IFactorialComputer
{
public:
	FactorialByStack() {};
	
	int CalculateFactorial(int num);

private:
	std::stack <int> s;
};

class  MyFakeClass
{
public:
	MyFakeClass() {std::cout << "Constructor for MyFakeClass was called" << std::endl;}
	~MyFakeClass() { std::cout << "Destructor for MyFakeClass was called" << std::endl; }

};

class  MyBaseException : public std::exception
{
public:

	virtual char const* what() const throw();
};

class  MyException1 : MyBaseException
{
public:
	
	virtual char const* what() const throw();
};


class  MyException2 : MyBaseException
{
public:
	
	virtual char const* what() const throw();
};


class  MyException3 : MyBaseException
{
public:
	
	virtual char const* what() const throw();
};


extern  std::string CallSimpleExceptionMethod(int i);
extern  void SimpleExceptionMethod(int i);


// This class is exported from the RecursionList.dll
class  ChessBoard {
public:
	ChessBoard() 
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				m_board[i][j] = 0;
			}
		}
	}

	ChessBoard(int board[8][8])
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				m_board[i][j] = board[i][j];
			}
		}
	}

	std::string ToString();
	
	bool Solve(ChessBoard chessboard, int col);

	

private:
    bool CheckSafeQueens(ChessBoard chessBoard, int i, int col);
	int m_board[8][8]; //zero is free, while 1 is a placed queen
	// TODO: add your methods here.
};