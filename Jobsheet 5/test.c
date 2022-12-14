#include <stdio.h>

void sort(int [], int);
void minMax(int [], int);
void system();

int main()
{
    // deklarasi data
    int data[7];
    int i;
    int n   = sizeof(data) / sizeof(data[0]);

    // untuk membersihkan cmd
    system("cls");
    printf("Masukan Angka untuk Array\n");
    // loop untuk input data
    for(i = 0; i < n; i++){
        printf("masukan data ke-%d : ", i+1);
        scanf("%d", &data[i]);
    }

    // loop untuk menampilkan data yang belum diurutkan
    printf("\ndata sebelum diurutkan : ");
    for(i = 0; i < n; i++){
        printf("%d ", data[i]);
    }

    // memanggil fungsi sort
    sort(data, n);

    // loop untuk menampilkan data yang sudah diurutkan
    printf("\ndata sesudah diurutkan : ");
    for(i = 0; i < n; i++){
        printf("%d ", data[i]);
    }

    // memanggil dan menampilkan nilai max dan min
    minMax(data, n);
    
}

// fungsi pengurutan
void sort(int a[], int n)
{
    int i, j, dummy;

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                dummy   = a[i];
                a[i]    = a[j];
                a[j]    = dummy;
            }
        }
    }
}

// fungsi max dan min
void minMax(int a[], int n)
{
    int min, max, i;
    min = max = a[0];

    for(i = 1; i < n; i++){
        if(min > a[i])
            min = a[i];
        if(max < a[i])
            max = a[i];
    }
    printf("\nnilai tertinggi : %d", max);
    printf("\nnilai terendah  : %d", min);
}