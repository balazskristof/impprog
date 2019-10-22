/*
3. Írj egy programot, ami kiírja a parancssori argumentumokat vízszintesen tükrözve!
példa:
	bemenet:	The Ape Of Naples
    kimenet:	selpaN fO epA ehT
*/
#include <stdio.h> // printf, scanf
#include <string.h> // strrev

int main(int argc, char* argv[])
{
	/* a ciklust visszafelé indítjuk el
	   0-ig nem megyünk el, mert argv[0] a program nevét tartalmazza */
	int i;
	for (i = argc - 1; i > 0; i--)
	{
		/* kiírás
		   strrev(string): megfordítja a stringet */
		printf("%s ", strrev(argv[i]));
	}
	
	return 0;
}
