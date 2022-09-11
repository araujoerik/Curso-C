/*
    Programa para identificar si un numero es positivo o negativo
*/

#include"stdio.h"
#include"conio.h"

int main()
{
    int numero;
    printf("Que numero deseas identificar\n");
    scanf("%d",&numero);
    if(numero<0)
    {
        printf("Tu numero es negativo\n");
    }
    if(numero>0)
    {
        printf("Tu numero es positivo\n");
    }
    if(numero==0)
    {
        printf("Tu numero es cero\n");
    }
    getch();
}