/*
    Estructura selectiva doble: if-else
*/

#include"stdio.h"
#include"windows.h"

int main()
{
    int num,resultado;
    printf("Que numero deseas identificar\n");
    scanf("%d",&num);
    resultado = num %2;
    if(resultado==0)
    {
        printf("Tu numero %d",num);
        printf(" es PAR");
    }
    if(resultado!=0)
    {
        printf("Tu numero %d",num);
        printf(" es IMPAR\n");
    }
    system("pause>null");
}


