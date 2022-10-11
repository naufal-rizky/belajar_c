#include <stdio.h>

int main()
{
    int bil[4], i;

    printf("cara mengisi data array lewat scanf()");

    for(i = 0; i <= 3; i++){
        printf("\nisikanlah data ke-%d ? ", i+1, bil[i]);
        scanf("%d", &bil[i]);
    }

    printf("\nmengeluarkan data array");
    for(i = 0; i <= 3; i++){
        printf("\nisi array ke-%d   = %d", i+1, bil[i]);
    }
}