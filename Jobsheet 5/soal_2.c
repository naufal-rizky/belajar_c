#include <stdio.h>

int main()
{
    // deklarasi data
    int i;
    int data[7];
    int n = sizeof(data) / sizeof(data[0]);

    for(i = 0; i < n; i++){
        printf("masukan nilai ke-%d : ", i+1);
        scanf("%d", &data[i]);
    }

    minMax(data, n);
}

int minMax(int a[], int n)
{
    int min, max, i;
    min = max = a[0];

    for(i = 1; i < n; i++){
        if(min > a[i])
            min = a[i];
        if(max < a[i])
            max = a[i];
    }

    printf("nilai tertinggi : %d", max);
    printf("\nnilai terendah  : %d", min);
}
