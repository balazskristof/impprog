// 1. Írj egy függvényt, ami kiír egy tömböt
#include "1.h" // print_arr

int main()
{
	// egy szimpla 3 elemû teszt tömb
	int arr[3] = {42, 69, 420};
	// átadjuk a tömböt és felhasználjuk a sizeof-ot a tömb méretének kiszámításához
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));
	/*
	ha minden jól ment a képernyõn ez jelenik meg:
	{42, 69, 420}
	*/
	return 0;
}
