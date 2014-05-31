#pragma once
#include "MergeSort.h"


vector<char> mergeSort(vector<char> mas)      //!  Сортировка Слиянием
{
	
    vector<char>  left, right, result;
    if (mas.size() <= 1)
        return mas;
    else
	{
		int middle = mas.size() / 2;
        for (int itr = 0; itr < middle; itr++)
			left.push_back(mas[itr]);
		for (int itr = middle; itr < mas.size();itr++) 
			right.push_back(mas[itr]);
        mergeSort(left);
        mergeSort(right);
        result = merge(left, right);
        return result;
	}
}

vector<char>  merge(vector<char> left, vector<char> right)
{

	vector<char> result;
    while ( (left.size() > 0) && (right.size() > 0))
	{
        if (left[0] <= right[0])
		{
			result.push_back(left[0]);
			left.erase(left.begin());
		}
        else
		{
			result.push_back(right[0]);
			right.erase(right.begin());
		}
       
	}
	if (left.size() > 0 )
		for(int i = 0; i < left.size(); i++)
			result.push_back(left[i]);
        
	if (right.size() > 0 )
		for(int i = 0; i < right.size(); i++)
			result.push_back(right[i]);        
    return result;
}
