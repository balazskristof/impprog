/*
4. Írj egy függvényt, melyben a nagy hal megeszi a kicsit!
Valósíts meg ehhez egy hal struktúrát, melynek van neve (string), nagysága (szám), és "él-e még" (logikai) értéke.
A függvény mindkét halat kérje be, hasonlítsa össze a méretüket, a kisebbik hal élet-státuszát állítsa hamisra, a nagyobbik méretét pedig növelje a bekebelezett kicsi méretével.
Egyenlõ méretû halak esetén ne történjen semmi, döglött hal(ak) esetén úgyszint.
*/
#include <stdio.h>

typedef struct hal_t {
	char nev[64];
	int meret;
	int el;
} hal;

void hal_be(hal *hal)
{
	char nev[64];
	printf("hal neve: ");
	scanf("%s", hal->nev);
	
	int meret;
	printf("hal merete: ");
	scanf("%d", &hal->meret);
	
	hal->el = 1;
	
	return;
}

void hal_harc(hal *hal1, hal *hal2)
{
	if (hal1->el == 0 || hal2->el == 0)
	{
		printf("doglott hal nem harcol.");
		return;
	}
	
	if (hal1->meret > hal2->meret)
	{
		printf("%s meghalt.", hal2->nev);
		hal1->meret += hal2->meret;
		hal2->el = 0;
	}
	else if (hal2->meret > hal1->meret)
	{
		printf("%s meghalt.", hal1->nev);
		hal2->meret += hal1->meret;
		hal1->el = 0;
	}
	else
	{
		printf("senki sem halt meg.");
	}
	return;
}

int main()
{
	hal hal1;
	hal_be(&hal1);
	hal hal2;
	hal_be(&hal2);
	
	hal_harc(&hal1, &hal2);
	
	return 0;
}
