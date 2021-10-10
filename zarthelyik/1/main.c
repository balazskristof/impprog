#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main()
{
    vector v;
	printf("10 elemu sorozat letrehozasa...\n");
    if (!initialize(&v, 10))
	{
		printf("Sikertelen inicializacio!\n");
		return -1;
	}
	printf("\nFeltoltes 1-tol 11-ig\n");
	for (int i = 1; i <= 11; i++)
		if (!append(&v, i))
			printf("Uj elem (%d) hozzaadasa sikertelen!\n", i);
	printf("A vector kapacitasa %d, elemeinek szama %d, tartalma:\n", v.capacity, v.count);
	for (int i = 0; i < v.count; i++) printf("%d ", v.elements[i]);
	
	printf("\n\nTorles teszt.\n");
	erase(&v, 5);
	printf("5. elem torolve\n");
	erase(&v, 6);
	printf("6. elem torolve\n");
	printf("A vector kapacitasa %d, elemeinek szama %d, tartalma:\n", v.capacity, v.count);
	for (int i = 0; i < v.count; i++) printf("%d ", v.elements[i]);
	
	printf("\n\nBeszuroproba.\n");
	if (!insert(&v, 9, 9999)) printf("9999 beszurasa 9. indexre nem sikerult\n");
	if (insert(&v, 5, 9999)) printf("9999 beszuarasa 5. indexre sikerult\n");
	printf("\nA teszt lezajlott, a vector kiuritesre kerul.");
    dispose(&v);
    return 0;
}