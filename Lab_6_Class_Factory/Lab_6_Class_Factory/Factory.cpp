#include "Factory.h"



Factory::Factory(void)
{
}


Factory::~Factory(void)
{
}


Class_A*   Factory::Create(int ID)
{
	switch (ID)
	{
	case  1 :
		return new Class_B;
	case  2 :
		return new Class_C;
	case  3 :
		return new Class_D;
	default:
		return nullptr;		
	}
}
