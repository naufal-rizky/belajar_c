#include <stdio.h>

void sort(int [], int);

// fungsi utama yang akan dijalankan
int main()
{
    // deklarasi data
    int i;
    int data[7];

    // menampung panjang array
    int length  = sizeof(data) / sizeof(data[0]);

    // input data array
    for(i = 0; i < length; i++){
        printf("masukan data ke-%d : ", i+1);
        scanf("%d", &data[i]);
    }

    // menampoilkan data sebelum diurutkan
    printf("\ndata array sebelum di urutkan : \n");
    for(i = 0; i < length; i++){
        printf("%d ", data[i]);
    }
    
    // memanggil fungsi sort
    sort(data, length);

    // menampilkan data array setelah diurutkan
    printf("\ndata array setelah di urutkan : \n");
    for(i = 0; i < length; i++){
        printf("%d ", data[i]);
    }
}

// fungsi untuk mengurutkan data dari besar ke kecil
void sort(int a[], int jumlah)
{
    // inisialisasi data
    int i, j, box;

    // perulangan i dan j
    for(i = 0; i < jumlah-1; i++){
        for(j = i + 1; j < jumlah; j++){
            // tukar data
            if(a[i] < a[j]){
                box     = a[i];
                a[i]    = a[j];
                a[j]    = box;  
            }
        }
    }
}
