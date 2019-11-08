/*
3. Írj egy programot, ami kiírja a parancssori argumentumokat vízszintesen tükrözve!
példa:
	bemenet:	The Ape Of Naples
	kimenet:	selpaN fO epA ehT
*/
#include <stdio.h> // printf, scanf
#include <string.h> // strlen

int main(int argc, char* argv[])
{
	/* a ciklust visszafelé indítjuk el
	   0-ig nem megyünk el, mert argv[0] a program nevét tartalmazza */
	int i;
	for (i = argc - 1; i > 0; i--)
	{
		/* visszafelé indítunk egy ciklust
		   most az argumentumok karakterein megyünk végig és írjuk ki őket*/
        int l = strlen(argv[i]) - 1;
		int j;
		for (j = l; j >= 0; j--)
		{
			printf("%c", argv[i][j]);
		}
		printf(" ");
	}
	
	return 0;
}
