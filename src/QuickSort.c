//***************************************************************************************
//Filename: QuickSort.c
//This file defines the functions for using quick-sort.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#include "../head/QuickSort.h"
// quick-sort by recusive
long countQuick = 0;
void quickSort(int min,int max,int a[])
{
    int key = a[min];
    int i = min;
    int j = max;
    if(min>=max)
        return;
    while(i<j)
    {

        while((i<j) && (key <= a[j]))
        {
            j--;
        }
        if(key > a[j])
        {
            a[i] = a[j];
            a[j] = key;
            i++;
            countQuick++;
        }

        while((i<j) && (key >= a[i]))
        {
            i++;
        }
        if(key < a[i])
        {
            a[j] = a[i];
            a[i] = key;
            j--;
            countQuick++;
        }

    }
    quickSort(min,i-1,a);
    quickSort(i+1,max,a);
}
