#include "stdio.h"
#include "windows.h"

int main()
{
    int edad;
    do{
    printf("Escribe tu edad \n");
    scanf("%d",&edad);
    if(edad >= 0 && edad <=11)
    {
        printf("Niño\n");
    }
    else if(edad >= 12 && edad <=18)
    {
        printf("Adolescente\n");
    }
    else if (edad >= 18)
    {
        printf("Adulto\n");
    }
}while (edad >=0 && edad <= 100);
}