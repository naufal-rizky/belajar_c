#include <stdio.h>

int main()
{
    for(int baris = 0; baris <= 5; baris++){
        for (int kolom = 0; kolom < baris; kolom++)
        {
            printf("%d", baris);
        }
        printf("\n");
    }
}