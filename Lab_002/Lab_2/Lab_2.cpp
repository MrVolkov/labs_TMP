#pragma once
#include <iostream>
#include <vector>
#include "bubbleSort.h"
#include "MergeSort.h"
using namespace std;





int main()
{
	vector<char> mas;
	vector<char> Xmas;
	mas.push_back('f');  /// 
	mas.push_back('h');  ///
	mas.push_back('c');  /// 
	mas.push_back('m');  /// 
	mas.push_back('a');  /// Инициализация массива символов.
	mas.push_back('u');  /// 
	mas.push_back('o');  /// 
	mas.push_back('p');  ///
	mas.push_back('e');  ///
	bubblesort(mas);
	mas.push_back('q');
	mas.push_back('o');
	mas.push_back('x');
	mas.push_back('z');
	Xmas = mergeSort(mas);
	system("pause");
	return 0;
}



