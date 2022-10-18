#include <stdio.h>

int main()
{
    char name[15];

    printf("masukan nama anda : ");
    scanf("%s", name);
    printf("\nhalo, %s. selamat belajar string.\n", name);
    puts(name);
}