#include <stdio.h>
#define MAKS 256

int upperLower(char [], int, int);

int main()
{
    // deklarasi variable
    char teks[MAKS];
    int besar = 0;
    int kecil = 0;

    // input teks
    printf("masukan kalimat / kata : ");
    fgets(teks, sizeof teks, stdin);

    // memanggil fungsi untuk menghitung huruf besar & kecil
    upperLower(teks, kecil, besar);

}

int upperLower(char a[], int x, int y)
{
    int i;
    
    for(i = 0; a[i] != 0; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            x++;
        }
        if(a[i] >= 'a' && a[i] <= 'z'){
            y++;
        }
    }
    printf("\njumlah huruf kecil adalah = %d", y);
    printf("\njumlah huruf besar adalah = %d", x);
}