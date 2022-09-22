#include <stdio.h>

int main()
{
    int total;

    for(int i = 10; i <= 100; i++){
        total = total + i;
        printf("%d+", i);
    }
    printf("\n\nTotal : %d ", total);
}
