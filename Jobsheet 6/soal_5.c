#include <stdio.h>
#include <string.h>

int palindrom(char *, int, int);

int main()
{
    char text[20];
    int i = 0;
    int n = sizeof(text)/sizeof(text[0]);

    printf("Masukan Kata / Kalimat : ");
    scanf("%s", text);

    if(palindrom(text, i, strlen(text) - 1)){
        printf("%s adalah palindrom", text);
    }
    else
    {
        printf("%s bukan palindrom", text);
    }
}

int palindrom(char *txt, int x, int y)
{
    if(NULL == txt || x < 0 || y < 0){
        return 0;
    }
    if(x >= y){
        return 1;
    }
    if(txt[x] == txt[y]){
        return palindrom(txt, x+1, y-1);
    }
    return 0;
}