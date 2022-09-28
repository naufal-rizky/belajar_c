#include <stdio.h>

int main()
{
    float c = 0, r, f;

    printf(" CELSIUS REAMUR FARENHEIT\n");
    printf("===========================\n");

    do
    {
        r   = c * 4 / 5;
        f   = c * 9 / 5 + 32;
        printf("%8.2f%8.2f%8.2f\n", c,r,f);
        c+=10;
    } while (c <= 100);
    
}