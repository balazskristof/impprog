/*
5. Írj így programot, ami skalárszorzást végez két tetszõleges hosszú vektoron!
Kérj be egy N egész számot, majd csinálj két N-hosszú vektor
(allokálj dinamikusan két N-hosszú tömböt)
töltesd fel a vektorok elemeit a felhasználóval,
majd számítsd ki a skalárszorzatukat!
https://en.wikipedia.org/wiki/Dot_product#Algebraic_definition
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	printf("vektorok hossza: ");
	scanf("%d", &N);
	int* vector1 = (int *) malloc(N);
	int* vector2 = (int *) malloc(N);
	
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
	
	int skalar = 0;
	for (i = 0; i < N; i++)
	{
		skalar += vector1[i]*vector2[i];
	}
	
	printf("eredmeny: %d", skalar);
	
	return 0;
}
