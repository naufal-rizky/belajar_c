#include <stdio.h>

int main()
{
    int x;

    for(x = 1; x <= 9; x++){
        if(x == 6)
            continue;
            printf("%d", x);
    }
}