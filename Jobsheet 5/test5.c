#include <stdio.h>

void sort(int [], int);

int main()
{
    int data[7]     = {74, 90, 21, 9, 86, 92, 18};
    int jum_data    = sizeof(data) / sizeof(data);
    int i;
    printf("data sebelum diurutkan\n");
    for(i = 0; i < jum_data; i++){
        printf("%d\n", data[i]);
    }

    sort(data, jum_data);

    printf("\ndata setelah diurutkan\n");
    for(i = 0; i < jum_data; i++){
        printf("%d\n", data[i]);
    }
}

void sort(int x[], int jumlah)
{
    int i, j;
    int dummy;

    for(i = 0; i < jumlah-1; i++){
        for(j = 1; j < jumlah; j++){
            if(x[i] < x[j]){
                dummy   = x[i];
                x[i]   = x[j];
                x[j]   = dummy;
            }
        }
    }
}