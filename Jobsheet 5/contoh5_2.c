#include <stdio.h>

int main()
{
    int bil[4] = {30, 40, 50};
    int j;

    for(j = 0; j <= 2; j++){
        printf("\nIsi Bilangan ke-%d = %d", j+1, bil[j]);
    }
}