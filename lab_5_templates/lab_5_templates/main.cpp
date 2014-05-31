#pragma once
#include "sort.hpp"
#include "functions.hpp"
#include <vector>
#include <time.h>


int main()
{
	Float arr[10];
	C_Char sym[10];	
	bool (*ptr)(Float& ,Float&);
	bool (*Sptr)(C_Char& ,C_Char&);

	srand(time(NULL));

	for(int itr = 0; itr < 10; itr++)
	{
		arr[itr] = (float)(rand()%200 /3.14 - 10);
		sym[itr] = rand()%26+65;
		arr[itr].print();
	}
	cout<<endl;

	for(int itr = 0; itr < 10; itr++)
		sym[itr].print();

	cout<<endl<<endl<<"///////////////////////////////////////////////"<<endl<<endl;

	ptr = swapFl;
	Sptr = swapSymbols;
	sort(arr, 0 , 9, ptr);
	sort(sym, 0 , 9, Sptr);
	

	for(int itr = 0; itr < 10; itr++)
		arr[itr].print();	
	cout<<endl<<endl;

	for(int itr = 0; itr < 10; itr++)
		sym[itr].print();

	cout<<endl<<endl;

	system("pause");
	return 0;
}
