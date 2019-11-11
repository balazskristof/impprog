// 11. Csinálj az előző két függvénynek saját header és forrás fájlt!
#include "9-11.h"
#include <stdio.h> // printf

int main()
{
    // bin 1111 = dec 15
    printf("%d\n", bin_to_dec(1111));
    // dec 15 = bin 1111
    printf("%d\n", dec_to_bin(15));
    return 0;
}