#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

void fill_arr(int* arr, int size)
{
	//srand(time(NULL));
	int i;
	for (i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}
