#include "stdio.h"
#include "stdlib.h"
#include "sumoftwoints.h"

#define PARANCSSOR

int main(int argc, const char** argv)
{
	int result, a, b;
	// parancssori paraméter feldolgozás előtti főprogram
	/*
	int array[] = {2, 5, -7, 6, 9};
	result = SumOfTwoInts(array, 7, 5, &a, &b);
	if (result) printf("7: igen, indexek: %d, %d\n", result, a, b);
	else printf("7: nem\n");
	result = SumOfTwoInts(array, -2, 5, &a, &b);
	if (result) printf("-2: igen, indexek: %d, %d\n", result, a, b);
	else printf("-2: nem\n");
	result = SumOfTwoInts(array, 12, 5, &a, &b);
	if (result) printf("12: igen, indexek: %d, %d\n", result, a, b);
	else printf("12: nem\n");
	*/
	if (argc != 4) return 1;
	
	int item = atoi(argv[1]);
	unsigned int N = atoi(argv[2]);
	
	int* array = (int*)malloc(N * sizeof(int));
	if (!array) return 1;
	
	int i = 0, j = 0, n = 0;
	while (argv[3][i] != '\0')
	{
		if (argv[3][i] != ':')
		{
			n = n * 10 + (argv[3][i] - 48);
			array[j] = n;
		}
		else
		{
			j++;
			n = 0;
		}
		i++;
	}
	
	result = SumOfTwoInts(array, item, N, &a, &b);
	if (result) printf("%d: igen, indexek: %d, %d\n", item, result, a, b);
	else printf("%d: nem\n", item);
	
	free(array);
	return 0;
}
