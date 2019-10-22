/*
5. Írj így programot, ami skalárszorzást végez két tetszõleges hosszú vektoron!
Kérj be egy N egész számot, majd csinálj két N-hosszú vektor
(allokálj dinamikusan két N-hosszú tömböt)
töltesd fel a vektorok elemeit a felhasználóval,
majd számítsd ki a skalárszorzatukat!
https://en.wikipedia.org/wiki/Dot_product#Algebraic_definition
*/
#include <stdio.h> // printf, scanf
#include <stdlib.h> // calloc, free

int main()
{
	// beolvasás 1
	int N;
	printf("vektorok hossza: ");
	scanf("%d", &N);
	
	/* allokálás
	   allokáljuk a két vektort calloc(memória blokk hossza, egy elem mérete)-al
	   a calloc elé zárójelbe írjuk az elemek típusát (egyezikt a változó típusával) */
	int* vector1 = (int*) calloc(N, sizeof(int));
	int* vector2 = (int*) calloc(N, sizeof(int));
	
	// beolvasás 2
	int i;
	printf("elso vektor:\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &vector1[i]);
	}
	printf("masodik vektor:\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &vector2[i]);
	}
	
	// feldolgozás
	int skalar = 0;
	for (i = 0; i < N; i++)
	{
		skalar += vector1[i]*vector2[i]; // mátrix szorzás
	}
	
	// kiírás
	printf("eredmeny: %d", skalar);
	
	// memória ürítés
	free(vector1);
	free(vector2);
	
	return 0;
}
