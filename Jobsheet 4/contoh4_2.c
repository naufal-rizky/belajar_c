#include <stdio.h>

void garis1()
{
    printf("----------------\n");
}

void garis2()
{
    printf("\n===============\n");
}

void luasSegiTiga()
{
    float a, b, c;

    printf("isikan panjang sisi a   : ");
    scanf("%f", &a);
    printf("isikan panjang sisi b   : ");
    scanf("%f", &b);

    c   = a * b;

    printf("luas    : %8.2f", c);
}

int main()
{
    garis1();
    luasSegiTiga();
    garis2();
}