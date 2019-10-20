#include <stdio.h>

void print_arr(int* arr, int size)
{
	printf("{");
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size-1) printf (",");
	}
	printf("}\n");
}
