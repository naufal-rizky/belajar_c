#include <stdio.h>

int main()
{
    int menu;

    printf("PILIHAN MENU HARI INI\n\n[1] SOTO\n[2] BAKSO");
    printf("\n\nPILIHAN ANDA ?");
    scanf("%d", &menu);

    switch(menu)
    {
    case 1:
        printf("Anda telah memilih soto");
        break;
    case 2:
        printf("Anda telah memilih bakso");
        break;
    default:
        printf("Anda salah pilih !!!");
    }
}
