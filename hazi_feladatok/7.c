/*
7. Írj egy programot, ami véletlenszerűen generál N db színes labdát, bekér egy színt a felhasználótól, majd kiírja, hogy hány a felhasználó által megadottal egyező színű labda van!
A színek kezeléséhez használj felsorolási típust!
*/
#include <stdio.h> // printf, scanf
#include <stdlib.h> // malloc, free, rand, srand
#include <string.h> // strcmp
#include <time.h> // time

typedef enum szinek_t { PIROS, ZOLD, KEK, DARAB } szin;
// PIROS = 0, ZOLD = 1, KEK = 2

int szin_szamolas(int* labdak, int n, szin szin_in)
{
    int db = 0;
    for (int i = 0; i < n; i++)
        if (szin_in == labdak[i]) db++;
    return db;
}

int main()
{
    srand(time(NULL)); // megadjuk a program futtatásakor aktuális időt seednek
    int N = rand() % 100 + 1; // a labdák darabszáma (1-100)
    int* labdak = (int*)malloc(sizeof(int)*N);
    int i;
    for (i = 0; i < N; i++)
    {
        labdak[i] = rand() % DARAB; // számokat generálunk 0-tól (db-1)-ig
    }
    printf("valassz szint:\npiros, zold, kek\n"); // utasítjuk a felhasználót
    char input[256];
    scanf("%s", input); // beolvassuk a beírt szín számát
    szin szin_in;
    if (strcmp(input, "piros") == 0) szin_in = PIROS;
    if (strcmp(input, "zold") == 0) szin_in = ZOLD;
    if (strcmp(input, "kek") == 0) szin_in = KEK;
    printf("%d-bol %d db %s szinu labda van", N, szin_szamolas(labdak, N, szin_in), input);
    free(labdak);
    return 0;
}
