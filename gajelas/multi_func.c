#include <stdio.h>
#include <stdlib.h>

int main()
{
        int option;

        printf("ALAT KONVERSI MATA UANG \n");
        printf("1. Rupiah \n");
        printf("2. Euro \n");
        printf("3. US Dollar \n");
        printf("4. Yen \n");
        printf("5. Keluar \n");

        printf("Silahkan Pilih Opsi yang Tersedia : ");
        scanf("%d", &option);

        switch(option)
        {
        case 1:
            if(option == 1)
            {
                system("cls");
                RupiahConvt();
            }
        case 2:
            if(option == 2)
            {
                system("cls");
                EuroConvt();
            }
        case 3:
            if(option == 3)
            {
                system("cls");
                USDConvt();
            }
        case 4:
            if(option == 4)
            {
                system("cls");
                YenConvt();
            }
        case 5:
            if(option == 5)
            {
                system("cls");
            }
        }
}

void RupiahConvt()
{
    float jumlah, usd, yen, euro;

    printf("Masukan Jumlah Uang [RUPIAH] : Rp ");
    scanf("%f", &jumlah);

    euro    = jumlah * 0.000067;
    usd     = jumlah * 0.000067;
    yen     = jumlah * 0.0096;


    printf("Jumlah Uang [EURO]      : %.2f euro \n", euro);
    printf("Jumlah Uang [US DOLLAR] : %.2f usd \n", usd);
    printf("Jumlah Uang [YEN]       : %.2f yen \n", yen);
}

void EuroConvt()
{
    float jumlah, idr, usd, yen;

    printf("Masukan Jumlah Uang [EURO] : ");
    scanf("%f", &jumlah);

    idr     = jumlah * 14958;
    usd     = jumlah;
    yen     = jumlah * 144.44;

    printf("Jumlah Uang [RUPIAH]    : Rp %3.f \n", idr);
    printf("Jumlah Uang [US DOLLAR] : %.2f usd \n", usd);
    printf("Jumlah Uang [YEN]       : %.2f yen \n", yen);
}

void USDConvt()
{
    float jumlah, idr, euro, yen;

    printf("Masukan Jumlah Uang [USD] : ");
    scanf("%f", &jumlah);

    idr     = jumlah * 14958;
    euro     = jumlah;
    yen     = jumlah * 144.44;

    printf("Jumlah Uang [RUPIAH]    : Rp %3.f \n", idr);
    printf("Jumlah Uang [EURO]      : %.2f euro \n", euro);
    printf("Jumlah Uang [YEN]       : %.2f yen \n", yen);
}

void YenConvt()
{
    float jumlah, idr, eusd;

    printf("Masukan Jumlah Uang [YEN] : ");
    scanf("%f", &jumlah);

    idr     = jumlah * 103.94;
    eusd    = jumlah * 0.0069;

    printf("Jumlah Uang [RUPIAH]    : Rp %3.f \n", idr);
    printf("Jumlah Uang [US DOLLAR] : %.2f usd \n", eusd);
    printf("Jumlah Uang [EURO]      : %.2f euro \n", eusd);
}
