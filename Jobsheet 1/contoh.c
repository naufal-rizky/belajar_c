#include <stdio.h>

int main()
{
//    printf("Ayo belajar Bahasa C \n");
//    printf("ayo semangat di awal semester!!! \n");

//    PreIncrement();
//    AfterIncrement();
//    PreDecrement();
//    AfterDecrement();
//    Pemendekan();
    RumusPersegi();
//    ScanRumus();


    return 0;
}

//void PreIncrement()
//{
//    int bil = 15;
//
//    printf("=================\n");
//    printf("[++BIL]\n");
//    printf("%d", bil);
//    printf("\n%d", ++bil);
//    printf("\n%d", ++bil);
//    printf("\n%d\n", ++bil);
//
//    return 0;
//}

//void AfterIncrement()
//{
//    int bil = 15;
//
//    printf("=================\n");
//    printf("[BIL++]\n");
//    printf("%d", bil);
//    printf("\n%d", bil++);
//    printf("\n%d", ++bil);
//    printf("\n%d", ++bil);
//
//    return 0;
//}
//
//void PreDecrement()
//{
//    int bil = 15;
//
//    printf("\n=================\n");
//    printf("[--BIL]\n");
//    printf("%d", bil);
//    printf("\n%d", --bil);
//    printf("\n%d", --bil);
//    printf("\n%d", --bil);
//
//    return 0;
//}
//
//void AfterDecrement()
//{
//   int bil = 15;
//
//    printf("\n=================\n");
//    printf("[BIL--]\n");
//    printf("%d", bil);
//    printf("\n%d", --bil);
//    printf("\n%d", bil--);
//    printf("\n%d", --bil);
//
//    return 0;
//}
//
void Pemendekan()
{
    int bil = 25;

    printf("%d", bil);
    bil+=5;
    printf("\n%d", bil);
    bil*=2;
    printf("\n%d", bil);
    bil/=10;
    printf("\n%d", bil);

    return 0;
}
//
//void RumusPersegi()
//{
    float p = 12, l = 7, kel, luas;

    kel     = 2 * (p + l);
    luas    = p * l;

    printf("\n=================\n");
    printf("[RUMUS PERSEGI]\n");
    printf("Dengan Panjang = %8.2f dan lebar = %8.3f Keliling Persegi = %8.4f meter", p, l, kel);
    printf("\nLuas persegi = %8.2f meter persegi\n", luas);

    return 0;
//}

//void ScanRumus()
//{
//    float p, l, kel, luas;
//    printf("isikan nilai panjang ?");
//    scanf("%f", &p);
//    printf("isikan nilai lebar ?");
//    scanf("%f", &l);
//
//    kel = 2*(p+l);
//    luas = p*l;
//
//    printf("Dengan Panjang = %.f dan lebar = %.0f Keliling Persegi = %.0f meter", p, l, kel);
//    printf("\nLuas persegi = %.0f meter persegi\n", luas);
//
//    return 0;
//}
