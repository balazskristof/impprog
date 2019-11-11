// 11. Csinálj az előző két függvénynek saját header és forrás fájlt!
#include <math.h> // pow

// 9. Írj egy függvényt, ami egy bináris számot decimális számmá alakít!
int bin_to_dec(int n)
{
    int i = 0, maradek, eredmeny = 0;
    while(n != 0)
    {
        maradek = n % 10;
        eredmeny += maradek * pow(2, i);
        n /= 10;
        i++;
    }
    return eredmeny;
}

// 10. Írj egy függvényt, ami egy decimális számot bináris számmá alakít!
int dec_to_bin(int n)
{
    int i = 0, maradek, eredmeny = 0;
    while (n != 0)
    {
        maradek = n % 2;
        eredmeny += pow(10, i) * maradek;
        n /= 2;
        i++;
    }
    return eredmeny;
}