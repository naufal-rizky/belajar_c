#include <stdio.h>
#define MAKS 30

int main()
{
    int i;
    char asal[] = "saya menyukai bahasa c";
    char hasil[MAKS];

    i = 0;
    while(asal[i] != '\0')
    {
        hasil[i] = asal[i]; i++;
    } 
    hasil[i] = '\0';
    printf("isi hasil : %s\n", hasil); 
}