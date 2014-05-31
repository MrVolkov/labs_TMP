#pragma once
#include <iostream>

template <class T>
  void sort(T* Array, int first, int last, bool (*swap)(T&a, T&b))
  {
	  int i = first, j = last;
	  T middle = Array[(first + last) / 2];

	  do {
		  while (Array[i] < middle) i++;
		  while (Array[j] > middle) j--;

		  if(i <= j) 
		  {
			  if (i < j) (*swap)(Array[i], Array[j]);
			  i++;
			  j--;
		  }
	  } while (i <= j);

	  if (i < last)
		  sort(Array, i, last, swap);
	  if (first < j)
		  sort(Array, first, j, swap);
  }