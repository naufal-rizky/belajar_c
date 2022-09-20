#include <stdio.h>

int main() {
    double radius, luas, volume, tinggi;

    printf("Masukan Jari-Jari   : ");
    scanf("%lf", &radius);
    printf("Masukan Tinggi      : ");
    scanf("%lf", &tinggi);

    luas    = 3.14 * radius * radius;
    volume  = 3.14 * radius * radius * tinggi;

    printf("\nMasukan Nilai\n");
    printf("Jari-Jari   : %8.2lf\n", radius);
    printf("Tinggi      : %8.2lf\n", tinggi);
    printf("Luas        : %8.2lf\n", luas);
    printf("Volume      : %8.2lf\n", volume);
}
