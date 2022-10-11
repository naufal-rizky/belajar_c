#include <stdio.h>
#define MAKS 10

int main()
{
    float rata, total = 0;
    float nilai[MAKS];

    for (int i = 0; i < MAKS; i++)
    {
        printf("masukan nilai ke-%d : ", i+1);
        scanf("%f", &nilai[i]);
        total = total + nilai[i];
    }
    rata = total / MAKS;

    printf("Nilai Rata-Rata : %.2f\n", rata);
    
}