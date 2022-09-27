#include <stdio.h>

int main()
{
    int baris = 5, kolom;
    while(baris >= 1){
        for (kolom = 0; kolom < baris; kolom++)
        {
            printf("%d", baris);
        }
        printf("\n");
        baris--;
    }
}