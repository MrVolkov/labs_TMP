#pragma once
#include "class_a.h"

  /**
  @class  Class_D inheritor of Class_A
 */
class Class_D :
	public Class_A
{
public:
	   Class_D(void);
	   ~Class_D(void);
     /// Print Class name
	void             Show(void);
};

