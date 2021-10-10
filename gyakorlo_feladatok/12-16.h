// 16. Csinálj az előző négy függvénynek saját header és forrás fájlt!
#include <ctype.h> // islower(), isupper(), tolower(), toupper()

// 12. Írj egy függvényt, ami nagybetűs szöveget kisbetűssé tesz!
char * kisbetuSzoveg(char *szoveg)
{
    int i;
    for(i = 0; szoveg[i]; i++)
    {
        szoveg[i] = tolower(szoveg[i]);
    }
    return szoveg;
}

// 13. Írj egy függvényt, ami kisbetűs szöveget nagybetűssé tesz!
char * nagybetuSzoveg(char *szoveg)
{
    int i;
    for(i = 0; szoveg[i]; i++)
    {
        szoveg[i] = toupper(szoveg[i]);
    }
    return szoveg;
}

// 14. írj egy függvényt, ami egy szöveg nagy betűit kicsivé teszi, a kicsiket naggyá!
char * kisnagybetuSzoveg(char *szoveg)
{
    int i;
    for(i = 0; szoveg[i]; i++)
    {
        if (islower(szoveg[i])) szoveg[i] = toupper(szoveg[i]);
        else if (isupper(szoveg[i])) szoveg[i] = tolower(szoveg[i]);
    }
    return szoveg;
}

// 15. Írj egy függvényt, ami egy szöveg minden szavának a kezdőbetűjét naggyá, a többi betőjét kicsivé teszi!
char * nagykezdobetuSzoveg(char *szoveg)
{
    int i, kezdobetu = 1;
    for (i = 0; szoveg[i]; i++)
    {
        if (kezdobetu && isalpha(szoveg[i]))
        {
            szoveg[i] = toupper(szoveg[i]);
            kezdobetu = 0;
        }
        else if (isalpha(szoveg[i]))
        {
            szoveg[i] = tolower(szoveg[i]);
        }
        else if (ispunct(szoveg[i]) || isspace(szoveg[i]))
        {
            kezdobetu = 1;
        }
    }
    return szoveg;
}