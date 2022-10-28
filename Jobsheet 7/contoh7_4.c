#include <stdio.h>

int main()
{
    struct zodiak
    {
        char nama[11];
        int tgl_awal;
        int bln_awal;
        int tgl_akhir;
        int bln_akhir;
    };

    static struct zodiak bintang = {"Sagitarius", 21, 11, 21, 12};
    int tgl_lhr, bln_lhr, thn_lhr;

    printf("masukan tgl lahir anda (xx-xx-xxxx) : ");
    scanf("%d-%d-%d", &tgl_lhr, &bln_lhr, &thn_lhr);

    if ((tgl_lhr >= bintang.tgl_awal && bln_lhr == bintang.bln_awal) || (tgl_lhr <= bintang.tgl_akhir && bln_lhr == bintang.bln_akhir))
    {
        printf("Bintang anda adalah %s\n", bintang.nama);
    }
    else
    {
        printf("Bintang anda bukan %s\n", bintang.nama);
    }
}