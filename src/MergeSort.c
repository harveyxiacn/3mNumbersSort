//***************************************************************************************
//Filename: MergeSort.c
//This file defines the functions for using meger-sort.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#include "../head/MergeSort.h"
long countMerge = 0;
void merge(int *array,const int first, const int mid, const int last)
{
    int i,index;
    int first1,last1;
    int first2,last2;
    int *tmp;
    tmp = (int *)malloc((last-first+1)*sizeof(int));
    if( tmp == NULL )
        return;
    first1 = first;
    last1 = mid;
    first2 = mid+1;
    last2 = last;
    index = 0;
    while( (first1 <= last1) && (first2 <= last2) )
    {
        if( array[first1] < array[first2] )
        {
            tmp[index++] = array[first1];
            first1++;
            countMerge ++;
        }
        else{
            tmp[index++] = array[first2];
            first2++;
            countMerge ++;
        }
    }
    while( first1 <= last1 )
    {
        tmp[index++] = array[first1++];
        countMerge ++;
    }
    while( first2 <= last2 )
    {
        tmp[index++] = array[first2++];
        countMerge ++;
    }
    for( i=0; i<(last-first+1); i++)
    {
        array[first+i] = tmp[i];
        countMerge ++;
    }
    free(tmp);
}

void mergeSort(int *array, const int first, const int last)
{
    int mid=0;
    if(first < last)
    {
        mid=(first+last)/2;
        mergeSort(array,first,mid);
        mergeSort(array,mid+1,last);
        merge(array,first,mid,last);
        //display_array(first, last-first+1, array+first);
    }
}
