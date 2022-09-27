#include <stdio.h>

//mendefinisikan bahwa MAKS bernilai 10
#define MAKS 10

int main()
{
    float rata, total;
    
    //deklarasi array dengan panjang MAKS = 10
    float num[MAKS];

    for (int i = 1; i <= MAKS; i++)
    {
        printf("masukan angka ke-%d : ", i);
        scanf("%f", &num[i]);

        //menjumlah nilai array
        total = total + num[i];    
    }
    //menghitung rata-rata
    rata = total / MAKS;

    printf("nilai rata-rata : %g", rata);
}