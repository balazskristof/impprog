#include <stdio.h> // printf, scanf;
#include "7.h"

int main()
{
    int ev;
    printf("adj meg egy evet: ");
    scanf("%d", &ev);
    if (szokoev(ev))
    {
        printf("%d szokoev", ev);
    }
    else
    {
        printf("%d nem szokoev", ev);
    }
    return 0;
}