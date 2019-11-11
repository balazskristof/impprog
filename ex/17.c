// 17. Írj egy programot, amiben a gép "gondol egy számra", vár bemenetet, és minden alkalommal kiírja, hogy a felhasználó a keresett számnál kisebbet tippelt, vagy nagyobbat, míg ki nem találja.
#include <stdio.h> // printf, scanf
#include <stdlib.h> // srand, rand
#include <time.h> // time

int main()
{
    int szam, be;
    srand(time(NULL));
    szam = rand() % 100 + 1; // 1-100-ig generálunk egy random számot
    do {
        printf("tipp: ");
        scanf("%d", &be);

        if (be < szam)
        {
            printf("a gondolt szam nagyobb!\n");
        }
        else if (be > szam)
        {
            printf("a gondolt szam kisebb!\n");
        }
        else
        {
            printf("kitalaltad a szamot!\n");
        }
    } while (be != szam);
    return 0;
}