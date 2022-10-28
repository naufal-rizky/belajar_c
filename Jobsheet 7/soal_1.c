#include <stdio.h>
#include <string.h>

struct record
{
    int bilangan;
    char kata[5];
    float pecahan;
};

int main()
{
    struct record data;

    data.bilangan = 10;
    strcpy(data.kata, "Naufal");
    data.pecahan = 3.5;

    printf("Bilangan    : %d\n", data.bilangan);
    printf("Kata        : %s\n", data.kata);
    printf("Pecahan     : %.2f\n", data.pecahan);

    return 0;
}
