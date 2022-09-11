/*Programa que convierte metros a centrimetros y viceversa
12-10-2019
Estructrura selectiva*/

#include"stdio.h"
#include"windows.h"

int main()
{
    float opcion,num;
    printf("Selecciona una opcion\n 1.Convertir de metros a centimetros\n 2.Convertir de centimetros a metros\n");
    scanf("%f",&opcion);
    printf("Que numero desea convertir\n");
    scanf("%f",&num);
    if(opcion==1)
    {
        printf("El resultado es: %.2f centimetros\n",(num) * 100);
    }
    else if(opcion==2)
    {
        printf("El resultado es : %.2f metros\n", (num) / 100);
    }
    if(opcion >= 3)
    {
        printf("Opcion invalida\n");
    }
}