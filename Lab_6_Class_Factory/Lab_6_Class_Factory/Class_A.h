#pragma once
#include <iostream>
using namespace std;

  /**
  @class  Class_A Abstract class 
  */
class Class_A
{
public:
	            Class_A(void);
	virtual     ~Class_A(void);
	/// Pure virtual method
	virtual void             Show(void) = 0;
};

