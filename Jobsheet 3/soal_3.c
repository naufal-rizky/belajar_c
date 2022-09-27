#include <stdio.h>

int main()
{
    system("cls");
    int total, num;

    for(num = 10; num <= 100; num++){
        total = num + total;
    }
    printf("total angka : %d", total);
}