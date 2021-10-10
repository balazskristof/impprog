// 3. Írj egy függvényt, ami véletlenszerû értékekkel tölt fel egy tömböt
#include <stdlib.h> // rand, srand -- véletlenszerû generálás alapja, hogy ne ugyanazokat kapjuk 
#include <time.h> // time --  az srand paramétere lesz majd

void fill_arr(int* arr, int size)
{
	srand(time(NULL));
	/* megadjuk a seedet, ami a véletlenszerûgenerálás alapja lesz
	   az idõ megadásával a seed a jelenlegi idõ lesz
	   így két indítás után szinte lehetetlen lesz ugyanazokat az értékeket megkapni */
	int i;
	for (i = 0; i < size; i++)
	{
		arr[i] = rand(); // random számokkal feltöltjük a számot
		/* a rand 0-tól RAND_MAX-ig ad egy számot.
		   a RAND_MAX értéke azonban változó lehet a rendszerek között,
		   de garantáltan legalább 32767 */
		//arr[i] = rand() % 100 + 1; // 1-tõl 100-ig generált számok
		//képlet: rand() % maximum + minimum
	}
}
