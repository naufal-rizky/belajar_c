#include <stdio.h>

int main()
{
    system("cls");
    int num, total = 0;

    printf("Masukan Angka : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        total = total + i;
        printf("%d\n", i);
    }
    printf("Penjumlahan Bilangan Triangular : %d\n", total);
}