#include <stdio.h>

struct Siswa
{
    /* data */
    char nama[20];
    char alamat[30];
    int umur;
};

int main()
{
    int i;
    struct Siswa siswa[3];

    for (i = 0; i < 3; i++)
    {
        printf("Mahasiswa ke-%d\n", i + 1);
        printf("Tulis nama mahasiswa    ?");
        scanf("%s", siswa[i].nama);
        fflush(stdin);
        printf("Tulis alamat mahasiswa  ?");
        scanf("%s", siswa[i].alamat);
        printf("Tulis usia mahasiswa    ?");
        scanf("%d", &siswa[i].umur);
    }

    printf("-------------------------------------------");
    printf("\n   Nama           Alamat            Umur ");
    printf("\n------------------------------------------");

    for (i = 0; i < 3; i++)
    {
        printf("\n%-20s %-30s %8d", siswa[i].nama, siswa[i].alamat, siswa[i].umur);
    }
}
