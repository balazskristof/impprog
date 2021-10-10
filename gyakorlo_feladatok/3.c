// 3. Írj egy függvényt, ami véletlenszerû értékekkel tölt fel egy tömböt
#include "1.h" // print_arr
#include "3.h" // fill_arr

int main()
{
	// üres teszt tömb
	int arr[3];
	// feltöltjük a tömböt véletlenszerû elemekkel
	fill_arr(arr, sizeof(arr)/sizeof(arr[0]));
	// kiírjuk a tömböt
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}
