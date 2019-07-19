//***************************************************************************************
//Filename: Run.c
//This file defines the functions for starting programe and deal with situations.
//Author: Ye(Harvey) Xia  StudentID: 121866
//***************************************************************************************
#include "../head/Run.h"

int arraryIntegers[N], arraryTemp[N];


//main method for entering program
int main(int argc, char* argv[])
{
    printf("program start\n");

    fflush(stdout);
    FILE *fp = GenerateIntegers();
    //int flag = -1;
    double megerTime, insertionTime, quickTime, heapTime, bubbleTime;
    createArrary(arraryIntegers, N, fp);

    printf(" generation complete\n");
    /*while(flag == -1)
    {
        printf("***************************************************\n");
        printf("Please choose the item from menu:\n");
        printf("0. Exit.\n");
        printf("1. Merge-Sort\n");
        printf("2. Insertion-Sort\n");
        printf("3. Quick-Sort\n");
        printf("4. Heap-Sort\n");
        printf("5. Bubble-Sort\n");
        printf("6. Print all sort methods's counter and used time.\n");
        scanf("%d", &flag);
        switch(flag)
        {
        case 0:
            exit(0);
            break;
        case 1:*/
            copyArrary(arraryIntegers, N, arraryTemp);
            printf("***********************************************\n");
            printf("Before Merge-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            printf("Merge Sorting:\n");
            printf("***********************************************\n");
            clock_t start_timeMerge=clock(); //start time counting
            mergeSort(arraryTemp, 0, N-1);
            clock_t end_timeMerge=clock(); //end time counting
            printf("After Merge-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            megerTime = (double)(fabs(end_timeMerge-start_timeMerge))/CLOCKS_PER_SEC*1000;
            printf("Running time is: %lf ms, counted step is: %ld\n", megerTime, countMerge); //print running time
            printf("***********************************************\n");
            /*break;
        case 2:*/
            copyArrary(arraryIntegers, N, arraryTemp);
            printf("****************************************\n");
            printf("Before Heap-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            printf("Heap-Sorting:\n");
            clock_t start_timeHeap=clock(); //start time counting
            heapSort(arraryTemp, N);
            clock_t end_timeHeap=clock(); //end time counting
            printf("***********************************************\n");
            printf("After Heap-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            heapTime = (double)(fabs(end_timeHeap-start_timeHeap))/CLOCKS_PER_SEC*1000;
            printf("Running time is: %lf ms, counted step is: %ld\n", heapTime, countHeap); //print running time
            printf("***********************************************\n");
            /*break;
        case 3:*/
            copyArrary(arraryIntegers, N, arraryTemp);
            printf("***********************************************\n");
            printf("Before Quick-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            printf("Quick-Sorting:\n");
            clock_t start_timeQuick=clock(); //start time counting
            quickSort(0, N, arraryTemp);
            clock_t end_timeQuick=clock(); //end time counting
            printf("***********************************************\n");
            printf("After Quick-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            quickTime = (double)(fabs(end_timeQuick-start_timeQuick))/CLOCKS_PER_SEC*1000;
            printf("Running time is: %lf ms, counted step is: %ld\n", quickTime, countQuick); //print running time
            printf("***********************************************\n");
            /*break;
        case 4:*/
            copyArrary(arraryIntegers, N, arraryTemp);
            printf("***********************************************\n");
            printf("Before Insertion-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            printf("Insertion Sorting:\n");
            clock_t start_timeInsertion=clock(); //start time counting
            insertionSort(arraryTemp, N);
            clock_t end_timeInsertion=clock(); //end time counting
            printf("***********************************************\n");
            printf("After Insertion-Sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            insertionTime = (double)(fabs(end_timeInsertion-start_timeInsertion))/CLOCKS_PER_SEC*1000;
            printf("Running time is: %lf ms, counted step is: %ld\n", insertionTime, countInsertion); //print running time
            printf("***********************************************\n");
            /*break;
        case 5:*/
            copyArrary(arraryIntegers, N, arraryTemp);
            printf("***********************************************\n");
            printf("Before Bubble-sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            printf("Bubble-sorting:\n");
            clock_t start_timeBubble=clock(); //start time counting
            bubbleSort(arraryTemp, N);
            clock_t end_timeBubble=clock(); //end time counting
            printf("***********************************************\n");
            printf("After Bubble-sort:\n");
            //printArrary(arraryTemp, N);
            printf("***********************************************\n");
            bubbleTime = (double)(fabs(end_timeBubble-start_timeBubble))/CLOCKS_PER_SEC*1000;
            printf("Running time is: %lf ms, counted step is: %ld\n", bubbleTime, countBubble); //print running time
            printf("***********************************************\n");
            /*break;
        case 6:*/
            printf("***********************************************\n");
            printf("Times of sorting methods & steps:\n");
            printf("Merge-Sort: time: %lf, steps: %ld\n", megerTime, countMerge);
            printf("Insertion-Sort: time: %lf, steps: %ld\n", insertionTime, countInsertion);
            printf("Quick-Sort: time: %lf, steps: %ld\n", quickTime, countQuick);
            printf("Heap-Sort: time: %lf, steps: %ld\n", heapTime, countHeap);
            printf("Bubble-Sort: time: %lf, steps: %ld\n", bubbleTime, countBubble);
            printf("***********************************************\n");
            /*break;
        default:
            printf("Please Choose between 0 to 6.\n");
        }
        flag = -1;
    }*/
    return 0;
}


