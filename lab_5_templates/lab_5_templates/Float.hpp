#pragma  once
#include <iostream>
using namespace std;

/**
* @class Float
*Contains float value
*/
class Float
{
public:
	         Float();
	///Constructor
	/// @param float value
	         Float(float value);
   ///Constructor
   ///@param Float class object
	         Float(const Float& f);
   ///Overloading of > operator
bool             operator>(Float& a);
	///Overloading of < operator
bool             operator<(Float& a);
///Overloading of = operator
Float&           operator=(Float& a);
///Overloading of = operator
Float&           operator=(int a);
///Overloading of = operator
Float&           operator=(float a);
/// Swap values of two objects
/// @param Second object
void             swap(Float& a);
/// Display the value
void             print();

private:
	///Class value
	float Number;

};