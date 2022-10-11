#include <stdio.h>
#define MAKS 20

int main()
{
    float data[MAKS];
    int jum_data;

    pemasukan_data(data, &jum_data);
}

void pemasukan_data(float x[], int *pjumlah)
{
    int jum, i;
    
    printf("jumlah data = ");
    scanf("%d", &jum);

    for(i = 0; i < jum; i++){
        printf("data ke-%d : ", i+1);
        scanf("%f", &x[i]);
    }

    *pjumlah = jum;
}