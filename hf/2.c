/*
2. Írj egy függvényt, ami megmondja egy számról, hogy palindrom-e.
pl. 1003001, 4224
*/
#include <stdio.h> // printf, scanf

int main()
{
	// beolvasás
	int szam;
	scanf("%d", szam);
	
	// számítás
	// az eredeti számot berakjuk a tempbe, amit lebontunk 10-el osztva
	// a forditottSzamot felszorozzuk 10-el és hozzáadjuk a maradékot
	// végül felépül az eredeti számunk tükörképe
	int temp = szam, maradek = 0, forditottSzam = 0;
	while (temp != 0)
	{
		maradek += temp % 10;
		forditottSzam = forditottSzam * 10 + maradek;
		temp /= 10;
	}
	
	// kiírás
	if (szam == forditottSzam) printf("palindrom");
	else printf("nem palindrom");
	
	return 0;
}
