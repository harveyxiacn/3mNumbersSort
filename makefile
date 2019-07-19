CC=gcc
CFLAGS=-c -Wall -std=c99 

obj = GenerateIntegers.o IntegerArrary.o MergeSort.o InsertionSort.o QuickSort.o HeapSort.o BubbleSort.o Run.o 

all: Run

Run: $(obj)
	$(CC) $(obj) -o $@

GenerateIntegers.o: ./src/GenerateIntegers.c ./head/GenerateIntegers.h
	$(CC) $(CFLAGS) $< 

IntegerArrary.o: ./src/IntegerArrary.c  ./head/IntegerArrary.h 
	$(CC) $(CFLAGS) $<

Run.o: ./src/Run.c  ./head/Run.h 
	$(CC) $(CFLAGS) $<

MergeSort.o: ./src/MergeSort.c  ./head/MergeSort.h 
	$(CC) $(CFLAGS) $<

InsertionSort.o: ./src/InsertionSort.c  ./head/InsertionSort.h 
	$(CC) $(CFLAGS) $<

QuickSort.o: ./src/QuickSort.c  ./head/QuickSort.h 
	$(CC) $(CFLAGS) $<

HeapSort.o: ./src/HeapSort.c  ./head/HeapSort.h 
	$(CC) $(CFLAGS) $<

BubbleSort.o: ./src/BubbleSort.c  ./head/BubbleSort.h 
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o ./Run GenerateIntegers

tarAll:
	tar -czf YeHarveyXia_ast2.tar.gz *
