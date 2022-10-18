#include <stdio.h>
#define MAKS 256

int main()
{
    int i, jumkar = 0;
    char teks[MAKS];

    puts("masukan suatu kalimat (maks 256 karakter).");
    puts("saya akan menghitung jumlah karakternya.\n");
    fgets(teks, sizeof teks, stdin);
    for(i = 0; teks[i]; i++)
        jumkar++;
    printf("\njumlah karakter = %d\n", jumkar);
}