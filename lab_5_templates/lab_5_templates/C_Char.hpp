#pragma once
#include <iostream>
using namespace std;
/**
* @class C_Char
*Contains char value
*/
class C_Char
{
public:
	                    C_Char();
	                   ~C_Char();
	///Constructor
	/// @param char value
	                    C_Char(char value);
	///Constructor
	///@param C_Char class object
	                    C_Char(const C_Char& ch);
	///Overloading of > operator
	bool          operator>(C_Char& a);
	///Overloading of < operator
	bool          operator<(C_Char& a);
	///Overloading of = operator
	C_Char&       operator=(C_Char& a);
	///Overloading of = operator
	C_Char&       operator=(char a);
	/// Swap values of two objects
	/// @param Second object
	void          swap(C_Char& a);
	/// Display the value
	void          print();
private:
	///Class value
	char Symbol;
};

