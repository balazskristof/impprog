#include "4.h"

// innentől kezdve a SOROK és az OSZLOPOK értéke 2
#define SOROK    2
#define OSZLOPOK 2

int main()
{
    int matrix[SOROK][OSZLOPOK]; // 2*2 mátrix
    get_matrix(SOROK, OSZLOPOK, matrix); // bekérjük a mátrix elemeit
    print_matrix(SOROK, OSZLOPOK, matrix); // kiírjuk a mátrix elemeit
    printf("\n");
    fill_matrix(SOROK, OSZLOPOK, matrix); // random számokkal töltjük fel a mátrixot
    print_matrix(SOROK, OSZLOPOK, matrix); // kiírjuk ismét a mátrix elemeit
    
    return 0;
}