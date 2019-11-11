// 4. Írd meg az előző három függvényt mátrixokra!
#include <stdio.h> // printf, scanf
#include <stdlib.h> // rand, srand
#include <time.h> // time

/* mátrix kiiratása
   az újabb fordítóknak köszönhetően használhatunk változó méretű tömböket a paraméter listákban,
   hogyha azokat a változókat a listában előtte már átadjuk */
void print_matrix(int sorok, int oszlopok, int matrix[sorok][oszlopok])
{
    int i, j;
    for (i = 0; i < sorok; i++)
    {
        for (j = 0; j < oszlopok; j++)
        {
            printf("%d\t", matrix[i][j]); // tabulátorral (\t karakter) elválasztva írjuk ki a mátrix elemeit
        }
        printf("\n");
    }
}

// mátrix feltöltetése a felhasználóval
void get_matrix(int sorok, int oszlopok, int matrix[sorok][oszlopok])
{
    printf("matrix feltoltes:\n");
    int i, j;
    for (i = 0; i < sorok; i++)
    {
        for (j = 0; j < oszlopok; j++)
        {
            printf("%d. sor %d. oszlop: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// mátrix feltöltése random számokkal
void fill_matrix(int sorok, int oszlopok, int matrix[sorok][oszlopok])
{
	srand(time(NULL));
	int i, j;
	for (i = 0; i < sorok; i++)
	{
        for (j = 0; j < oszlopok; j++)
        {
            matrix[i][j] = rand();
        }
	}
}