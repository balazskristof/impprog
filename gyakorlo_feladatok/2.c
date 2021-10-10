// 2. Írj egy függvényt, ami a felhasználóval feltöltet egy tömböt
#include "1.h" // print_arr
#include "2.h" // get_arr

int main()
{
	// üres teszt tömb
	int arr[3];
	// bekérjük a tömbbe az elemeket
	get_arr(arr, sizeof(arr)/sizeof(arr[0]));
	// kiírjuk a tömböt
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}
