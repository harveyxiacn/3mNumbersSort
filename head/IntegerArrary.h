//***************************************************************************************
//Filename: IntegerArrary.h
//This file declares the functions for using arrary.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#ifndef _arrary_
#define _arrary_
#include "../head/GenerateIntegers.h"

//create arrary from the file which contain 3*10^6 integers
extern void createArrary(int arrary[], const int n, FILE *fp);
//print the arrary
extern void printArrary(int arrary[], const int n);
//copy the arrary
extern void copyArrary(int arrary[], const int n, int arraryCp[]);
#endif
