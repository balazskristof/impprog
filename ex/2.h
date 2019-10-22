// 2. Írj egy függvényt, ami a felhasználóval feltöltet egy tömböt
#include <stdio.h> // printf

void get_arr(int* arr, int size)
{
	// feltöltetjük a felhasználóval a tömböt
	printf("tomb feltoltes:\n"); // tudatjuk vele, hogy éppen feltöltetjük vele a tömböt
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d.: ", i+1); // jelezzük, hogy hanyadik elemrõl van szó
		scanf("%d", &arr[i]); // a beírt adatot tároljuk a tömbben
	}
}
