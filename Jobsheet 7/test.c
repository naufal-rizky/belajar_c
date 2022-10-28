#include <stdio.h>
#include <string.h>
#define MAKS 256

int fungsi(char []);

int main()
{
    char teks[MAKS];
    printf("masukan kalimat :");
    gets(teks);
    fungsi(teks);
}

int fungsi(char a[])
{
    int i, j;

    for(i = strlen(a); i > 0; i--){
        for(j = 0; j < i; j++){
            printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}