/*
1. Írj egy programot, ami adott n-re kiszámolja pi egy közelítõ értékét!
https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Gregory%E2%80%93Leibniz_series
*/
#include <stdio.h> // printf, scanf
#include <math.h> // pow

int main()
{
	// beolvasás
	int n;
	scanf("%d", &n);
	
	// számítás
	float sum = 0; // float: lebegõpontos szám (tizedes)
	int i; // ciklus változó. C-ben nem lehet a ciklusban megadni
	for (i = 0; i <= n; i++)
	{
		// pow(x, y) -> x-et az y. hatványra emeli
		sum += pow(-1, i)/(2*i+1); // formulához lásd a wikipédia linket
	}
	
	// kiírás
	printf("%f", 4*sum); // %f: float jelölõje a szövegekben
	
	return 0;
}
