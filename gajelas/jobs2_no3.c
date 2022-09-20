#include <stdio.h>

int main()
{
    float p_dptan, jasa, komisi, total;

    printf("Jumlah Pendapatan : ");
    scanf("%f", &p_dptan);

    if(p_dptan == 200000)
    {
        system("cls");
        jasa    = 10000;
        komisi  = (p_dptan * 10) / 100;
        total   = p_dptan + jasa + komisi;

        printf("Jumlah Uang Jasa    :Rp %.f\n", jasa);
        printf("Jumlah Uang Komisi  :Rp %.f\n", komisi);
        printf("Total Uang          :Rp %.f\n", total);
    }
    else if((p_dptan > 200000) && (p_dptan <= 500000))
    {
        system("cls");
        jasa    = 20000;
        komisi  = (p_dptan * 15) / 100;
        total   = p_dptan + jasa + komisi;

        printf("Jumlah Uang Jasa    :Rp %.f\n", jasa);
        printf("Jumlah Uang Komisi  :Rp %.f\n", komisi);
        printf("Total Uang          :Rp %.f\n", total);
    }
    else if(p_dptan > 500000)
    {
        system("cls");
        jasa    = 30000;
        komisi  = (p_dptan * 20) / 100;
        total   = p_dptan + jasa + komisi;

        printf("Jumlah Uang Jasa    :Rp %.f\n", jasa);
        printf("Jumlah Uang Komisi  :Rp %.f\n", komisi);
        printf("Total Uang          :Rp %.f\n", total);
    }
    else
    {
        system("cls");
        jasa    = 0;
        komisi  = 0;
        total   = p_dptan;

        printf("Jumlah Uang Jasa    :Rp %.f\n", jasa);
        printf("Jumlah Uang Komisi  :Rp %.f\n", komisi);
        printf("Total Uang          :Rp %.f\n", total);
    }
}
