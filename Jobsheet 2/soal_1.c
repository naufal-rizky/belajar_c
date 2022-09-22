#include <stdio.h>

int main() {
    double radius, keliling, luas;
    double phi = 3.14;

    printf("Masukan jari-jari lingkaran: ");
    scanf("%lf", &radius);

    keliling = 2 * phi * radius;
    luas = 0.5 * phi * radius * radius;

    printf("\nHasil lingkaran\n");
    printf("Jari-jari   = %8.2lf\n", radius);
    printf("Keliling    = %8.2lf\n", keliling);
    printf("Luas        = %8.2lf\n", luas);
}
