#include <stdio.h>
#define MAKS 10

int main()
{
    int i;
    float total = 0, rata;
    float angka[MAKS];

    for(i = 0; i < MAKS; i++){
        printf("nilai tes ke-%d : ", i+1);
        scanf("%f", &angka[i]);

        total = total + angka[i];
    }
    rata = total / MAKS;
    printf("\nnilai rata-rata = %g\n", rata);
}