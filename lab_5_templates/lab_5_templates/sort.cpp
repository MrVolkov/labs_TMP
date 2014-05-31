//#include "sort.hpp"
//
//template <class T>
//
//void sort(T* Array, int first, int last, bool (*swap)(T&a, T&b))
//{
//    int i = first, j = last, middle = Array[(first + last) / 2];
// 
//    do {
//        while (Array[i] < middle) i++;
//        while (Array[j] > middle) j--;
// 
//        if(i <= j) 
//		{
//            if (i < j) (*swap)(Array[i], Array[j]);
//            i++;
//            j--;
//        }
//    } while (i <= j);
// 
//    if (i < last)
//        qs(Array, i, last, swap);
//    if (first < j)
//        qs(Array, first, j, swap);
//
//}