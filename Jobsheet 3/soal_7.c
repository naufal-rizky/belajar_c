#include <stdio.h>

int main()
{
    int i = 5;
    while(i >= 1){
        for(int j = 0; j < i; j++){
            printf("%d", i);
        }
        i--;
        printf("\n");
    }
}
