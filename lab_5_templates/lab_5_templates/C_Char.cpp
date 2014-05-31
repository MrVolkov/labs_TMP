#include "C_Char.hpp"


C_Char::C_Char( ) : Symbol(' ')
{  }


C_Char::~C_Char(void)
{  }

C_Char::C_Char(char value) : Symbol(value)
{    }

C_Char::C_Char(const C_Char& ch) : Symbol(ch.Symbol)
{    }

bool      C_Char::operator>(C_Char& a)
{
	return Symbol > a.Symbol;
}

bool      C_Char::operator<(C_Char& a)
{
	return Symbol < a.Symbol;
}

C_Char&   C_Char:: operator=(C_Char& a)
{
	if(this == &a) return *this;

	Symbol = a.Symbol;
	return *this;

}

C_Char&    C_Char::operator=(char a)
{
	Symbol = a;
	return *this;
}


void C_Char::swap(C_Char& a)
{
	char temp = Symbol;
	Symbol = a.Symbol;
	a.Symbol = temp;
	return;
}

void C_Char::print()
{
	cout<<Symbol<<"  ";
}