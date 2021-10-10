int szokoev(int y)
{
    /* szökőév minden 4-el osztható év, kivéve a 100-al oszthatókat
       a 400 osztható évek azonban szökévek
       példa: 2000 szökőév, 2100 viszont nem
       
       tehát:
       ha az év osztható 4-el, és nem osztható 100-al, akkor szökőév
       vagy osztható 400-al, akkor is szökőév */
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}