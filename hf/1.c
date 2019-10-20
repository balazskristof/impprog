/*
1. Írj egy programot, ami adott n-re kiszámolja pi egy közelítõ értékét!
https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Gregory%E2%80%93Leibniz_series
*/
#include <stdio.h>
#include <math.h> // pow miatt

int main()
{
	int n;
	scanf("%d", &n);
	
	float sum = 0;
	int i;
	for (i = 0; i <= n; i++)
	{
		sum += pow(-1, i)/(2*i+1);
	}
	
	printf("%f", 4*sum);
	
	return 0;
}
