#include "Float.hpp"


	Float::Float() : Number(0)
	{	}
	Float::Float(float value) : Number(value)
	{    }
	Float::Float(const Float& f) : Number(f.Number)
	{    }

bool      Float::operator>(Float& a)
{
	return Number > a.Number;
}

bool      Float::operator<(Float& a)
{
	return Number < a.Number;
}

Float&   Float:: operator=(Float& a)
{
	if(this == &a) return *this;

	Number = a.Number;
	return *this;

}

Float&    Float::operator=(int a)
{
	Number = (float)a;
	return *this;
}

Float&    Float::operator=(float a)
{
	Number = a;
	return *this;
}


void Float::swap(Float& a)
{
	float temp = Number;
	Number = a.Number;
	a.Number = temp;
	return;
}

void Float::print()
{
	cout<<Number<<"  ";
}