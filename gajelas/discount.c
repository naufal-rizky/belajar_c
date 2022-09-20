#include <stdio.h>

int main()
{
    int jumlah_barang, menu;
    float pembelian, harga, diskon, bayar;

    printf("PILIH MENU\n");
    printf("[1] BAKSO\n");
    printf("[2] SOTO\n");
    printf("[3] NASI GORENG\n");
    printf("PILIH MENU : ");
    scanf("%d", &menu);

    switch(menu)
    {
    case 1:
        system("cls");
        printf("PILIHAN MENU BAKSO\n");
        printf("JUMLAH BARANG : ");
        scanf("%d", &jumlah_barang);

        harga       = 15000;
        pembelian   = harga * jumlah_barang;
        if(pembelian >= 100000)
        {
            diskon = 0.05 * pembelian;
            bayar = pembelian - diskon;

            printf("pembelian : Rp%.f", pembelian);
            printf("diskon : Rp%.f", diskon);
            printf("bayar : Rp%.f", bayar);
        }



    }

}
