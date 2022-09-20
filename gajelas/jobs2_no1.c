#include <stdio.h>

int main()
{
    int option;

    printf("DAFTAR BARANG\n");
    printf("1. Hoodie\n");
    printf("2. Celana Jeans\n");
    printf("3. Kaos Oblong\n");
    printf("4. Tumbler\n");
    printf("5. Tempat Pensil\n");

    printf("SILAHKAN PILIH BARANG : ");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        if(option == 1)
        {
            system("cls");
            Hoodie();
            break;
        }
    case 2:
        if(option == 2)
        {
            system("cls");
            Celana();
            break;
        }
    case 3:
        if(option == 3);
        {
            system("cls");
            Kaos();
            break;
        }
    case 4:
        if(option == 4);
        {
            system("cls");
            Tumbler();
            break;
        }
    case 5:
        if(option == 5);
        {
            system("cls");
            tempat_pensil();
            break;
        }
    default:
        system("cls");
        printf("Invalid Option");
    }
}

void Hoodie()
{
    float harga, total, disc, jumlah_barang;

    printf("Deskripsi : \n");
    printf("Hoodie dengan kualitas\n");

    printf("Masukan Jumlah Barang   : ");
    scanf("%f", &jumlah_barang);

    harga = 50000;
    total = jumlah_barang * harga;

    if(total > 100000)
    {
        disc    = (total * 5) / 100;
        total   = total - disc;
    }

    printf("Jumlah Pembelian        : %1.f\n", jumlah_barang);
    printf("Total Bayar             :Rp %.f", total);
}

void Celana()
{
    float harga, total, disc, jumlah_barang;

    printf("Deskripsi : \n");
    printf("Celana dengan kualitas\n");

    printf("Masukan Jumlah Barang   : ");
    scanf("%f", &jumlah_barang);

    harga = 40000;
    total = jumlah_barang * harga;

    if(total > 100000)
    {
        disc    = (total * 5) / 100;
        total   = total - disc;
    }

    printf("Jumlah Pembelian        : %.f\n", jumlah_barang);
    printf("Total Bayar             :Rp %.f", total);
}

void Kaos()
{
    float harga, total, disc, jumlah_barang;

    printf("Deskripsi : \n");
    printf("Kaos dengan kualitas\n");

    printf("Masukan Jumlah Barang   : ");
    scanf("%f", &jumlah_barang);

    harga = 15000;
    total = jumlah_barang * harga;

    if(total > 100000)
    {
        disc    = (total * 5) / 100;
        total   = total - disc;
    }

    printf("Jumlah Pembelian        : %.f\n", jumlah_barang);
    printf("Total Bayar             :Rp %.f", total);
}

void Tumbler()
{
    float harga, total, disc, jumlah_barang;

    printf("Deskripsi : \n");
    printf("Tumbler dengan kualitas\n");

    printf("Masukan Jumlah Barang   : ");
    scanf("%f", &jumlah_barang);

    harga = 30000;
    total = jumlah_barang * harga;

    if(total > 100000)
    {
        disc    = (total * 5) / 100;
        total   = total - disc;
    }

    printf("Jumlah Pembelian        : %.f\n", jumlah_barang);
    printf("Total Bayar             :Rp %.f", total);
}

void tempat_pensil()
{
    float harga, total, disc, jumlah_barang;

    printf("Deskripsi : \n");
    printf("Tempat Pensil dengan kualitas\n");

    printf("Masukan Jumlah Barang   : ");
    scanf("%f", &jumlah_barang);

    harga = 8000;
    total = jumlah_barang * harga;

    if(total > 100000)
    {
        disc    = (total * 5) / 100;
        total   = total - disc;
    }

    printf("Jumlah Pembelian        : %.f\n", jumlah_barang);
    printf("Total Bayar             :Rp %.f", total);
}
