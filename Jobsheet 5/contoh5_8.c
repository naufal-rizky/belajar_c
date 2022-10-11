#include <stdio.h>

int main()
{
    int i, j, bil[4][4];

    //mengisi data array
    printf("cara mengisi array 2 dimensi lewat scanf()\n");
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            printf("isikanlah data baris ke %d kolom %d? ", i+1, j+1);
            scanf("%d", &bil[i][j]);
        }
    }

    //menampilkan isi array
    printf("\n\nmengeluarkan data array");
    for(i = 0; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            printf("\nisi array baris %d kolom %d", i+1, j+1, bil[i][j]);
        }
    }
}