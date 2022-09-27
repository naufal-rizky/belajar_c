#include <stdio.h>

int main()
{
    int num, total;

    printf("Masukan Angka : ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++){
        total = i + total;
        printf("%d\n", i);
    }
    printf("Total Bilangan : %d", total);

}