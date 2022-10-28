#include <stdio.h>

struct date
{
    int day, month, year;
};

struct date input[30];

int main()
{
    char opt;

    do
    {
        // membersihkan terminal
        system("cls");

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

        fflush(stdin); // buffer
        printf("Apakah anda ingin lanjutkan operasi ? [y/n] : ");
        scanf("%c", &opt);

    } while (opt == 'y' || opt == 'Y');

    return 0;
}
    
