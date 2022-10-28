#include <stdio.h>
#include <string.h>

struct Siswa
{
    /* data */
    char nama[20];
    char alamat[30];
    int  umur;
};

int main()
{
    struct Siswa siswa1;
    struct Siswa siswa2;
    struct Siswa siswa3;
    struct Siswa siswa4;

    strcpy(siswa1.nama, "Cak Lontong");
    strcpy(siswa1.alamat, "Surabaya");
    siswa1.umur = 40;
    
    strcpy(siswa2.nama, "Entis Sutisna");
    strcpy(siswa2.alamat, "Bandung");
    siswa2.umur = 45;

    strcpy(siswa3.nama, "Nunung Srimulat");
    strcpy(siswa3.alamat, "Solo");
    siswa3.umur = 50;

    strcpy(siswa4.nama, "Ayu Tinting");
    strcpy(siswa4.alamat, "Depok");
    siswa4.umur = 28;

    printf("---------------------------------------------------------------------------------");
    printf("\n           Nama                                Alamat                  Umur   ");
    printf("\n%20s  %30s  %8d", siswa1.nama, siswa1.alamat, siswa1.umur);
    printf("\n%20s  %30s  %8d", siswa2.nama, siswa2.alamat, siswa2.umur);
    printf("\n%20s  %30s  %8d", siswa3.nama, siswa3.alamat, siswa3.umur);
    printf("\n%20s  %30s  %8d", siswa4.nama, siswa4.alamat, siswa4.umur);
}
