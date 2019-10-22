// 1. Írj egy függvényt, ami kiír egy tömböt
#include <stdio.h> // printf

//átadjuk a függvénynek a tömböt és a méretét
void print_arr(int* arr, int size)
{
	// a kiírás formátuma: {x1,x2...xn}
	printf("{");
	// végig megyünk az elemeken
	int i;
	for (i = 0; i < size; i++)
	{
		// kiírjuk az elemet
		printf("%d", arr[i]);
		// hogyha a ciklus változó még nem érte el az utolsó elemet, rakjunk egy vesszõt
		if (i != size-1) printf (",");
	}
	printf("}\n");
}
