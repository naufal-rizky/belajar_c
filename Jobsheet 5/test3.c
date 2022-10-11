#include <stdio.h>

#define MAKS 7

void system();
void mainSortM();
void mainSortA();
void mainSortD();
void input(int [], int *);
void sortA(int [], int);
void sortD(int [], int);
void printData(int [], int);

int main()
{
    int inp;

    system("cls");
    printf("MENU\n");
    printf("[1] Terkecil -> Terbesar \n[2] Terbesar -> Terkecil\n[3] Keduanya\n\n");
    printf("SELECT MENU : ");
    scanf("%d", &inp);

    if(inp == 1){
        system("cls");
        mainSortA();
    } 
    else if(inp == 2) 
    {
        system("cls");
        mainSortD();
    }
    else if(inp == 3){
        system("cls");
        mainSortM();
    }
    else{
        printf("\nInvalid Option");
    }
}

void mainSortM()
{
    int data[MAKS];
    int lenght;

    input(data, &lenght);
    sortA(data, lenght);
    printData(data, lenght);
    sortD(data, lenght);
    printData(data, lenght);
}

void mainSortA()
{
    int data[MAKS];
    int lenght;

    input(data, &lenght);
    sortA(data, lenght);
    printData(data, lenght);
}

void mainSortD()
{
    int data[MAKS];
    int lenght;

    input(data, &lenght);
    sortD(data, lenght);
    printData(data, lenght);
}

void input(int x[], int *size)
{
    int lenght, i;

    printf("Total Data = ");
    scanf("%d", &lenght);

    for(i = 0; i < lenght; i++){
        printf("Data %d : ", i+1);
        scanf("%d", &x[i]);
    }

    *size = lenght;
}

void sortA(int x[], int size)
{
    int i, j;
    int dummy;

    for(i = 0; i < size-1; i++){
        for(j = i + 1; j < size; j++){
            if(x[i] > x[j]){
                dummy   = x[i];
                x[i]    = x[j];
                x[j]    = dummy;
            }
        }
    }
}

void sortD(int x[], int size)
{
    int i, j;
    int dummy;

    for(i = 0; i < size-1; i++){
        for(j = i + 1; j < size; j++){
            if(x[i] < x[j]){
                dummy   = x[i];
                x[i]    = x[j];
                x[j]    = dummy;
            }
        }
    }
}

void printData(int x[], int size)
{
    int i;

    printf("\nData Setelah Diurutkan : \n");
    for(i = 0; i < size; i++){
        printf("Data ke-%d : %d \n", i+1, x[i]);
    }
}