#include <stdio.h>

int main()
{
    int umur;

    printf("berapakah umur anda ?");
    scanf("%d", &umur);

    if(umur >= 17)
    {
        printf("ANDA BOLEH DAFTAR KTP\n");
    } else {
        printf("ANDA MASIH ANAK-ANAK\n");
    }
}
