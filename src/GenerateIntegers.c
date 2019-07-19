//*******************************************************************************************
//Filename: GenerateIntegers.c
//This file defines the functions for generating integers into a file and open a read stream.
//Author: Ye(Harvey) Xia  StudentID: 121866
//*******************************************************************************************
#include "../head/GenerateIntegers.h"
// Generate 3*10^6 intergers into a file and return a FILE pointer.
FILE * GenerateIntegers()
{
    if(remove("GenerateIntegers")==-1)
        printf("Create new file.\n");
    else
        printf("Deleted old file and create new file\n");
     FILE *fp = fopen("GenerateIntegers", "w");
     //printf("open writing file\n");
     int i;
     srand((unsigned)time(0));
      printf("gen int\n");
     for(i = 0; i < N; i++)
     {
        //printf("random number\n");
        //generate a number
        fprintf(fp, "%d ", rand());
        if(i%10 == 9)
            fprintf(fp, "\n");
     }
     fclose(fp);
     //printf("closing stream\n");
     fp = fopen("GenerateIntegers", "r");
     //printf("opening reading file\n");
     return fp;
}
