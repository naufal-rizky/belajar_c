#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int opt;

    while(true)
    {
        printf("\nPROGRAM BANGUN DATAR\n");
        printf("1. Bujur Sangkar\n");
        printf("2. Persegi Panjang\n");
        printf("3. Lingkaran\n");
        printf("4. Keluar\n");
        printf("SILAHKAN PILIH : ");
        scanf("%d", &opt);

        switch(opt)
        {
        case 1:
            if(opt == 1)
            {
                system("cls");
                persegi();
            }
        case 2:
            if(opt == 2)
            {
                system("cls");
                psg_panjang();
            }
        case 3:
            if(opt == 3)
            {
                system("cls");
                lingkaran();
            }
        case 4:
            if(opt == 4)
            {
                system("cls");
                exit(0);
            }
        }


    }
}

void persegi()
{
    float luas, keliling, sisi;

    printf("MASUKAN NILAI SISI : ");
    scanf("%f", &sisi);

    luas        = sisi * sisi;
    keliling    = 4 * sisi;

    printf("NILAI LUAS    : %.f\n", luas);
    printf("NILAI KELILING: %.f\n", keliling);

    return 0;

}

void psg_panjang()
{
    float luas, panjang, keliling, lebar;

    printf("MASUKAN NILAI PANJANG   : ");
    scanf("%f", &panjang);
    printf("MASUKAN NILAI LEBAR     : ");
    scanf("%f", &lebar);

    luas        = panjang * lebar;
    keliling    = 2 * (panjang + lebar);

    printf("NILAI LUAS    : %.f\n", luas);
    printf("NILAI KELILING: %.f\n", keliling);
}

void lingkaran()
{
    float radius, keliling, luas;
    float phi = 3.14;

    printf("Masukan jari-jari lingkaran: ");
    scanf("%f", &radius);

    keliling = 2 * phi * radius;
    luas = 0.5 * phi * radius * radius;

    printf("\nHasil lingkaran\n");
    printf("Jari-jari   : %.2f\n", radius);
    printf("Keliling    : %.2f\n", keliling);
    printf("Luas        : %.2f\n", luas);
}

//void question()
//{
//    char q;
//
//    printf("Hitung lagi? [y/n]  : ");
//    scanf("%c", &q);
//
//    if((q == 'y') || (q == 'Y'))
//    {
//
//    }
//}

