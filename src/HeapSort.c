//***************************************************************************************
//Filename: HeapSort.c
//This file defines the functions for using heap-sort.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#include "../head/HeapSort.h"
long countHeap = 0;
//make the arrary as heap
void heapify(int a[], int i, const int n)
{
    int child, tmp;
    for (tmp = a[i]; n >= 2 * i; i = child)
    {
        //left child is 2*i, right child is 2*i+1, i.e child+1
        child = 2 * i;

        //let child be the greater child
        if (child != n && a[child + 1] > a[child])
        {
            child++;
        }

        //if child is greater than parent
        if (tmp < a[child])
        {
            //swap them
            a[i] = a[child];
        }
        else break;
    }
    //place the root to where it should be placed
    a[i] = tmp;
}

//sort the arrary by access the arrary and size
void heapSort(int a[], int n)
{
    int i, tmp;
    //make the arrary as heap
    for (i = n / 2; i >= 1; i--)
    {
        heapify(a, i, n);
    }

    //sort n-1 times
    for (i = n; i >= 2; i--)
    {
        //swap top and last nodes
        tmp = a[1];
        a[1] = a[i];
        a[i] = tmp;
        countHeap ++;
        //heapify the arrary
        heapify(a, 1, i-1);
    }
}
