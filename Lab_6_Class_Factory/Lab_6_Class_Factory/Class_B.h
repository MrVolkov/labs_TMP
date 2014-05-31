#pragma once
#include "class_a.h"

 /**
  @class Class_B inheritor of Class_A
 */
class Class_B :
	public Class_A
{
public:
	   Class_B(void);
	   ~Class_B(void);
	   /// Print Class name
	void            Show(void);
};

