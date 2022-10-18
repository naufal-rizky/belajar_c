#include <stdio.h>
#define MAKS 256

int spasi(char *);

int main()
{
    char teks[MAKS];
    int totalSpasi = 0, i;

    printf("masukan kalimat : ");
    gets(teks);

    for(i = 0; teks[i] != '\0'; i++){
        totalSpasi = totalSpasi + spasi(teks[i]);
    }
    printf("Jumlah spasi dalam kalimat ini = %d ", totalSpasi);
}

int spasi(char a[])
{
    if(a == ' '){
        return 1;
    } else{
        return 0;
    }
}