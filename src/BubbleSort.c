//***************************************************************************************
//Filename: BubbleSort.c
//This file defines the functions for using bubble-sort.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#include "../head/BubbleSort.h"
long countBubble = 0;
// bubble-sort by accessed arrary
void bubbleSort(int arr[], const int n)
{
    int i = 0, j =0, temp;
    for(i = 0; i < n; i++)
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])// if arr[j] greater than arr[j+1], swap them.
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                countBubble ++;
            }
        }
}


