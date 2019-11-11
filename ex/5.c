#include <stdio.h> // printf, scanf

int main()
{
    printf("irj be 0-t a kilepeshez\n");
    int szam;
    do {
        scanf("%d", &szam);
        if (szam == 0) break; // ha beírunk egy 0-t, a ciklus megáll és ettől a ponttól nem fog tovább haladni, folytatódik tovább a program többi része
        if (szam % 3 == 0 && szam % 5 == 0) // ha 3-al és 5-el is osztható
        {
            printf("fizz buzz\n");
        }
        else if (szam % 3 == 0) // ha 3-al osztható
        {
            printf("fizz\n");
        }
        else if (szam % 5 == 0) // ha 5-el osztható
        {
            printf("buzz\n");
        }
    } while (1);

    return 0;
}