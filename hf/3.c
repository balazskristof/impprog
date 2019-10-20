/*
3. Írj egy programot, ami kiírja a parancssori argumentumokat vízszintesen tükrözve!
példa:
	bemenet:	The Ape Of Naples
    kimenet:	selpaN fO epA ehT
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	for (i = argc - 1; i > 0; i--)
	{
		printf("%s ", strrev(argv[i]));
	}
	
	return 0;
}
