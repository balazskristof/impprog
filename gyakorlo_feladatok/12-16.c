#include "12-16.h"
#include <stdio.h> // printf

int main()
{
    char szoveg[] = "Ha hA HA";
    printf("%s\n", kisbetuSzoveg(szoveg));
    printf("%s\n", nagybetuSzoveg(szoveg));
    printf("%s\n", kisnagybetuSzoveg(szoveg));
    printf("%s\n", nagykezdobetuSzoveg(szoveg));
}