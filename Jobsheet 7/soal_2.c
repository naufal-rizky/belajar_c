#include <stdio.h>

struct date
{
    int day, month, year;
} input[30]; // cara lain membuat variable struct

void structParam(struct date *);

int main()
{
    char opt;

    do
    {
        system("cls");
        structParam(&input);
        fflush(stdin);
        printf("Apakah anda ingin lanjutkan operasi ? [y/n] : ");
        scanf("%c", &opt);
    } while (opt == 'y' || opt == 'Y');
}

void structParam(struct date *a)
{
    printf("Program Input Tanggal\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Data ke-%d\n", i + 1);
        printf("Masukan Tanggal (dd-mm-yyyy) : ");
        scanf("%d-%d-%d", &input[i].day, &input[i].month, &input[i].year);
    }
    printf("\n\nData Inputan Tanggal\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Tanggal ke-%d : %d-%d-%d\n", i + 1, input[i].day, input[i].month, input[i].year);
    }
}