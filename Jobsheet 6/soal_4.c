#include <stdio.h>
#include <string.h>
#define MAKS 256

int newLine(char []);

int main()
{
    char teks[MAKS];
    printf("masukan kalimat / kata : ");
    gets(teks);
    newLine(teks);
}

int newLine(char a[])
{
    int i;

    for(i = 0; i < a[i]; i++){
        if(a[i] == ' '){
            printf("\n");
        }else{
            printf("%c", a[i]);
        }
    }
    printf(".");
    puts("");
}