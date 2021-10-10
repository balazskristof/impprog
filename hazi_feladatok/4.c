/*
4. Írj egy függvényt, melyben a nagy hal megeszi a kicsit!
Valósíts meg ehhez egy hal struktúrát, melynek van neve (string), nagysága (szám), és "él-e még" (logikai) értéke.
A függvény mindkét halat kérje be, hasonlítsa össze a méretüket, a kisebbik hal élet-státuszát állítsa hamisra, a nagyobbik méretét pedig növelje a bekebelezett kicsi méretével.
Egyenlõ méretû halak esetén ne történjen semmi, döglött hal(ak) esetén úgyszint.
*/
#include <stdio.h> // printf, scanf
#include <stdbool.h> // bool típus

// létrehozzuk a hal struktúrát
typedef struct hal_t {
	char nev[64]; // a hal neve
	int meret; // a hal mérete
	bool el; // él-e a hal
} hal;

void hal_be(hal *hal)
{
	// beolvasás
	char nev[64];
	printf("hal neve: ");
	scanf("%s", hal->nev);
	
	int meret;
	printf("hal merete: ");
	scanf("%d", &hal->meret);
	
	hal->el = true;
	
	return; // vége a beolvasásnak
}

void hal_harc(hal *hal1, hal *hal2)
{
	/* feldolgozás
	   ha valamelyik hal halott, nem lesz harc */
	if (hal1->el == false || hal2->el == false)
	{
		printf("doglott hal nem harcol.");
		return;
	}
	
	/* ha az egyik hal mérete nagyobb, akkor a másik meghal
	   a gyõztes a vesztes méretével gyarapodik
	   végül a vesztes élet státusza hamisra vált */
	if (hal1->meret > hal2->meret)
	{
		printf("%s meghalt.", hal2->nev);
		hal1->meret += hal2->meret;
		hal2->el = false;
	}
	else if (hal2->meret > hal1->meret)
	{
		printf("%s meghalt.", hal1->nev);
		hal2->meret += hal1->meret;
		hal1->el = false;
	}
	else // döntetlen esetén senki sem hal meg
	{
		printf("senki sem halt meg.");
	}
	return; // vége a harcnak
}

int main()
{
	/* létrehozzuk a struktúra alapján a halakat
	   és beolvassuk õket */
	hal hal1;
	hal_be(&hal1);
	hal hal2;
	hal_be(&hal2);
	
	// összeütköztetjük õket
	hal_harc(&hal1, &hal2);
	
	return 0;
}
