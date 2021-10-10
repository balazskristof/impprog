#include "sumoftwoints.h"

static int indexof(int* array, int item, int size)
{
	int i = 0;
	while (array[i] != item && i <= size - 1) i++;
	return i;
}

int SumOfTwoInts(int* array, int item, int size, int* a, int* b)
{
	int result = 0;
	int i = 0, idx, difference;
	while (!result && i <= size - 1)
	{
		difference = item - array[i];
		idx = indexof(array, difference, size);
		if (idx <= size - 1 && i != idx)
		{
			*a = i;
			*b = idx;
			return 1;
		}
		else i++;
	}
	*a = -1;
	*b = -1;
	return 0;
}
