#include <stdio.h>

int main()
{
    int bulan, tahun, hari;
    int jumlah_hari[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    puts("memperoleh jumlah hari");
    puts("PADA SUATU BULAN DAN SUATU TAHUN");
    puts("------------------------------ ");
    printf("Masukan bulan (1-12) : ");
    scanf("%d", &bulan);
    printf("Masukan tahun : ");
    scanf("%d", &tahun);

    if(bulan == 2)
    {
        if(tahun % 4 == 0){
            hari = 29;
        } else {
            hari = 28;
        }
    } else {
        hari = jumlah_hari[bulan-1];
    }
    printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n", bulan, tahun, hari);
}