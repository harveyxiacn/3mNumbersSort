//***************************************************************************************
//Filename: MergeSort.h
//This file declares the functions for using merge-sort.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#ifndef _mergeSort_
#define _mergeSort_
#include <stdlib.h>
extern long countMerge;
void merge(int *array,const int first, const int mid, const int last);
void mergeSort(int *array, const int first, const int last);
#endif
