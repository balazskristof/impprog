#include <stdio.h> // printf, scanf
#include <stdlib.h> // malloc, free, rand, srand
#include <time.h> // time

int main()
{
    srand(time(NULL)); // megadjuk a program futtatásakor aktuális időt seednek
    enum szinek_t { piros, zold, kek, db }; // ha a db az utolsó elem, akkor mindig annyi lesz az értéke, ahány szín van előtte
    // piros = 0, zold = 1, kek = 2, db = 3
    int N = rand() % 100 + 1; // a labdák darabszáma (1-100)
    int* labdak = (int*)malloc(sizeof(int)*N);
    int i;
    for (i = 0; i < N; i++)
    {
        labdak[i] = rand() % db; // számokat generálunk 0-tól (db-1)-ig
    }
    printf("valassz szint:\n0 - piros\n1 - zold\n2 - kek\n"); // utasítjuk a felhasználót
    int valasztas;
    scanf("%d", &valasztas); // beolvassuk a beírt szín számát
    int egyezes = 0;
    for (i = 0; i < N; i++)
    {
        if (labdak[i] == valasztas) egyezes++;
    }
    printf("%d labdabol %d szin egyezik", N, egyezes);
    free(labdak);
    return 0;
}