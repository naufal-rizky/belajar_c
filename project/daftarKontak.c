#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Kontak
{
    char nama[100], nomor[100];
    int show;

} user[100];

int panjang = 0;

int main()
{
    int pilihan;
    menu:
    printf("\nMENU DAFTAR KONTAK\n\n");
    printf("1. Tambah Kontak\n");
    printf("2. Tampil Kontak\n");
    printf("3. Keluar\n");
    printf("Pilihan : ");
    scanf("%d", &pilihan);

    switch(pilihan)
    {
        case 1:
            tambah_kontak();
            break;
        case 2:
            tampil_kontak();
            break;
        case 3:
            keluar();
            break;
        default:
            printf("\nInputan Salah!\n");
            goto menu;
    }

}

void tambah_kontak()
{
    char nama[100], nomor[100];
    int cek = 0;
    int pilihan;

    system("cls");
    printf("=== Tambah Daftar Kontak ===\n");

    fflush(stdin);
    printf("Masukan Nama            : ");
    fgets(nama, sizeof(nama), stdin);

    fflush(stdin);
    printf("Masukan NIM             : ");
    fgets(nomor, sizeof(nomor), stdin);

    for (int i = 0; i < panjang; i++)
    {
        if (strcmp(user[i].nomor, nomor) == 0 && user[i].show == 1)
        {
            cek = 1;
        }
    }

    if (cek == 0)
    {
        strcpy(user[panjang].nama, nama);
        strcpy(user[panjang].nomor, nomor);

        user[panjang].show = 1;
        ++panjang;

        printf("\nData telah tersimpan!\n");
    }
    else
    {
        printf("Kontak ini sudah ada dalam daftar!\n\n");
        cek = 0;
    }

validate_tambah:
    printf("Tekan 1 untuk kembali tambah dan 0 untuk ke menu \n");
    printf("Pilihan : ");
    scanf("%d", &pilihan);

    if (pilihan == 0)
    {
        main();
    }

    else if (pilihan == 1)
    {
        tambah_kontak();
    }

    else
    {
        printf("Inputan invalid!\n");
        goto validate_tambah;
    }
}

void tampil_kontak()
{
    int pilihan;

    printf("\n=== Menampilkan Daftar Kontak ===\n\n");

    for (int i = 0; i < panjang; i++)
    {
        if (user[i].show == 1)
        {
            printf("Nama  : %s", user[i].nama);
            printf("Nomor : %s\n", user[i].nomor);
        }
    }
    if (panjang <= 0)
    {
        printf("Data masih kosong!\n\n");
    }

validate_tampil:
    printf("Tekan 1 untuk kembali tambah dan 0 untuk ke menu \n");
    printf("Pilihan : ");
    scanf("%d", &pilihan);

    if (pilihan == 0)
    {
        main();
    }

    else if (pilihan == 1)
    {
        tampil_kontak();
    }

    else
    {
        printf("Inputan invalid!\n");
        goto validate_tampil;
    }
}

void keluar()
{
    system("cls");
    printf("Berhasil Keluar\n\n");
    exit(0);
}