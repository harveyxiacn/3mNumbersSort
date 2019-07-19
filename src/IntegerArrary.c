//***************************************************************************************
//Filename: IntegerArrary.c
//This file defines the functions for using arrary.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#include "../head/IntegerArrary.h"
//create arrary from the file which contain 3*10^6 integers
void createArrary(int arrary[], const int n, FILE *fp)
{
    for(int i = 0; i < n; i++)
        fscanf(fp, "%d", &arrary[i]);
}
//print the arrary
void printArrary(int arrary[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arrary[i]);
        if(i%10 == 9)
            printf("\n");
    }
}
//copy the arrary
void copyArrary(int arrary[], const int n, int arraryCp[])
{
    for(int i =0; i < n; i++)
        arraryCp[i] = arrary[i];
}
