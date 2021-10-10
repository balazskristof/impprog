#include <stdio.h> // printf

int main()
{
    // Az első 32 és a 127. ASCII karakter nem kiírható (vezérlőkarakterek)
    int i;
    for (i = 32; i < 127; i++)
    {
        printf("%d \"%c\"\n", i, i); // a számokat a hozzájuk tartozó ASCII karakterrel reprezentáljuk
    }
    return 0;
}

// Az ASCII karakterekről itt bővebben olvashatsz: https://en.wikipedia.org/wiki/ASCII
// 128-tól 255 léteznek a bővített ASCII karakterek, azokról itt olvashatsz: https://en.wikipedia.org/wiki/Extended_ASCII