#include <stdio.h>

int main()
{
    int num, total;

    printf("Masukan Angka : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        total = i + total;
        printf("%d+", i);
    }
    printf("\nTotal Bilangan : %d", total);

}