#pragma once
#include "class_a.h"

/**
  @class Class_C inheritor of Class_A
 */
class Class_C :
	public Class_A
{
public:
	   Class_C(void);
	   ~Class_C(void);
	   /// Print Class name
	void           Show(void);
};

