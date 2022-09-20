#include <stdio.h>

int main()
{
    char tipe;

    printf("TIPE RUMAH\n");
    printf("TIPE A\n");
    printf("TIPE B\n");
    printf("PILIH TIPE RUMAH : ");
    scanf("%c", &tipe);

    if((tipe == 'A') || (tipe == 'a'))
    {
        system("cls");
        rumahA();
    }
    else if((tipe == 'B') || (tipe == 'b'))
    {
        system("cls");
        rumahB();
    }

}

void rumahA()
{
    float luas_tanah, luas_bang, harga_sat_tnh, harga_sat_bang, harga_tnh, harga_bang, harga_total;

    printf("Masukan Luas Tanah      : ");
    scanf("%f", &luas_tanah);
    printf("Masukan Luas Bangunan   : ");
    scanf("%f", &luas_bang);

    harga_sat_tnh   = 40000;
    harga_sat_bang  = 150000;
    harga_tnh       = harga_sat_tnh * luas_tanah;
    harga_bang      = harga_sat_bang * luas_bang;
    harga_total     = harga_tnh + harga_bang;

    printf("Total Harga Tanah       : Rp %8.2f\n", harga_tnh);
    printf("Total Harga Bangunan    : Rp %8.2f\n", harga_bang);
    printf("Harga Total             : Rp %8.2f\n", harga_total);


}

void rumahB()
{
    float luas_tanah, luas_bang, harga_sat_tnh, harga_sat_bang, harga_tnh, harga_bang, harga_total;

    printf("Masukan Luas Tanah      : ");
    scanf("%f", &luas_tanah);
    printf("Masukan Luas Bangunan   : ");
    scanf("%f", &luas_bang);

    harga_sat_tnh   = 50000;
    harga_sat_bang  = 200000;
    harga_tnh       = harga_sat_tnh * luas_tanah;
    harga_bang      = harga_sat_bang * luas_bang;
    harga_total     = harga_tnh + harga_bang;

    printf("Total Harga Tanah       : Rp %8.2f\n", harga_tnh);
    printf("Total Harga Bangunan    : Rp %8.2f\n", harga_bang);
    printf("Harga Total             : Rp %8.2f\n", harga_total);


}
