#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

struct Kontak
{
    char nama[100], nomor[100];
    int show;

} user[100];

int panjang = 0;

int main()
{
    system("cls");
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
        sleep(5);
        main();
    }
    else
    {
        printf("Kontak ini sudah ada dalam daftar!\n\n");
        cek = 0;
        sleep(5);
        main();
    }
}

void tampil_kontak()
{
    printf("\n=== Menampilkan Daftar Kontak ===\n\n");

    for (int i = 0; i < panjang; i++)
    {
        if (user[i].show == 1)
        {
            printf("Nama  : %s", user[i].nama);
            printf("Nomor : %s\n", user[i].nomor);
        }
    }
    sleep(2);
    main();
    if (panjang <= 0)
    {
        printf("Data masih kosong!\n\n");
        sleep(5);
        main();
    }
}

void keluar()
{
    system("cls");
    printf("Berhasil Keluar\n\n");
    exit(0);
}