/*
2. Írj egy függvényt, ami megmondja egy számról, hogy palindrom-e.
pl. 1003001, 4224
*/
#include <stdio.h>

int main()
{
	int szam;
	scanf("%d", szam);
	
	int temp = szam, maradek = 0, forditottSzam = 0;
	while (temp != 0)
	{
		maradek += temp % 10;
		forditottSzam = forditottSzam * 10 + maradek;
		temp /= 10;
	}
	
	if (szam == forditottSzam) printf("palindrom");
	else printf("nem palindrom");
	
	return 0;
}
