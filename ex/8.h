#include <stdio.h> // printf

void fibonacci(int n)
{
    int elozo1 = 0, elozo2 = 1, kovetkezo;
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", elozo1);
        kovetkezo = elozo1 + elozo2;
        elozo1 = elozo2;
        elozo2 = kovetkezo;
    }
}