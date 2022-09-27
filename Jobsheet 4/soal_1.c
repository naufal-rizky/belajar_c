#include <stdio.h>

int main()
{
    int menu;
    float phi = 3.14, l, k, s, r, le, p;

    printf("PILIHAN RUMUS BANGUN DATAR\n");
    printf("[1] Bujur Sangkar\n");
    printf("[2] Persegi Panjang\n");
    printf("[3] Lingkaran\n");
    printf("SILAHKAN PILIH  : ");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            system("cls");
            bujur_sangkar();
            break;
        case 2:
            system("cls");
            persegi_panjang();
            break;
        case 3:
            system("cls");
            lingkaran();
            break;
        default:
            printf("Pilihan Tidak Valid\n");
            break;
    }
}

void bujur_sangkar()
{
    float s, l, k;
    printf("Anda Memilih Bujur Sangkar\n\n");
    printf("Masukan Nilai Sisi      : ");
    scanf("%f", &s);

    l   = s * s;
    k   = 4 * s;

    printf("NILAI LUAS              : %.2f\n", l);
    printf("NILAI KELILING          : %.2f\n", k);
}

void persegi_panjang()
{
    float p, le, l, k;
    printf("Anda Memilih Persegi Panjang\n\n");
    printf("Masukan Nilai Panjang   : ");
    scanf("%f", &p);
    printf("Masukan Nilai Lebar     : ");
    scanf("%f", &le);

    l   = p * le;
    k   = 2 * (p + le);

    printf("NILAI LUAS              : %.2f\n", l);
    printf("NILAI KELILING          : %.2f\n", k);
}

void lingkaran()
{
    float phi = 3.14, l, k, r;
    printf("Anda Memilih Lingkaran\n\n");
    printf("Masukan Nilai Radius    : ");
    scanf("%f", &r);

    k   = 2 * phi * r;
    l   = phi * r * r;

    printf("NILAI LUAS              : %.2f\n", l);
    printf("NILAI KELILING          : %.2f\n", k);
}