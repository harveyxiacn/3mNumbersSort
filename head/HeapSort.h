//***************************************************************************************
//Filename: HeapSort.h
//This file declares the functions for using heap-sort.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#ifndef _heapSort_
#define _heapSort_
extern long countHeap;
//make the arrary as heap
void heapify(int a[], int i, const int n);
//sort the arrary by access the arrary and size
extern void heapSort(int a[], const int n);
#endif
