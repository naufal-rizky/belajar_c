#include <stdio.h>

int main()
{
    int pilih;
    
    printf("menu pilihan \n\n\[1] Hukum Ohm\n[2] Konversi Suhu");
    printf("\n\npilihan anda ?");
    scanf("%d", &pilih);

    switch (pilih)
    {
    case 1:
        HkOhm();
        break;
    case 2:
        konversiSuhu();
        break;
    default:
        printf("anda salah pilih ! ! !");
        break;
    }
}

void konversiSuhu()
{
    float c, r, f;

    printf("CELSIUS REAMUR FARENHEIT");
    printf("\n=======================");

    for(c = 0; c <= 100; c += 10){
        r   = c * 4 / 5;
        f   = c * 9 / 5 + 32;
        printf("\n%8.2f%8.2f%8.2f", c, r, f);
    }

}

void HkOhm()
{
    float v, r, i;

    printf("\nisikan nilai tegangannya ? ");
    scanf("%f", &v);
    printf("\nisikan nilai resistannya ? ");
    scanf("%f", &r);

    i = v / r;

    printf("\narus = %5.3f ampere dari tegangan = %5.1f volt dan resistansi = %5.1f ohm", i, v, r);
}