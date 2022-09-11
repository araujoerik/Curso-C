/*
    Estructura selectiva doble: if-else
*/

#include "stdio.h"
#include "windows.h"

int main()
{
    int num;
    printf("Que numero deseas identificar\n");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Tu numero %d", num);
        printf(" es NEUTRO");
    }
    else if(num%2==0)
    {
        printf("Tu numero %d", num);
        printf(" es PAR\n");
    }
    else
    {
        printf("Tu numero %d", num);
        printf(" es IMPAR\n");
    }
    system("pause>null");
}
