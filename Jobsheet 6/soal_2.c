    #include <stdio.h>
    #include <string.h>
    #define MAKS 256

    int upperCase(char []);
    int reverse(char []);

    int main()
    {
        char teks[MAKS];

        printf("masukan teks : ");
        gets(teks);
        upperCase(teks);
        reverse(teks);
    }

    int upperCase(char a[])
    {
        int i;

        for(i = 0; a[i] != '\0'; i++){
            if(a[i] >= 'a' && a[i] <= 'z'){
                a[i] = a[i] - 32;
            }
        }
        printf("\nteks setelah diubah ke huruf besar    = %s", a);
    }

    int reverse(char a[])
    {
        strrev(a);
        printf("\nteks setelah dibalik hurufnya         = %s", a);
    }