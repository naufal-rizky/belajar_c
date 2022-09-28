#include <stdio.h>

int main()
{
    float c, r, f;

    printf(" CELSIUS REAMUR FARENHEIT\n");
    for(c = 0; c <= 100; c+=10){
        r   = c * 4 / 5;
        f   = c * 9 / 5 + 32;
        printf("%8.1f%10.1f%12.1f\n", c,r,f);
    }
}