#include "bubbleSort.h"

void bubblesort(vector<char> mas)     //! Cортировка пузырьком
{
	int len = mas.size();
	char temp;
	for (int itr=0; itr<len-1; itr++)
	{
		for(int ind = 0; ind<len-itr; ind++)
		{
			if (mas[itr] > mas[itr+1])
			{
				temp = mas[itr];
				mas[ind] = mas[ind+1];
				mas[ind+1] = temp;
			}
		}
	}
}