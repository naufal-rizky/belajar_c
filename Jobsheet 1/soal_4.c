#include <stdio.h>

int main()
{
    float usd, idr, yen, euro;

    euro    = 250;
    idr     = euro * 14949.91;
    usd     = euro;
    yen     = euro * 144.44;

    printf("JUMLAH UANG [EURO]  : %.2f eur\n", euro);
    printf("JUMLAH UANG [IDR]   : Rp %.1f \n", idr);
    printf("JUMLAH UANG [USD]   : %.2f usd\n", usd);
    printf("JUMLAH UANG [YEN]   : %.1f yen\n", yen);
}
