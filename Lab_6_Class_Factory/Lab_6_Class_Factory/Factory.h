#pragma once
#include "Class_B.h"
#include "Class_C.h"
#include "Class_D.h"

  /**
  @class   Factory
  */
class Factory 
{
public:
	   Factory(void);
	   ~Factory(void);
	   /// Create pointer to class B, C or D
	   /// @param ID of created object's class
	   /// ID = 1 => Class B
	   /// ID = 3 => Class C
	   /// ID = 3 => Class D
	Class_A*         Create(int ID);
};

