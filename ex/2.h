#include <stdio.h>

void get_arr(int* arr, int size)
{
	printf("tomb feltoltes:\n");
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d.: ", i+1);
		scanf("%d", &arr[i]);
	}
}
