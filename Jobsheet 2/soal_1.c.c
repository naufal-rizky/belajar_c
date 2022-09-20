#include <stdio.h>

int main()
{
    int menu, jumlah_barang;
    float pembelian, diskon, harga;

    printf("PILIHAN MENU\n");
    printf("[1] BAKSO\n");
    printf("[2] SOTO\n");
    printf("[3] NASI GORENG\n");
    printf("[4] MIE GORENG\n");
    printf("PILIH MENU : ");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            system("cls");
            printf("Anda Memilih Bakso\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 10000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon      = (pembelian * 5) / 100;
                pembelian   = pembelian - diskon;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        case 2:
            system("cls");
            printf("Anda Memilih Soto\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 15000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon      = (pembelian * 5) / 100;
                pembelian   = pembelian - diskon;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        case 3:
            system("cls");
            printf("Anda Memilih Nasi Goreng\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 20000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon      = (pembelian * 5) / 100;
                pembelian   = pembelian - diskon;;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        case 4:
            system("cls");
            printf("Anda Memilih Mie Goreng\n\n");
            printf("Masukan Jumlah Yang Ingin Dibeli : ");
            scanf("%d", &jumlah_barang);

            harga       = 10000;
            pembelian   = harga * jumlah_barang;

            if(pembelian >= 100000)
            {
                diskon      = (pembelian * 5) / 100;
                pembelian   = pembelian - diskon;
            }

            printf("TOTAL PEMBELIAN     : Rp%.f\n", pembelian);
            printf("JUMLAH DISKON       : Rp%.f\n", diskon);
            printf("TOTAL BAYAR         : Rp%.f\n", pembelian);
            break;
        default:
            printf("Pilihan Tidak Valid");
            break;
    }

}
