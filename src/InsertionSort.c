//***************************************************************************************
//Filename: InsertionSort.c
//This file defines the functions for using insertion-sort.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#include "../head/InsertionSort.h"
long countInsertion = 0;
//sort the arrary by access the arrary and size
void insertionSort(int arr[],const int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];// move backward all data those are greater than array[i]
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
            countInsertion ++;
        }// place the key
        arr[j + 1] = key;
    }
}
